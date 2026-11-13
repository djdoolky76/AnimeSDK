#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/KNLBAANACKF.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define AKCIAIIKLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x19D55C00)
#define AKCIAIIKLGE_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x19D55190)
#define AKCIAIIKLGE_HCEMDKKMLIE_OFFSET UNITYSDK_OFFSET(0x19D55300)
#define AKCIAIIKLGE_HDAOBMHJJNM_OFFSET UNITYSDK_OFFSET(0x19D55A90)
#define AKCIAIIKLGE_IHIDBLMKCJC_OFFSET UNITYSDK_OFFSET(0x19D55B90)
#define AKCIAIIKLGE_LELLOGCMCKK_OFFSET UNITYSDK_OFFSET(0x19D55B00)
#define AKCIAIIKLGE_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x19D55A40)

inline static constexpr unsigned int AKCIAIIKLGE_TypeDefinitionIndex = 55118;

	class AKCIAIIKLGE : public ::KKEFMOKEJIF
	{
	public:
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x18
		::RPG::GameCore::CharacterModelComponent* INNCJMLIHLJ; // 0x20
		::System::String* FEBOPDHIGEJ; // 0x28
		::RPG::MVector3 KHFGKIIBILM; // 0x30
		::System::Int32 HBDJPEFNPNM; // 0x3C
		::KNLBAANACKF AECKOFKMHLE; // 0x40
		::System::Single BELFKDLGPHC; // 0x80
		::System::Single JDPLJJAPGIJ; // 0x84
		::RPG::MVector3 HLPGPMDKJED; // 0x88
		::System::Single HOHDELAMEBK; // 0x94
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
