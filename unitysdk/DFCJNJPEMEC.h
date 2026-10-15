#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONNMFEFHFMD.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
class DLNGPHPNPAN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFCJNJPEMEC_CTOR_OFFSET UNITYSDK_OFFSET(0xE819A90)
#define DFCJNJPEMEC_IHCMPLNLICP_OFFSET UNITYSDK_OFFSET(0xE819AA0)

inline static constexpr unsigned int DFCJNJPEMEC_TypeDefinitionIndex = 74779;

	class DFCJNJPEMEC : public ::ONNMFEFHFMD
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + DFCJNJPEMEC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GamePlayLockTarget IHCMPLNLICP()
		{
			return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCJNJPEMEC_IHCMPLNLICP_OFFSET))(this);
		}

	};
