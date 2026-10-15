#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/LGIHDAMOLNK_DiffState.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define LGIHDAMOLNK_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB692200)
#define LGIHDAMOLNK_CFCPFFMJMAB_OFFSET UNITYSDK_OFFSET(0xB692740)
#define LGIHDAMOLNK_CKCNHDOJHOO_OFFSET UNITYSDK_OFFSET(0xB692360)
#define LGIHDAMOLNK_CTOR_OFFSET UNITYSDK_OFFSET(0xB692890)
#define LGIHDAMOLNK_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xB6923D0)
#define LGIHDAMOLNK_FGAIMHMHNPI_OFFSET UNITYSDK_OFFSET(0xB692790)
#define LGIHDAMOLNK_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0xB692870)
#define LGIHDAMOLNK_HGLBOMOJOEA_OFFSET UNITYSDK_OFFSET(0xB692250)
#define LGIHDAMOLNK_HGOGGOKJNDB_OFFSET UNITYSDK_OFFSET(0xB692190)
#define LGIHDAMOLNK_KBCJLOGHIAP_OFFSET UNITYSDK_OFFSET(0xB692550)
#define LGIHDAMOLNK_LLFKDNEKBGF_OFFSET UNITYSDK_OFFSET(0xB692600)
#define LGIHDAMOLNK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB691F70)
#define LGIHDAMOLNK_SET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0xB692880)
#define LGIHDAMOLNK__ONBIND_OFFSET UNITYSDK_OFFSET(0xB691E80)
#define LGIHDAMOLNK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB6926F0)
#define LGIHDAMOLNK__ONTICK_OFFSET UNITYSDK_OFFSET(0xB6925A0)

inline static constexpr unsigned int LGIHDAMOLNK_TypeDefinitionIndex = 72155;

	class LGIHDAMOLNK : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::System::UInt32>* APCDJBLBEAF; // 0x60
		::UnityEngine::UI::Text* CPCCPIKCBAP; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
		::UnityEngine::Transform* ILEBMCNOKBC; // 0x80
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x88
		::System::Single HIIGOGNOKGD; // 0x90
		::System::Boolean _IsDisabled_k__BackingField; // 0x94
		::System::Byte _padding0[0x3];
		::LGIHDAMOLNK_DiffState IBPABMILPAC; // 0x98
		::System::Int32 DFOMMCJLMMO; // 0x9C
		// static const ::System::Object FIBPFFLOLFE; // 0x0
		// static const ::System::String* OHHFEDFJJNO; // 0x0
		// static const ::System::String* MLIGEPPKHNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Action_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_NKPPGDENJAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HGLBOMOJOEA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_HGLBOMOJOEA_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Boolean KBCJLOGHIAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_KBCJLOGHIAP_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LGIHDAMOLNK__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK__ONDISPOSE_OFFSET))(this);
		}

		::System::Void HGOGGOKJNDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_HGOGGOKJNDB_OFFSET))(this);
		}

		::System::Void CKCNHDOJHOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_CKCNHDOJHOO_OFFSET))(this);
		}

		::System::Void LLFKDNEKBGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_LLFKDNEKBGF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void FGAIMHMHNPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_FGAIMHMHNPI_OFFSET))(this);
		}

		::System::UInt32 CFCPFFMJMAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_CFCPFFMJMAB_OFFSET))(this);
		}

		::System::Boolean get_IsDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_GET_ISDISABLED_OFFSET))(this);
		}

		::System::Void set_IsDisabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGIHDAMOLNK_SET_ISDISABLED_OFFSET))(this, a1);
		}

	};
