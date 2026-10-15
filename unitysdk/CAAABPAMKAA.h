#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShiftLocalPlayerByAnchor; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CAAABPAMKAA_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B9FD0)
#define CAAABPAMKAA_DBNDENAJHJG_OFFSET UNITYSDK_OFFSET(0xC1BA670)
#define CAAABPAMKAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1B9FE0)
#define CAAABPAMKAA_FMFNEINBLPI_OFFSET UNITYSDK_OFFSET(0xC1BA020)
#define CAAABPAMKAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1BA1C0)
#define CAAABPAMKAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1BA950)
#define CAAABPAMKAA_TICK_OFFSET UNITYSDK_OFFSET(0xC1BA9A0)

	class CAAABPAMKAA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShiftLocalPlayerByAnchor* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShiftLocalPlayerByAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShiftLocalPlayerByAnchor*))((::PBYTE)hIl2Cpp + CAAABPAMKAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAABPAMKAA_DISPOSE_OFFSET))(this);
		}

		::System::Void FMFNEINBLPI(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicString* a2, ::RPG::GameCore::DynamicString* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicString*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CAAABPAMKAA_FMFNEINBLPI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAABPAMKAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAABPAMKAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAAABPAMKAA_TICK_OFFSET))(this, a1);
		}

		::System::Boolean DBNDENAJHJG(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CAAABPAMKAA_DBNDENAJHJG_OFFSET))(this, a1, a2, a3, a4);
		}

	};
