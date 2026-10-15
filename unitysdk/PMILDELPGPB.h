#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MBBBCMLOCFI;
class POKKCEHMFMJ;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define PMILDELPGPB_CTOR_OFFSET UNITYSDK_OFFSET(0xC320600)
#define PMILDELPGPB_DFNAOGNFBKN_OFFSET UNITYSDK_OFFSET(0xC3212A0)
#define PMILDELPGPB_KAKIPMAKGFG_OFFSET UNITYSDK_OFFSET(0xC320E40)
#define PMILDELPGPB_KBCCBLKCGPB_OFFSET UNITYSDK_OFFSET(0xC321000)
#define PMILDELPGPB_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xC320690)
#define PMILDELPGPB_KJAGMKOFOCF_OFFSET UNITYSDK_OFFSET(0xC320F20)
#define PMILDELPGPB_MMFOKAMNGGE_OFFSET UNITYSDK_OFFSET(0xC321580)
#define PMILDELPGPB_NMBPLDFDLJJ_OFFSET UNITYSDK_OFFSET(0xC321780)
#define PMILDELPGPB___REGISTERSUMMATIONFORMULA_B__7_0_OFFSET UNITYSDK_OFFSET(0xC3218A0)

	class PMILDELPGPB
	{
	public:
		::POKKCEHMFMJ* FKBDFJBMPCC; // 0x18
		::System::Void _ctor(::POKKCEHMFMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POKKCEHMFMJ*))((::PBYTE)hIl2Cpp + PMILDELPGPB_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint KAKIPMAKGFG(::RPG::GameCore::AvatarPropertyType a1, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + PMILDELPGPB_KAKIPMAKGFG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint KJAGMKOFOCF(::RPG::GameCore::AvatarPropertyType a1, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + PMILDELPGPB_KJAGMKOFOCF_OFFSET))(this, a1, a2);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMILDELPGPB_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void KBCCBLKCGPB(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3, ::RPG::GameCore::AvatarPropertyType a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + PMILDELPGPB_KBCCBLKCGPB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DFNAOGNFBKN(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + PMILDELPGPB_DFNAOGNFBKN_OFFSET))(this, a1, a2);
		}

		::System::Void MMFOKAMNGGE(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + PMILDELPGPB_MMFOKAMNGGE_OFFSET))(this, a1);
		}

		::System::Void NMBPLDFDLJJ(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + PMILDELPGPB_NMBPLDFDLJJ_OFFSET))(this, a1);
		}

		::MBBBCMLOCFI* __RegisterSummationFormula_b__7_0(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::MBBBCMLOCFI*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + PMILDELPGPB___REGISTERSUMMATIONFORMULA_B__7_0_OFFSET))(this, a1);
		}

	};
