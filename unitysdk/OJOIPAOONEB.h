#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/OJOIPAOONEB_DiffState.h"
namespace RPG::Client { class ActivityElationAvatarData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define OJOIPAOONEB_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xBEC8250)
#define OJOIPAOONEB_CKCNHDOJHOO_OFFSET UNITYSDK_OFFSET(0xBEC8360)
#define OJOIPAOONEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBEC8880)
#define OJOIPAOONEB_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xBEC83D0)
#define OJOIPAOONEB_FGAIMHMHNPI_OFFSET UNITYSDK_OFFSET(0xBEC8780)
#define OJOIPAOONEB_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0xBEC8860)
#define OJOIPAOONEB_HGLBOMOJOEA_OFFSET UNITYSDK_OFFSET(0xBEC82C0)
#define OJOIPAOONEB_HGOGGOKJNDB_OFFSET UNITYSDK_OFFSET(0xBEC81E0)
#define OJOIPAOONEB_KBCJLOGHIAP_OFFSET UNITYSDK_OFFSET(0xBEC8560)
#define OJOIPAOONEB_LLFKDNEKBGF_OFFSET UNITYSDK_OFFSET(0xBEC8680)
#define OJOIPAOONEB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBEC7E40)
#define OJOIPAOONEB_SET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0xBEC8870)
#define OJOIPAOONEB__ONBIND_OFFSET UNITYSDK_OFFSET(0xBEC7DA0)
#define OJOIPAOONEB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBEC8730)
#define OJOIPAOONEB__ONTICK_OFFSET UNITYSDK_OFFSET(0xBEC85B0)

inline static constexpr unsigned int OJOIPAOONEB_TypeDefinitionIndex = 71369;

	class OJOIPAOONEB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* CPCCPIKCBAP; // 0x60
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::System::Action_1<::System::UInt32>* APCDJBLBEAF; // 0x78
		::System::UInt32 DFOMMCJLMMO; // 0x80
		::OJOIPAOONEB_DiffState IBPABMILPAC; // 0x84
		::System::Boolean _IsDisabled_k__BackingField; // 0x88
		::System::Byte _padding0[0x3];
		::System::UInt32 OFEEMOCGHCA; // 0x8C
		::System::Single HIIGOGNOKGD; // 0x90
		// static const ::System::Object FIBPFFLOLFE; // 0x0
		// static const ::System::String* OHHFEDFJJNO; // 0x0
		// static const ::System::String* MLIGEPPKHNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::ActivityElationAvatarData* a1, ::System::UInt32 a2, ::System::Action_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityElationAvatarData*, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OJOIPAOONEB_NKPPGDENJAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HGLBOMOJOEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJOIPAOONEB_HGLBOMOJOEA_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Boolean KBCJLOGHIAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB_KBCJLOGHIAP_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJOIPAOONEB__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void HGOGGOKJNDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB_HGOGGOKJNDB_OFFSET))(this);
		}

		::System::Void CKCNHDOJHOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB_CKCNHDOJHOO_OFFSET))(this);
		}

		::System::Void LLFKDNEKBGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJOIPAOONEB_LLFKDNEKBGF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OJOIPAOONEB_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void FGAIMHMHNPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB_FGAIMHMHNPI_OFFSET))(this);
		}

		::System::Boolean get_IsDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOIPAOONEB_GET_ISDISABLED_OFFSET))(this);
		}

		::System::Void set_IsDisabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJOIPAOONEB_SET_ISDISABLED_OFFSET))(this, a1);
		}

	};
