#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/KNLBAANACKF.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define AKCIAIIKLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCC4E0)
#define AKCIAIIKLGE_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x12CCBA70)
#define AKCIAIIKLGE_HCEMDKKMLIE_OFFSET UNITYSDK_OFFSET(0x12CCBBF0)
#define AKCIAIIKLGE_HDAOBMHJJNM_OFFSET UNITYSDK_OFFSET(0x12CCC370)
#define AKCIAIIKLGE_IHIDBLMKCJC_OFFSET UNITYSDK_OFFSET(0x12CCC470)
#define AKCIAIIKLGE_LELLOGCMCKK_OFFSET UNITYSDK_OFFSET(0x12CCC3E0)
#define AKCIAIIKLGE_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x12CCC320)

	class AKCIAIIKLGE : public ::KKEFMOKEJIF
	{
	public:
		::System::String* FEBOPDHIGEJ; // 0x18
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x20
		::RPG::GameCore::CharacterModelComponent* INNCJMLIHLJ; // 0x28
		::System::Single JDPLJJAPGIJ; // 0x30
		::System::Single HOHDELAMEBK; // 0x34
		::KNLBAANACKF AECKOFKMHLE; // 0x38
		::System::Single BELFKDLGPHC; // 0x78
		::RPG::MVector3 KHFGKIIBILM; // 0x7C
		::System::Int32 HBDJPEFNPNM; // 0x88
		::RPG::MVector3 HLPGPMDKJED; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIAIIKLGE_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIAIIKLGE_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIAIIKLGE_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void HCEMDKKMLIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIAIIKLGE_HCEMDKKMLIE_OFFSET))(this);
		}

		::UnityEngine::Transform* HDAOBMHJJNM()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIAIIKLGE_HDAOBMHJJNM_OFFSET))(this);
		}

		::KNLBAANACKF LELLOGCMCKK()
		{
			return ((::KNLBAANACKF(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIAIIKLGE_LELLOGCMCKK_OFFSET))(this);
		}

		::RPG::MVector3 IHIDBLMKCJC()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIAIIKLGE_IHIDBLMKCJC_OFFSET))(this);
		}

	};
