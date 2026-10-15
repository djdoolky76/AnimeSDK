#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHMJIMHEMLA;
namespace RPG::Client { class AchievementData; }
namespace System { class Object; }

#define CHMJIMHEMLA_BANFFLNPBJN_OFFSET UNITYSDK_OFFSET(0xCF600B0)
#define CHMJIMHEMLA_BHELICFADLM_OFFSET UNITYSDK_OFFSET(0xCF60100)
#define CHMJIMHEMLA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF5FA80)
#define CHMJIMHEMLA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF5FB40)
#define CHMJIMHEMLA_FFKONNIEJKK_OFFSET UNITYSDK_OFFSET(0xCF5FB50)
#define CHMJIMHEMLA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCF5FE10)
#define CHMJIMHEMLA_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xCF5FD90)
#define CHMJIMHEMLA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF5FC00)
#define CHMJIMHEMLA_OLEHFIFCLIN_OFFSET UNITYSDK_OFFSET(0xCF5FE90)

inline static constexpr unsigned int CHMJIMHEMLA_TypeDefinitionIndex = 61368;

	class CHMJIMHEMLA : public ::System::Object
	{
	public:
		::System::Boolean MBJCHLGLHHK; // 0x10
		::System::Boolean AINCFJJHGKB; // 0x11
		::System::Boolean LEMPCDANBLA; // 0x12
		// static const ::System::String* IBLAKEBGAGG; // 0x0
		// static const ::System::String* IJJHMGDNJAN; // 0x0
		// static const ::System::String* CEMCEBKDCPL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIMHEMLA_CTOR_OFFSET))(this);
		}

		static ::CHMJIMHEMLA* BPLPBPMEODA()
		{
			return ((::CHMJIMHEMLA*(*)())((::PBYTE)hIl2Cpp + CHMJIMHEMLA_BPLPBPMEODA_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIMHEMLA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIMHEMLA_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIMHEMLA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void OLEHFIFCLIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHMJIMHEMLA_OLEHFIFCLIN_OFFSET))(this, a1);
		}

		::System::Void BANFFLNPBJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHMJIMHEMLA_BANFFLNPBJN_OFFSET))(this, a1);
		}

		::System::UInt32 BHELICFADLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIMHEMLA_BHELICFADLM_OFFSET))(this);
		}

		::RPG::Client::AchievementData* FFKONNIEJKK()
		{
			return ((::RPG::Client::AchievementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIMHEMLA_FFKONNIEJKK_OFFSET))(this);
		}

	};
