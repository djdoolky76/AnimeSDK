#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBDBABJLIIB;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define DJOHHNPBKBG_CTOR_OFFSET UNITYSDK_OFFSET(0x18C043F0)
#define DJOHHNPBKBG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x18C042C0)
#define DJOHHNPBKBG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18C03E80)
#define DJOHHNPBKBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C04310)

inline static constexpr unsigned int DJOHHNPBKBG_TypeDefinitionIndex = 62136;

	class DJOHHNPBKBG : public ::System::Object
	{
	public:
		::System::String* JIDLKIHJLFL; // 0x10
		::RPG::GameCore::GameEntity* DGCEHLHOGAE; // 0x18
		::System::Boolean KLOIHHLKCNG; // 0x20
		::System::Boolean ADAMOADIAPO; // 0x21
		::System::Boolean FKCJMOLAMKL; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOHHNPBKBG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BBDBABJLIIB* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BBDBABJLIIB*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + DJOHHNPBKBG_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOHHNPBKBG_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOHHNPBKBG_TOSTRING_OFFSET))(this);
		}

	};
