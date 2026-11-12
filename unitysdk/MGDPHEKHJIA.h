#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define MGDPHEKHJIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC1C9CD0)
#define MGDPHEKHJIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1C9EC0)
#define MGDPHEKHJIA_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0xC1C9E00)
#define MGDPHEKHJIA_HMOONNAFBJK_OFFSET UNITYSDK_OFFSET(0xC1C9D80)
#define MGDPHEKHJIA_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xC1C9F10)

inline static constexpr unsigned int MGDPHEKHJIA_TypeDefinitionIndex = 77787;

	class MGDPHEKHJIA : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::UInt32 NHDBMIFNACP; // 0x18
		::System::Boolean AFLGDFPEMNP; // 0x1C
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + MGDPHEKHJIA_CTOR_OFFSET))(this, a1);
		}

		::System::Void HMOONNAFBJK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGDPHEKHJIA_HMOONNAFBJK_OFFSET))(this, a1);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPHEKHJIA_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDPHEKHJIA_DISPOSE_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MGDPHEKHJIA_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};
