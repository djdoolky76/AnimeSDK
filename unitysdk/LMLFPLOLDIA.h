#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtDelayCallState.h"
#include "unitysdk/System/Object.h"
class LMLFPLOLDIA;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }

#define LMLFPLOLDIA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AFD5830)
#define LMLFPLOLDIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD5920)
#define LMLFPLOLDIA_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1AFD5900)
#define LMLFPLOLDIA_GET_PREV_OFFSET UNITYSDK_OFFSET(0x1AFD58E0)
#define LMLFPLOLDIA_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x1AFD5880)
#define LMLFPLOLDIA_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1AFD5910)
#define LMLFPLOLDIA_SET_PREV_OFFSET UNITYSDK_OFFSET(0x1AFD58F0)

inline static constexpr unsigned int LMLFPLOLDIA_TypeDefinitionIndex = 55294;

	class LMLFPLOLDIA : public ::System::Object
	{
	public:
		::LMLFPLOLDIA* _Next_k__BackingField; // 0x10
		::System::Action* IMDLGFPMPEK; // 0x18
		::LMLFPLOLDIA* _Prev_k__BackingField; // 0x20
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
