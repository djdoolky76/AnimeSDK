#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipWaitNavigationArrive; }
namespace System { class Object; }

#define NFJKFNPHBPH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB924E0)
#define NFJKFNPHBPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB92560)
#define NFJKFNPHBPH_FDKMILKJEMG_OFFSET UNITYSDK_OFFSET(0xBB92B70)
#define NFJKFNPHBPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB927D0)
#define NFJKFNPHBPH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB926D0)
#define NFJKFNPHBPH_TICK_OFFSET UNITYSDK_OFFSET(0xBB92A90)

inline static constexpr unsigned int NFJKFNPHBPH_TypeDefinitionIndex = 53442;

	class NFJKFNPHBPH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* HFOFIODMFGB; // 0x20
		::RPG::GameCore::TravelShipWaitNavigationArrive* OFKGLJOAMLD; // 0x28
		::UnityEngine::Vector3 MAJNABOELDH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipWaitNavigationArrive*))((::PBYTE)hIl2Cpp + NFJKFNPHBPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJKFNPHBPH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJKFNPHBPH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJKFNPHBPH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFJKFNPHBPH_TICK_OFFSET))(this, a1);
		}

		::System::Void FDKMILKJEMG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFJKFNPHBPH_FDKMILKJEMG_OFFSET))(this, a1);
		}

	};
