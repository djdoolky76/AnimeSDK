#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BNOFEODOAAO;
class KFBLAAJJHKF;
class MHLFFIDFHLA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNOFEODOAAO_BJHAIOCHDCL_OFFSET UNITYSDK_OFFSET(0xBDE4C60)
#define BNOFEODOAAO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE53A0)
#define BNOFEODOAAO_EGHLNHCEBGA_OFFSET UNITYSDK_OFFSET(0xBDE49C0)
#define BNOFEODOAAO_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xBDE5050)
#define BNOFEODOAAO_HBLNPAMBJEO_OFFSET UNITYSDK_OFFSET(0xBDE4DB0)
#define BNOFEODOAAO_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0xBDE4B10)
#define BNOFEODOAAO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBDE5190)
#define BNOFEODOAAO_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xBDE5230)
#define BNOFEODOAAO_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0xBDE4F00)
#define BNOFEODOAAO_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xBDE4720)
#define BNOFEODOAAO_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0xBDE4870)
#define BNOFEODOAAO_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xBDE51E0)

	class BNOFEODOAAO : public ::System::Object
	{
	public:
		::MHLFFIDFHLA* PELGCDPCJDC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Object* MMFEEJAHPLJ()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_MMFEEJAHPLJ_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterConfig* EGHLNHCEBGA()
		{
			return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_EGHLNHCEBGA_OFFSET))(this);
		}

		::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_IGOGDDNGCLN_OFFSET))(this);
		}

		::System::String* BJHAIOCHDCL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_BJHAIOCHDCL_OFFSET))(this);
		}

		::System::String* HBLNPAMBJEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_HBLNPAMBJEO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KFBLAAJJHKF*>* MDIEKGGLDOM()
		{
			return ((::System::Collections::Generic::List_1<::KFBLAAJJHKF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_MDIEKGGLDOM_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOFEODOAAO_GET_CHARACTERNAME_OFFSET))(this);
		}

		::BNOFEODOAAO* KPJGDHLENIP(::MHLFFIDFHLA* a1)
		{
			return ((::BNOFEODOAAO*(*)(::PVOID, ::MHLFFIDFHLA*))((::PBYTE)hIl2Cpp + BNOFEODOAAO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BNOFEODOAAO_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtAbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + BNOFEODOAAO_MDGNJPIMCPH_OFFSET))(this, a1);
		}

	};
