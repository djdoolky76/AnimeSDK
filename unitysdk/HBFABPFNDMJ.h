#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCLDNDNHPD;
namespace System { class Action; }

#define HBFABPFNDMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15BED710)
#define HBFABPFNDMJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15BED720)
#define HBFABPFNDMJ_TICK_OFFSET UNITYSDK_OFFSET(0x15BED8B0)

inline static constexpr unsigned int HBFABPFNDMJ_TypeDefinitionIndex = 77657;

	class HBFABPFNDMJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFABPFNDMJ_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + HBFABPFNDMJ_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFABPFNDMJ_TICK_OFFSET))(this, a1);
		}

	};
