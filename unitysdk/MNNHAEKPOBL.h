#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationEnergyState.h"
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMapRotationEnergyStateChange; }
namespace System { class Object; }

#define MNNHAEKPOBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA17EA0)
#define MNNHAEKPOBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA180C0)
#define MNNHAEKPOBL_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0xBA183A0)
#define MNNHAEKPOBL__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBA18150)
#define MNNHAEKPOBL__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBA18220)
#define MNNHAEKPOBL__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBA182E0)

inline static constexpr unsigned int MNNHAEKPOBL_TypeDefinitionIndex = 52993;

	class MNNHAEKPOBL
	{
	public:
		::RPG::PoolHashSet_1<::RPG::GameCore::MapRotationEnergyState>* FDCFBMPEJNF; // 0x68
		::RPG::PoolHashSet_1<::RPG::GameCore::MapRotationEnergyState>* BFDIGFLKBOB; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMapRotationEnergyStateChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMapRotationEnergyStateChange*))((::PBYTE)hIl2Cpp + MNNHAEKPOBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNHAEKPOBL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNHAEKPOBL__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNHAEKPOBL__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNHAEKPOBL__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void JLNIGEMKDJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNNHAEKPOBL_JLNIGEMKDJH_OFFSET))(this, a1);
		}

	};
