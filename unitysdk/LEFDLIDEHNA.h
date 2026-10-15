#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONNMFEFHFMD.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
class DLNGPHPNPAN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEFDLIDEHNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB649020)
#define LEFDLIDEHNA_IHCMPLNLICP_OFFSET UNITYSDK_OFFSET(0xB649030)

inline static constexpr unsigned int LEFDLIDEHNA_TypeDefinitionIndex = 74776;

	class LEFDLIDEHNA : public ::ONNMFEFHFMD
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + LEFDLIDEHNA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GamePlayLockTarget IHCMPLNLICP()
		{
			return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFDLIDEHNA_IHCMPLNLICP_OFFSET))(this);
		}

	};
