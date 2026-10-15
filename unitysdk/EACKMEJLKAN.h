#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class EACKMEJLKAN;
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System { class String; }

#define EACKMEJLKAN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1266BEF0)
#define EACKMEJLKAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1266C270)
#define EACKMEJLKAN_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x1266C160)
#define EACKMEJLKAN_GKMCBGNAJFH_OFFSET UNITYSDK_OFFSET(0x1266C210)
#define EACKMEJLKAN_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1266C1C0)
#define EACKMEJLKAN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1266BF90)

inline static constexpr unsigned int EACKMEJLKAN_TypeDefinitionIndex = 80847;

	class EACKMEJLKAN : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* ADIGLGPDGGH; // 0x20
		::System::String* LDNLKDCNEBJ; // 0x28
		::System::Single HBDJCFFDGDD; // 0x30
		::System::Boolean BEMMCKLJICI; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKMEJLKAN_CTOR_OFFSET))(this);
		}

		static ::EACKMEJLKAN* BPLPBPMEODA(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Single a2, ::System::String* a3)
		{
			return ((::EACKMEJLKAN*(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + EACKMEJLKAN_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKMEJLKAN_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKMEJLKAN_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKMEJLKAN_ONCLEAR_OFFSET))(this);
		}

		::System::Void GKMCBGNAJFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACKMEJLKAN_GKMCBGNAJFH_OFFSET))(this);
		}

	};
