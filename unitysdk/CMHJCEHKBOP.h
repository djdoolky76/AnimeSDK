#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CMHJCEHKBOP;
class KGHMBCLFFLG;
namespace RPG::Client { class RelicItemData; }
namespace System { class Object; }

#define CMHJCEHKBOP_ABIKAJFPHPO_OFFSET UNITYSDK_OFFSET(0xDA2D8D0)
#define CMHJCEHKBOP_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0xDA2D800)
#define CMHJCEHKBOP_CTOR_OFFSET UNITYSDK_OFFSET(0xDA2DA00)
#define CMHJCEHKBOP_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xDA2DD90)
#define CMHJCEHKBOP_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0xDA2D730)
#define CMHJCEHKBOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDA2DB40)
#define CMHJCEHKBOP_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xDA2DBF0)
#define CMHJCEHKBOP_EQUALS_OFFSET UNITYSDK_OFFSET(0xDA2DAD0)
#define CMHJCEHKBOP_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xDA2DD00)
#define CMHJCEHKBOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDA2DCA0)
#define CMHJCEHKBOP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDA2D660)
#define CMHJCEHKBOP_GET_UID_OFFSET UNITYSDK_OFFSET(0xDA2D6C0)
#define CMHJCEHKBOP_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xDA2D790)
#define CMHJCEHKBOP_JEMGAEHCHNJ_OFFSET UNITYSDK_OFFSET(0xDA2DA70)
#define CMHJCEHKBOP_JHHMALFPBCL_OFFSET UNITYSDK_OFFSET(0xDA2D9A0)
#define CMHJCEHKBOP_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xDA2D670)
#define CMHJCEHKBOP_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xDA2DA10)
#define CMHJCEHKBOP_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0xDA2D860)
#define CMHJCEHKBOP_NGEKEENAGNO_OFFSET UNITYSDK_OFFSET(0xDA2D940)

inline static constexpr unsigned int CMHJCEHKBOP_TypeDefinitionIndex = 62727;

	class CMHJCEHKBOP : public ::System::Object
	{
	public:
		::RPG::Client::RelicItemData* _Item_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::RelicItemData* get_Item()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_GET_ITEM_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_LDAMHBBILAD_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_GET_UID_OFFSET))(this);
		}

		::System::UInt32 EPGHHDPDFFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_EPGHHDPDFFE_OFFSET))(this);
		}

		::RPG::GameCore::RelicType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::RelicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::UInt32 NFINIHKKLPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_NFINIHKKLPK_OFFSET))(this);
		}

		::System::UInt32 ABIKAJFPHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_ABIKAJFPHPO_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType NGEKEENAGNO()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_NGEKEENAGNO_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* JHHMALFPBCL()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_JHHMALFPBCL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint JEMGAEHCHNJ(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_JEMGAEHCHNJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::CMHJCEHKBOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMHJCEHKBOP*))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGHMBCLFFLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGHMBCLFFLG*))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::CMHJCEHKBOP* a1, ::CMHJCEHKBOP* a2)
		{
			return ((::System::Boolean(*)(::CMHJCEHKBOP*, ::CMHJCEHKBOP*))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::CMHJCEHKBOP* a1, ::CMHJCEHKBOP* a2)
		{
			return ((::System::Boolean(*)(::CMHJCEHKBOP*, ::CMHJCEHKBOP*))((::PBYTE)hIl2Cpp + CMHJCEHKBOP_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
