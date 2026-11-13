#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkTaskContext;

#define AKTASKCONTEXT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBB9A80)
#define AKTASKCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB94A0)
#define AKTASKCONTEXT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EBB9740)
#define AKTASKCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBB9560)
#define AKTASKCONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EBB9670)
#define AKTASKCONTEXT_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EBB94B0)
#define AKTASKCONTEXT_GET_UIDXTHREAD_OFFSET UNITYSDK_OFFSET(0x1EBB99D0)
#define AKTASKCONTEXT_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EBB9500)
#define AKTASKCONTEXT_SET_UIDXTHREAD_OFFSET UNITYSDK_OFFSET(0x1EBB9910)

inline static constexpr unsigned int AkTaskContext_TypeDefinitionIndex = 45867;

	class AkTaskContext : public ::System::Object
	{
	public:
		::System::IntPtr swigCPtr; // 0x10
		::System::Boolean swigCMemOwn; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkTaskContext* a1)
		{
			return ((::System::IntPtr(*)(::AkTaskContext*))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_uIdxThread(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_SET_UIDXTHREAD_OFFSET))(this, a1);
		}

		::System::UInt32 get_uIdxThread()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTASKCONTEXT_GET_UIDXTHREAD_OFFSET))(this);
		}

	};
