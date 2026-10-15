#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CMCLACPDCJN;
class KGHMBCLFFLG;
namespace RPG::Client { class RelicItemData; }
namespace System { class Object; }

#define CMCLACPDCJN_ABIKAJFPHPO_OFFSET UNITYSDK_OFFSET(0xDA200F0)
#define CMCLACPDCJN_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0xDA20020)
#define CMCLACPDCJN_CTOR_OFFSET UNITYSDK_OFFSET(0xDA20230)
#define CMCLACPDCJN_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xDA205B0)
#define CMCLACPDCJN_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0xDA1FF50)
#define CMCLACPDCJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDA20390)
#define CMCLACPDCJN_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xDA20440)
#define CMCLACPDCJN_EQUALS_OFFSET UNITYSDK_OFFSET(0xDA20320)
#define CMCLACPDCJN_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xDA20530)
#define CMCLACPDCJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDA204F0)
#define CMCLACPDCJN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDA1FE30)
#define CMCLACPDCJN_GET_UID_OFFSET UNITYSDK_OFFSET(0xDA1FDD0)
#define CMCLACPDCJN_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xDA1FFB0)
#define CMCLACPDCJN_JEMGAEHCHNJ_OFFSET UNITYSDK_OFFSET(0xDA202B0)
#define CMCLACPDCJN_JHHMALFPBCL_OFFSET UNITYSDK_OFFSET(0xDA201C0)
#define CMCLACPDCJN_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xDA1FDE0)
#define CMCLACPDCJN_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xDA20240)
#define CMCLACPDCJN_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0xDA20080)
#define CMCLACPDCJN_NGEKEENAGNO_OFFSET UNITYSDK_OFFSET(0xDA20160)

inline static constexpr unsigned int CMCLACPDCJN_TypeDefinitionIndex = 62728;

	class CMCLACPDCJN : public ::System::Object
	{
	public:
		::System::UInt32 _UID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMCLACPDCJN_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_GET_UID_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_LDAMHBBILAD_OFFSET))(this);
		}

		::System::UInt32 EPGHHDPDFFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_EPGHHDPDFFE_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* get_Item()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_GET_ITEM_OFFSET))(this);
		}

		::RPG::GameCore::RelicType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::RelicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::UInt32 NFINIHKKLPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_NFINIHKKLPK_OFFSET))(this);
		}

		::System::UInt32 ABIKAJFPHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_ABIKAJFPHPO_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType NGEKEENAGNO()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_NGEKEENAGNO_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* JHHMALFPBCL()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_JHHMALFPBCL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CMCLACPDCJN_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint JEMGAEHCHNJ(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CMCLACPDCJN_JEMGAEHCHNJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::CMCLACPDCJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMCLACPDCJN*))((::PBYTE)hIl2Cpp + CMCLACPDCJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGHMBCLFFLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGHMBCLFFLG*))((::PBYTE)hIl2Cpp + CMCLACPDCJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMCLACPDCJN_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCLACPDCJN_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::CMCLACPDCJN* a1, ::CMCLACPDCJN* a2)
		{
			return ((::System::Boolean(*)(::CMCLACPDCJN*, ::CMCLACPDCJN*))((::PBYTE)hIl2Cpp + CMCLACPDCJN_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::CMCLACPDCJN* a1, ::CMCLACPDCJN* a2)
		{
			return ((::System::Boolean(*)(::CMCLACPDCJN*, ::CMCLACPDCJN*))((::PBYTE)hIl2Cpp + CMCLACPDCJN_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
