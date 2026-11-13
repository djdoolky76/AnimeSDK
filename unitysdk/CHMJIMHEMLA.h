#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHMJIMHEMLA;
namespace RPG::Client { class AchievementData; }
namespace System { class Object; }

#define CHMJIMHEMLA_BANFFLNPBJN_OFFSET UNITYSDK_OFFSET(0x16E2D150)
#define CHMJIMHEMLA_BHELICFADLM_OFFSET UNITYSDK_OFFSET(0x16E2D1A0)
#define CHMJIMHEMLA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16E2CB20)
#define CHMJIMHEMLA_CTOR_OFFSET UNITYSDK_OFFSET(0x16E2CBE0)
#define CHMJIMHEMLA_FFKONNIEJKK_OFFSET UNITYSDK_OFFSET(0x16E2CBF0)
#define CHMJIMHEMLA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16E2CEB0)
#define CHMJIMHEMLA_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x16E2CE30)
#define CHMJIMHEMLA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16E2CCA0)
#define CHMJIMHEMLA_OLEHFIFCLIN_OFFSET UNITYSDK_OFFSET(0x16E2CF30)

inline static constexpr unsigned int CHMJIMHEMLA_TypeDefinitionIndex = 62753;

	class CHMJIMHEMLA : public ::System::Object
	{
	public:
		::System::Boolean LEMPCDANBLA; // 0x10
		::System::Boolean AINCFJJHGKB; // 0x11
		::System::Boolean MBJCHLGLHHK; // 0x12
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
