#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"
class AkBankCallbackInfo;

#define AKBANKCALLBACKINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2082A380)
#define AKBANKCALLBACKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x20829D00)
#define AKBANKCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x20829FA0)
#define AKBANKCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20829DC0)
#define AKBANKCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x20829ED0)
#define AKBANKCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x20829D10)
#define AKBANKCALLBACKINFO_GET_BANKID_OFFSET UNITYSDK_OFFSET(0x2082A170)
#define AKBANKCALLBACKINFO_GET_INMEMORYBANKPTR_OFFSET UNITYSDK_OFFSET(0x2082A220)
#define AKBANKCALLBACKINFO_GET_LOADRESULT_OFFSET UNITYSDK_OFFSET(0x2082A2D0)
#define AKBANKCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x20829D60)

inline static constexpr unsigned int AkBankCallbackInfo_TypeDefinitionIndex = 45795;

	class AkBankCallbackInfo : public ::System::Object
	{
	public:
		::System::IntPtr swigCPtr; // 0x10
		::System::Boolean swigCMemOwn; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkBankCallbackInfo* a1)
		{
			return ((::System::IntPtr(*)(::AkBankCallbackInfo*))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_bankID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GET_BANKID_OFFSET))(this);
		}

		::System::IntPtr get_inMemoryBankPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GET_INMEMORYBANKPTR_OFFSET))(this);
		}

		::AKRESULT get_loadResult()
		{
			return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKCALLBACKINFO_GET_LOADRESULT_OFFSET))(this);
		}

	};
