#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ConvinceInitialize; }
namespace RPG::GameCore { class TaskContext; }

#define KAMBCPANHOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DE860)
#define KAMBCPANHOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2DE870)
#define KAMBCPANHOK_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0xB2DEB90)
#define KAMBCPANHOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2DE8C0)
#define KAMBCPANHOK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2DEAE0)
#define KAMBCPANHOK_TICK_OFFSET UNITYSDK_OFFSET(0xB2DEB30)

	class KAMBCPANHOK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ConvinceInitialize* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceInitialize* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceInitialize*))((::PBYTE)hIl2Cpp + KAMBCPANHOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMBCPANHOK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMBCPANHOK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMBCPANHOK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAMBCPANHOK_TICK_OFFSET))(this, a1);
		}

		::System::Void IJMONDLGAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMBCPANHOK_IJMONDLGAIP_OFFSET))(this);
		}

	};
