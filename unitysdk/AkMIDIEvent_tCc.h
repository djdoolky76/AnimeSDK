#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkMIDIEvent_tCc;

#define AKMIDIEVENT_TCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2084FE20)
#define AKMIDIEVENT_TCC_CTOR_OFFSET UNITYSDK_OFFSET(0x2084F6D0)
#define AKMIDIEVENT_TCC_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x2084F970)
#define AKMIDIEVENT_TCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2084F790)
#define AKMIDIEVENT_TCC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x2084F8A0)
#define AKMIDIEVENT_TCC_GETCPTR_OFFSET UNITYSDK_OFFSET(0x2084F6E0)
#define AKMIDIEVENT_TCC_GET_BYCC_OFFSET UNITYSDK_OFFSET(0x2084FC00)
#define AKMIDIEVENT_TCC_GET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x2084FD70)
#define AKMIDIEVENT_TCC_SETCPTR_OFFSET UNITYSDK_OFFSET(0x2084F730)
#define AKMIDIEVENT_TCC_SET_BYCC_OFFSET UNITYSDK_OFFSET(0x2084FB40)
#define AKMIDIEVENT_TCC_SET_BYVALUE_OFFSET UNITYSDK_OFFSET(0x2084FCB0)

inline static constexpr unsigned int AkMIDIEvent_tCc_TypeDefinitionIndex = 45828;

	class AkMIDIEvent_tCc : public ::System::Object
	{
	public:
		::System::Boolean swigCMemOwn; // 0x10
		::System::Byte _padding0[0x7];
		::System::IntPtr swigCPtr; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkMIDIEvent_tCc* a1)
		{
			return ((::System::IntPtr(*)(::AkMIDIEvent_tCc*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_byCc(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SET_BYCC_OFFSET))(this, a1);
		}

		::System::Byte get_byCc()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GET_BYCC_OFFSET))(this);
		}

		::System::Void set_byValue(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_SET_BYVALUE_OFFSET))(this, a1);
		}

		::System::Byte get_byValue()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TCC_GET_BYVALUE_OFFSET))(this);
		}

	};
