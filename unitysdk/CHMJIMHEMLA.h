#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHMJIMHEMLA;
namespace RPG::Client { class AchievementData; }
namespace System { class Object; }

#define CHMJIMHEMLA_BANFFLNPBJN_OFFSET UNITYSDK_OFFSET(0xCF58AA0)
#define CHMJIMHEMLA_BHELICFADLM_OFFSET UNITYSDK_OFFSET(0xCF58AF0)
#define CHMJIMHEMLA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF58470)
#define CHMJIMHEMLA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF58530)
#define CHMJIMHEMLA_FFKONNIEJKK_OFFSET UNITYSDK_OFFSET(0xCF58540)
#define CHMJIMHEMLA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCF58800)
#define CHMJIMHEMLA_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xCF58780)
#define CHMJIMHEMLA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF585F0)
#define CHMJIMHEMLA_OLEHFIFCLIN_OFFSET UNITYSDK_OFFSET(0xCF58880)

inline static constexpr unsigned int CHMJIMHEMLA_TypeDefinitionIndex = 61368;

	class CHMJIMHEMLA : public ::System::Object
	{
	public:
		::System::Boolean LEMPCDANBLA; // 0x10
		::System::Boolean MBJCHLGLHHK; // 0x11
		::System::Boolean AINCFJJHGKB; // 0x12
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
