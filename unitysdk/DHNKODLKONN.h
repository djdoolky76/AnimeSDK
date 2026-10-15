#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBPEqual; }
namespace System { class Object; }

#define DHNKODLKONN_CIKEMKKJHIK_OFFSET UNITYSDK_OFFSET(0xEBEC0C0)
#define DHNKODLKONN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEBB30)
#define DHNKODLKONN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBEBB40)
#define DHNKODLKONN_MEEPNNMCOCN_OFFSET UNITYSDK_OFFSET(0xEBEBCD0)
#define DHNKODLKONN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBEBC00)
#define DHNKODLKONN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBEC010)
#define DHNKODLKONN_TICK_OFFSET UNITYSDK_OFFSET(0xEBEC060)

	class DHNKODLKONN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitBPEqual* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitBPEqual* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitBPEqual*))((::PBYTE)hIl2Cpp + DHNKODLKONN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNKODLKONN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNKODLKONN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNKODLKONN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHNKODLKONN_TICK_OFFSET))(this, a1);
		}

		::System::Boolean MEEPNNMCOCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNKODLKONN_MEEPNNMCOCN_OFFSET))(this);
		}

		::System::Void CIKEMKKJHIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHNKODLKONN_CIKEMKKJHIK_OFFSET))(this, a1);
		}

	};
