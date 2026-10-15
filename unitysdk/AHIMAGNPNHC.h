#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HLOAEFNDCLJ;
namespace RPG::GameCore { class TaskContext; }

#define AHIMAGNPNHC_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7ED60)
#define AHIMAGNPNHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB7ED70)
#define AHIMAGNPNHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7EDB0)
#define AHIMAGNPNHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB7EE00)
#define AHIMAGNPNHC_TICK_OFFSET UNITYSDK_OFFSET(0xEB7EE50)

inline static constexpr unsigned int AHIMAGNPNHC_TypeDefinitionIndex = 53913;

	class AHIMAGNPNHC : public ::GELIALJDFBL
	{
	public:
		::HLOAEFNDCLJ* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HLOAEFNDCLJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HLOAEFNDCLJ*))((::PBYTE)hIl2Cpp + AHIMAGNPNHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIMAGNPNHC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIMAGNPNHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIMAGNPNHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHIMAGNPNHC_TICK_OFFSET))(this, a1);
		}

	};
