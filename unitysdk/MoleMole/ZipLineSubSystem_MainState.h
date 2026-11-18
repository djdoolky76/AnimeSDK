#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/System/Nullable_1.h"

class LOMGLJPKHAF;
namespace System { class Object; }
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_GET_CURRENTSLIDINGPOINT_OFFSET UNITYSDK_OFFSET(0x11395C00)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x11395B20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0x11395C20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_GET_LASTVALIDSLIDINGPOINT_OFFSET UNITYSDK_OFFSET(0x11395C40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11395C60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_SETCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x11395A00)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_SET_CURRENTSLIDINGPOINT_OFFSET UNITYSDK_OFFSET(0x11395C10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_SET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0x11395C30)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_SET_LASTVALIDSLIDINGPOINT_OFFSET UNITYSDK_OFFSET(0x11395C50)
#define MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x11395D30)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_MainState_TypeDefinitionIndex = 92009;

	class ZipLineSubSystem_MainState : public ::JJEJBPGJPJN
	{
	public:
		::LOMGLJPKHAF* _LastValidSlidingPoint_k__BackingField; // 0x88
		::LJHFMILANJA_1<::System::Boolean>* _IsInBattle_k__BackingField; // 0x90
		::LJHFMILANJA_1<::System::Nullable_1<::System::Object*>>* _CurrentState; // 0x98
		::LOMGLJPKHAF* _CurrentSlidingPoint_k__BackingField; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE__CTOR_OFFSET))(this);
		}

		::System::Void SetCurrentState(::System::Nullable_1<::System::Object*> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_SETCURRENTSTATE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Object*> get_CurrentState()
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::LOMGLJPKHAF* get_CurrentSlidingPoint()
		{
			return ((::LOMGLJPKHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_GET_CURRENTSLIDINGPOINT_OFFSET))(this);
		}

		::System::Void set_CurrentSlidingPoint(::LOMGLJPKHAF* value)
		{
			return ((::System::Void(*)(::PVOID, ::LOMGLJPKHAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_SET_CURRENTSLIDINGPOINT_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_IsInBattle()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_GET_ISINBATTLE_OFFSET))(this);
		}

		::System::Void set_IsInBattle(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_SET_ISINBATTLE_OFFSET))(this, value);
		}

		::LOMGLJPKHAF* get_LastValidSlidingPoint()
		{
			return ((::LOMGLJPKHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_GET_LASTVALIDSLIDINGPOINT_OFFSET))(this);
		}

		::System::Void set_LastValidSlidingPoint(::LOMGLJPKHAF* value)
		{
			return ((::System::Void(*)(::PVOID, ::LOMGLJPKHAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_SET_LASTVALIDSLIDINGPOINT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_MAINSTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
