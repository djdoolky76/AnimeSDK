#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/KNLBAANACKF.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define AKCIAIIKLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC7960)
#define AKCIAIIKLGE_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x12CC6F00)
#define AKCIAIIKLGE_HCEMDKKMLIE_OFFSET UNITYSDK_OFFSET(0x12CC7070)
#define AKCIAIIKLGE_HDAOBMHJJNM_OFFSET UNITYSDK_OFFSET(0x12CC77F0)
#define AKCIAIIKLGE_IHIDBLMKCJC_OFFSET UNITYSDK_OFFSET(0x12CC78F0)
#define AKCIAIIKLGE_LELLOGCMCKK_OFFSET UNITYSDK_OFFSET(0x12CC7860)
#define AKCIAIIKLGE_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x12CC77A0)

inline static constexpr unsigned int AKCIAIIKLGE_TypeDefinitionIndex = 53954;

	class AKCIAIIKLGE : public ::KKEFMOKEJIF
	{
	public:
		::RPG::GameCore::CharacterModelComponent* INNCJMLIHLJ; // 0x18
		::System::String* FEBOPDHIGEJ; // 0x20
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x28
		::System::Single JDPLJJAPGIJ; // 0x30
		::KNLBAANACKF AECKOFKMHLE; // 0x34
		::System::Single HOHDELAMEBK; // 0x74
		::RPG::MVector3 HLPGPMDKJED; // 0x78
		::RPG::MVector3 KHFGKIIBILM; // 0x84
		::System::Single BELFKDLGPHC; // 0x90
		::System::Int32 HBDJPEFNPNM; // 0x94
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
