#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/KNLBAANACKF.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define AKCIAIIKLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x12DB2BE0)
#define AKCIAIIKLGE_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x12DB21A0)
#define AKCIAIIKLGE_HCEMDKKMLIE_OFFSET UNITYSDK_OFFSET(0x12DB2300)
#define AKCIAIIKLGE_HDAOBMHJJNM_OFFSET UNITYSDK_OFFSET(0x12DB2A70)
#define AKCIAIIKLGE_IHIDBLMKCJC_OFFSET UNITYSDK_OFFSET(0x12DB2B70)
#define AKCIAIIKLGE_LELLOGCMCKK_OFFSET UNITYSDK_OFFSET(0x12DB2AE0)
#define AKCIAIIKLGE_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x12DB2A20)

inline static constexpr unsigned int AKCIAIIKLGE_TypeDefinitionIndex = 55118;

	class AKCIAIIKLGE : public ::KKEFMOKEJIF
	{
	public:
		::System::String* FEBOPDHIGEJ; // 0x18
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x20
		::RPG::GameCore::CharacterModelComponent* INNCJMLIHLJ; // 0x28
		::RPG::MVector3 KHFGKIIBILM; // 0x30
		::RPG::MVector3 HLPGPMDKJED; // 0x3C
		::System::Single BELFKDLGPHC; // 0x48
		::System::Single HOHDELAMEBK; // 0x4C
		::System::Int32 HBDJPEFNPNM; // 0x50
		::System::Single JDPLJJAPGIJ; // 0x54
		::KNLBAANACKF AECKOFKMHLE; // 0x58
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
