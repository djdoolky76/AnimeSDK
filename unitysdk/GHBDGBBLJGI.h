#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHBDGBBLJGI;
namespace RPG::Client { class AchievementData; }
namespace System { class Object; }

#define GHBDGBBLJGI_BANFFLNPBJN_OFFSET UNITYSDK_OFFSET(0x15A096D0)
#define GHBDGBBLJGI_BHELICFADLM_OFFSET UNITYSDK_OFFSET(0x15A09720)
#define GHBDGBBLJGI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A090A0)
#define GHBDGBBLJGI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A09160)
#define GHBDGBBLJGI_FFKONNIEJKK_OFFSET UNITYSDK_OFFSET(0x15A09170)
#define GHBDGBBLJGI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15A09430)
#define GHBDGBBLJGI_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x15A093B0)
#define GHBDGBBLJGI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A09220)
#define GHBDGBBLJGI_OLEHFIFCLIN_OFFSET UNITYSDK_OFFSET(0x15A094B0)

inline static constexpr unsigned int GHBDGBBLJGI_TypeDefinitionIndex = 61372;

	class GHBDGBBLJGI : public ::System::Object
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDGBBLJGI_CTOR_OFFSET))(this);
		}

		static ::GHBDGBBLJGI* BPLPBPMEODA()
		{
			return ((::GHBDGBBLJGI*(*)())((::PBYTE)hIl2Cpp + GHBDGBBLJGI_BPLPBPMEODA_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDGBBLJGI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDGBBLJGI_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDGBBLJGI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void OLEHFIFCLIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHBDGBBLJGI_OLEHFIFCLIN_OFFSET))(this, a1);
		}

		::System::Void BANFFLNPBJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHBDGBBLJGI_BANFFLNPBJN_OFFSET))(this, a1);
		}

		::System::UInt32 BHELICFADLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDGBBLJGI_BHELICFADLM_OFFSET))(this);
		}

		::RPG::Client::AchievementData* FFKONNIEJKK()
		{
			return ((::RPG::Client::AchievementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDGBBLJGI_FFKONNIEJKK_OFFSET))(this);
		}

	};
