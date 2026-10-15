#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class IJHPDDHMEHA;
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_ABNKIIKKKAC_OFFSET UNITYSDK_OFFSET(0xD93B400)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD93B100)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_EJJFLKCEKKF_OFFSET UNITYSDK_OFFSET(0xD93B2A0)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_FEMHDACAAHO_OFFSET UNITYSDK_OFFSET(0xD93B500)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_RELEASE_OFFSET UNITYSDK_OFFSET(0xD93B490)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_SETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xD93AD90)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_SETINFOOFFSET_OFFSET UNITYSDK_OFFSET(0xD93B440)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xD93B110)

namespace RPG::Client::NavMap
{
	class DebugDrawnInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IJHPDDHMEHA* DODNHKCLIGO; // 0x18
		::System::String* GBFLBJMMPGJ; // 0x20
		::System::Int32 PBPAJJAMNEC; // 0x28
		::System::Boolean _IsShow; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_UPDATE_OFFSET))(this);
		}

		::System::Void ABNKIIKKKAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_ABNKIIKKKAC_OFFSET))(this);
		}

		::System::Void SetInfoOffset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_SETINFOOFFSET_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_RELEASE_OFFSET))(this);
		}

		::System::Boolean EJJFLKCEKKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_EJJFLKCEKKF_OFFSET))(this);
		}

		::System::Void FEMHDACAAHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_FEMHDACAAHO_OFFSET))(this);
		}

		::System::Void SetDebugInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNINFO_SETDEBUGINFO_OFFSET))(this, a1);
		}

	};
}
