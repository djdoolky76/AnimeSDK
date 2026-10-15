#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCIAMPIIHPF.h"
#include "unitysdk/CNHJODGMHPN_CustomDataChannel.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNHJODGMHPN_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0xDA4B3F0)
#define CNHJODGMHPN_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4CAF0)

inline static constexpr unsigned int CNHJODGMHPN_TypeDefinitionIndex = 70631;

	class CNHJODGMHPN : public ::BCIAMPIIHPF
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GINMNCLNFCF; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* IKJPLHINJMH; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* GLOIAGHEBML; // 0x40
		::System::String* EINFJLDMHOA; // 0x48
		::System::Single FDODPACHCFE; // 0x50
		::CNHJODGMHPN_CustomDataChannel IHGCIPOANNK; // 0x54
		::System::Single OMKIKAECLDF; // 0x58
		::System::Single FLAKJKCOBPN; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHJODGMHPN_CTOR_OFFSET))(this);
		}

		::System::Void CONFIAMBBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHJODGMHPN_CONFIAMBBBC_OFFSET))(this);
		}

	};
