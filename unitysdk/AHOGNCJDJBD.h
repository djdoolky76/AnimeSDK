#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NABHGBNKEAP.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelSkillEffectScope.h"
namespace System { class String; }

#define AHOGNCJDJBD_ANJABHALPII_OFFSET UNITYSDK_OFFSET(0xEB84CE0)
#define AHOGNCJDJBD_CMIDGJOHDKN_OFFSET UNITYSDK_OFFSET(0xEB84B60)
#define AHOGNCJDJBD_CTOR_OFFSET UNITYSDK_OFFSET(0xEB84E90)
#define AHOGNCJDJBD_FDOGCHFNLEE_OFFSET UNITYSDK_OFFSET(0xEB84AF0)
#define AHOGNCJDJBD_NCGDIEMGJGN_OFFSET UNITYSDK_OFFSET(0xEB84DA0)
#define AHOGNCJDJBD_PNOFOJLJLDM_OFFSET UNITYSDK_OFFSET(0xEB84C20)

inline static constexpr unsigned int AHOGNCJDJBD_TypeDefinitionIndex = 77561;

	class AHOGNCJDJBD : public ::NABHGBNKEAP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOGNCJDJBD_CTOR_OFFSET))(this);
		}

		::System::String* FDOGCHFNLEE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOGNCJDJBD_FDOGCHFNLEE_OFFSET))(this);
		}

		::System::Void CMIDGJOHDKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHOGNCJDJBD_CMIDGJOHDKN_OFFSET))(this, a1);
		}

		::System::Void PNOFOJLJLDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHOGNCJDJBD_PNOFOJLJLDM_OFFSET))(this, a1);
		}

		::System::Void ANJABHALPII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHOGNCJDJBD_ANJABHALPII_OFFSET))(this, a1);
		}

		::System::Void NCGDIEMGJGN(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelSkillEffectScope a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelSkillEffectScope))((::PBYTE)hIl2Cpp + AHOGNCJDJBD_NCGDIEMGJGN_OFFSET))(this, a1, a2);
		}

	};
