#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtDelayCallState.h"
#include "unitysdk/System/Object.h"
class LMLFPLOLDIA;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }

#define LMLFPLOLDIA_CLEAR_OFFSET UNITYSDK_OFFSET(0xC02BF50)
#define LMLFPLOLDIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC02C040)
#define LMLFPLOLDIA_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xC02C020)
#define LMLFPLOLDIA_GET_PREV_OFFSET UNITYSDK_OFFSET(0xC02C000)
#define LMLFPLOLDIA_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xC02BFA0)
#define LMLFPLOLDIA_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xC02C030)
#define LMLFPLOLDIA_SET_PREV_OFFSET UNITYSDK_OFFSET(0xC02C010)

inline static constexpr unsigned int LMLFPLOLDIA_TypeDefinitionIndex = 55294;

	class LMLFPLOLDIA : public ::System::Object
	{
	public:
		::LMLFPLOLDIA* _Prev_k__BackingField; // 0x10
		::LMLFPLOLDIA* _Next_k__BackingField; // 0x18
		::System::Action* IMDLGFPMPEK; // 0x20
		::RPG::GameCore::FixPoint EPKFMHNJGDE; // 0x28
		::RPG::GameCore::RtDelayCallState MEPFOEEGBEA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLFPLOLDIA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLFPLOLDIA_CLEAR_OFFSET))(this);
		}

		static ::System::Void KAOLPGACCID(::RPG::GameCore::GameWorld* a1, ::LMLFPLOLDIA* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::LMLFPLOLDIA*))((::PBYTE)hIl2Cpp + LMLFPLOLDIA_KAOLPGACCID_OFFSET))(a1, a2);
		}

		::LMLFPLOLDIA* get_Prev()
		{
			return ((::LMLFPLOLDIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLFPLOLDIA_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::LMLFPLOLDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMLFPLOLDIA*))((::PBYTE)hIl2Cpp + LMLFPLOLDIA_SET_PREV_OFFSET))(this, a1);
		}

		::LMLFPLOLDIA* get_Next()
		{
			return ((::LMLFPLOLDIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLFPLOLDIA_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::LMLFPLOLDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMLFPLOLDIA*))((::PBYTE)hIl2Cpp + LMLFPLOLDIA_SET_NEXT_OFFSET))(this, a1);
		}

	};
