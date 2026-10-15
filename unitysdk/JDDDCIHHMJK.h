#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONNMFEFHFMD.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
class DLNGPHPNPAN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDDDCIHHMJK_CTOR_OFFSET UNITYSDK_OFFSET(0x165B0370)
#define JDDDCIHHMJK_IHCMPLNLICP_OFFSET UNITYSDK_OFFSET(0x165B0380)

inline static constexpr unsigned int JDDDCIHHMJK_TypeDefinitionIndex = 74778;

	class JDDDCIHHMJK : public ::ONNMFEFHFMD
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + JDDDCIHHMJK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GamePlayLockTarget IHCMPLNLICP()
		{
			return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDDCIHHMJK_IHCMPLNLICP_OFFSET))(this);
		}

	};
