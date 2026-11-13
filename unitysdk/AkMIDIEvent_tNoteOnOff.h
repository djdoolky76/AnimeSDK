#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkMIDIEvent_tNoteOnOff;

#define AKMIDIEVENT_TNOTEONOFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F304E00)
#define AKMIDIEVENT_TNOTEONOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3046B0)
#define AKMIDIEVENT_TNOTEONOFF_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F304950)
#define AKMIDIEVENT_TNOTEONOFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F304770)
#define AKMIDIEVENT_TNOTEONOFF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F304880)
#define AKMIDIEVENT_TNOTEONOFF_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1F3046C0)
#define AKMIDIEVENT_TNOTEONOFF_GET_BYNOTE_OFFSET UNITYSDK_OFFSET(0x1F304BE0)
#define AKMIDIEVENT_TNOTEONOFF_GET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F304D50)
#define AKMIDIEVENT_TNOTEONOFF_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1F304710)
#define AKMIDIEVENT_TNOTEONOFF_SET_BYNOTE_OFFSET UNITYSDK_OFFSET(0x1F304B20)
#define AKMIDIEVENT_TNOTEONOFF_SET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F304C90)

inline static constexpr unsigned int AkMIDIEvent_tNoteOnOff_TypeDefinitionIndex = 45827;

	class AkMIDIEvent_tNoteOnOff : public ::System::Object
	{
	public:
		::System::IntPtr swigCPtr; // 0x10
		::System::Boolean swigCMemOwn; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkMIDIEvent_tNoteOnOff* a1)
		{
			return ((::System::IntPtr(*)(::AkMIDIEvent_tNoteOnOff*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_byNote(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_SET_BYNOTE_OFFSET))(this, a1);
		}

		::System::Byte get_byNote()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_GET_BYNOTE_OFFSET))(this);
		}

		::System::Void set_byVelocity(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_SET_BYVELOCITY_OFFSET))(this, a1);
		}

		::System::Byte get_byVelocity()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TNOTEONOFF_GET_BYVELOCITY_OFFSET))(this);
		}

	};
