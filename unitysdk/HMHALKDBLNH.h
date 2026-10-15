#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class ECNBMFKIPFB;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define HMHALKDBLNH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D81B90)
#define HMHALKDBLNH_MBNOLADPNOH_OFFSET UNITYSDK_OFFSET(0x15D81E40)
#define HMHALKDBLNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D81BC0)
#define HMHALKDBLNH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D820E0)
#define HMHALKDBLNH_TICK_OFFSET UNITYSDK_OFFSET(0x15D82130)

inline static constexpr unsigned int HMHALKDBLNH_TypeDefinitionIndex = 52140;

	class HMHALKDBLNH
	{
	public:
		::NGFHCJIAOLH* DPOJGPNDPMD; // 0x28
		::UnityEngine::Quaternion ACDOFFNEDEF; // 0x30
		::System::Single CLFBEHPCHOE; // 0x40
		::UnityEngine::Quaternion HBAIICJGPGC; // 0x44
		::System::Single PGMIOKKLHIE; // 0x54
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ECNBMFKIPFB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ECNBMFKIPFB*))((::PBYTE)hIl2Cpp + HMHALKDBLNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHALKDBLNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHALKDBLNH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMHALKDBLNH_TICK_OFFSET))(this, a1);
		}

		::System::Void MBNOLADPNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHALKDBLNH_MBNOLADPNOH_OFFSET))(this);
		}

	};
