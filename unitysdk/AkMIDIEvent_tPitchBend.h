#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkMIDIEvent_tPitchBend;

#define AKMIDIEVENT_TPITCHBEND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x208523B0)
#define AKMIDIEVENT_TPITCHBEND_CTOR_OFFSET UNITYSDK_OFFSET(0x20851C60)
#define AKMIDIEVENT_TPITCHBEND_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x20851F00)
#define AKMIDIEVENT_TPITCHBEND_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20851D20)
#define AKMIDIEVENT_TPITCHBEND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x20851E30)
#define AKMIDIEVENT_TPITCHBEND_GETCPTR_OFFSET UNITYSDK_OFFSET(0x20851C70)
#define AKMIDIEVENT_TPITCHBEND_GET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x20852190)
#define AKMIDIEVENT_TPITCHBEND_GET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x20852300)
#define AKMIDIEVENT_TPITCHBEND_SETCPTR_OFFSET UNITYSDK_OFFSET(0x20851CC0)
#define AKMIDIEVENT_TPITCHBEND_SET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x208520D0)
#define AKMIDIEVENT_TPITCHBEND_SET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x20852240)

inline static constexpr unsigned int AkMIDIEvent_tPitchBend_TypeDefinitionIndex = 45829;

	class AkMIDIEvent_tPitchBend : public ::System::Object
	{
	public:
		::System::IntPtr swigCPtr; // 0x10
		::System::Boolean swigCMemOwn; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkMIDIEvent_tPitchBend* a1)
		{
			return ((::System::IntPtr(*)(::AkMIDIEvent_tPitchBend*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_byValueLsb(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_SET_BYVALUELSB_OFFSET))(this, a1);
		}

		::System::Byte get_byValueLsb()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_GET_BYVALUELSB_OFFSET))(this);
		}

		::System::Void set_byValueMsb(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_SET_BYVALUEMSB_OFFSET))(this, a1);
		}

		::System::Byte get_byValueMsb()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPITCHBEND_GET_BYVALUEMSB_OFFSET))(this);
		}

	};
