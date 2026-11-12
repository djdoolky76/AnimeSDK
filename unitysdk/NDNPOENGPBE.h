#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveShield; }
namespace RPG::GameCore { class TaskContext; }

#define NDNPOENGPBE_CTOR_OFFSET UNITYSDK_OFFSET(0xC3DEC10)
#define NDNPOENGPBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3DEC20)
#define NDNPOENGPBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3DEC60)
#define NDNPOENGPBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC3DF150)
#define NDNPOENGPBE_TICK_OFFSET UNITYSDK_OFFSET(0xC3DF1A0)

inline static constexpr unsigned int NDNPOENGPBE_TypeDefinitionIndex = 56494;

	class NDNPOENGPBE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RemoveShield* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveShield* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveShield*))((::PBYTE)hIl2Cpp + NDNPOENGPBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNPOENGPBE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNPOENGPBE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNPOENGPBE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDNPOENGPBE_TICK_OFFSET))(this, a1);
		}

	};
