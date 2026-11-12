#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkThreadProperties;

#define AKTHREADPROPERTIES_CTOR_1_OFFSET UNITYSDK_OFFSET(0x208BFAF0)
#define AKTHREADPROPERTIES_CTOR_OFFSET UNITYSDK_OFFSET(0x208BF230)
#define AKTHREADPROPERTIES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x208BF4D0)
#define AKTHREADPROPERTIES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x208BF2F0)
#define AKTHREADPROPERTIES_FINALIZE_OFFSET UNITYSDK_OFFSET(0x208BF400)
#define AKTHREADPROPERTIES_GETCPTR_OFFSET UNITYSDK_OFFSET(0x208BF240)
#define AKTHREADPROPERTIES_GET_DWAFFINITYMASK_OFFSET UNITYSDK_OFFSET(0x208BF8D0)
#define AKTHREADPROPERTIES_GET_NPRIORITY_OFFSET UNITYSDK_OFFSET(0x208BF760)
#define AKTHREADPROPERTIES_GET_USTACKSIZE_OFFSET UNITYSDK_OFFSET(0x208BFA40)
#define AKTHREADPROPERTIES_SETCPTR_OFFSET UNITYSDK_OFFSET(0x208BF290)
#define AKTHREADPROPERTIES_SET_DWAFFINITYMASK_OFFSET UNITYSDK_OFFSET(0x208BF810)
#define AKTHREADPROPERTIES_SET_NPRIORITY_OFFSET UNITYSDK_OFFSET(0x208BF6A0)
#define AKTHREADPROPERTIES_SET_USTACKSIZE_OFFSET UNITYSDK_OFFSET(0x208BF980)

inline static constexpr unsigned int AkThreadProperties_TypeDefinitionIndex = 45880;

	class AkThreadProperties : public ::System::Object
	{
	public:
		::System::IntPtr swigCPtr; // 0x10
		::System::Boolean swigCMemOwn; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkThreadProperties* a1)
		{
			return ((::System::IntPtr(*)(::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_nPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_NPRIORITY_OFFSET))(this, a1);
		}

		::System::Int32 get_nPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_NPRIORITY_OFFSET))(this);
		}

		::System::Void set_dwAffinityMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_DWAFFINITYMASK_OFFSET))(this, a1);
		}

		::System::UInt32 get_dwAffinityMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_DWAFFINITYMASK_OFFSET))(this);
		}

		::System::Void set_uStackSize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_USTACKSIZE_OFFSET))(this, a1);
		}

		::System::UInt32 get_uStackSize()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_USTACKSIZE_OFFSET))(this);
		}

	};
