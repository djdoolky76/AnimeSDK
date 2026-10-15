#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBLEOHLLHNA;

#define DFHADNIAOAD_APJBMIINHDI_OFFSET UNITYSDK_OFFSET(0xE82DAE0)
#define DFHADNIAOAD_CTOR_OFFSET UNITYSDK_OFFSET(0xE82DD20)
#define DFHADNIAOAD_GET_STATE_OFFSET UNITYSDK_OFFSET(0xE82DA00)
#define DFHADNIAOAD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE82DCD0)
#define DFHADNIAOAD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE82DC80)
#define DFHADNIAOAD_PAACMDEDAIN_OFFSET UNITYSDK_OFFSET(0xE82DA20)
#define DFHADNIAOAD_SET_STATE_OFFSET UNITYSDK_OFFSET(0xE82DA10)

inline static constexpr unsigned int DFHADNIAOAD_TypeDefinitionIndex = 75768;

	class DFHADNIAOAD : public ::System::Object
	{
	public:
		::GBLEOHLLHNA* _State_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHADNIAOAD_CTOR_OFFSET))(this);
		}

		::GBLEOHLLHNA* get_State()
		{
			return ((::GBLEOHLLHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHADNIAOAD_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::GBLEOHLLHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBLEOHLLHNA*))((::PBYTE)hIl2Cpp + DFHADNIAOAD_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void PAACMDEDAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHADNIAOAD_PAACMDEDAIN_OFFSET))(this);
		}

		::System::Void APJBMIINHDI(::GBLEOHLLHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBLEOHLLHNA*))((::PBYTE)hIl2Cpp + DFHADNIAOAD_APJBMIINHDI_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::GBLEOHLLHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBLEOHLLHNA*))((::PBYTE)hIl2Cpp + DFHADNIAOAD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHADNIAOAD_HADOHLNHHGB_OFFSET))(this);
		}

	};
