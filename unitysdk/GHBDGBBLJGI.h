#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHBDGBBLJGI;
namespace RPG::Client { class AchievementData; }
namespace System { class Object; }

#define GHBDGBBLJGI_BANFFLNPBJN_OFFSET UNITYSDK_OFFSET(0x15A14FE0)
#define GHBDGBBLJGI_BHELICFADLM_OFFSET UNITYSDK_OFFSET(0x15A15030)
#define GHBDGBBLJGI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A149B0)
#define GHBDGBBLJGI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A14A70)
#define GHBDGBBLJGI_FFKONNIEJKK_OFFSET UNITYSDK_OFFSET(0x15A14A80)
#define GHBDGBBLJGI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15A14D40)
#define GHBDGBBLJGI_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x15A14CC0)
#define GHBDGBBLJGI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A14B30)
#define GHBDGBBLJGI_OLEHFIFCLIN_OFFSET UNITYSDK_OFFSET(0x15A14DC0)

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
