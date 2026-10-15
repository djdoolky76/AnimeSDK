#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLHPMAFJLA_OKFEBAMOPPB.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define DLLHPMAFJLA_CCTOR_OFFSET UNITYSDK_OFFSET(0xF8A6FB0)
#define DLLHPMAFJLA_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0xF8A6F90)
#define DLLHPMAFJLA_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A6FA0)
#define DLLHPMAFJLA_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xF8A6670)
#define DLLHPMAFJLA_HCJMNNMLOIA_OFFSET UNITYSDK_OFFSET(0xF8A6410)
#define DLLHPMAFJLA_HEADPIPGKCB_OFFSET UNITYSDK_OFFSET(0xF8A6610)
#define DLLHPMAFJLA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF8A5D90)
#define DLLHPMAFJLA_NEBGFFGPEEA_OFFSET UNITYSDK_OFFSET(0xF8A64C0)
#define DLLHPMAFJLA_OPIIEBHOGOF_OFFSET UNITYSDK_OFFSET(0xF8A5E20)

inline static constexpr unsigned int DLLHPMAFJLA_TypeDefinitionIndex = 61035;

	class DLLHPMAFJLA : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x10
		::System::String* JEFGLLBIGIO; // 0x18
		::DLLHPMAFJLA_OKFEBAMOPPB IPOGJOIFCNG; // 0x20
		::OOCCBMLAELL* LICMIKIFMJN; // 0x40
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x48
		::System::Int32 KHDHMKAAPGE; // 0x50
		::System::Int32 BAOOLPLLAME; // 0x54
		static ::Il2CppArray<::RPG::GameCore::TurnState>** StaticGet_BHEACGEEHAF()
		{
			return (::Il2CppArray<::RPG::GameCore::TurnState>**)UnitySDK::FromName("", "DLLHPMAFJLA")->GetStaticField(0x597D0);
		}

		// static const ::System::String* FOHLNIHIBMG; // 0x0
		// static const ::System::String* KHFDLEELAKK; // 0x0
		// static const ::System::String* JLJDAJEMCMA; // 0x0
		// static const ::System::String* HCHAKNFMALH; // 0x0
		// static const ::System::String* GELCHFADPGH; // 0x0
		// static const ::System::Object MPKPILNMIIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLLHPMAFJLA_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::OOCCBMLAELL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HCJMNNMLOIA(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_HCJMNNMLOIA_OFFSET))(this, a1);
		}

		::System::Void OPIIEBHOGOF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_OPIIEBHOGOF_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_DFFCHNLKELO_OFFSET))(this, a1);
		}

		static ::System::String* HEADPIPGKCB(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_HEADPIPGKCB_OFFSET))(a1, a2);
		}

		static ::System::String* NEBGFFGPEEA(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_NEBGFFGPEEA_OFFSET))(a1);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_CGDNPIJGNNK_OFFSET))(this);
		}

	};
