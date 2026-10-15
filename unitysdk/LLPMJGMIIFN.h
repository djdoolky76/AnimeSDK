#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/LLPMJGMIIFN_KPANKHFEBFL.h"
namespace System { class Object; }

#define LLPMJGMIIFN_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1A580)
#define LLPMJGMIIFN_DHBFCHLKMHP_OFFSET UNITYSDK_OFFSET(0x1A540)
#define LLPMJGMIIFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A520)
#define LLPMJGMIIFN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A530)
#define LLPMJGMIIFN_HFPJMFFFAFH_OFFSET UNITYSDK_OFFSET(0x1A510)
#define LLPMJGMIIFN_IFECIGGPKOP_OFFSET UNITYSDK_OFFSET(0x1A590)
#define LLPMJGMIIFN_NEMPMIMIOGL_OFFSET UNITYSDK_OFFSET(0x1A570)

inline static constexpr unsigned int LLPMJGMIIFN_TypeDefinitionIndex = 71073;

	struct alignas(8) LLPMJGMIIFN
	{
		::Unity::Collections::NativeArray_1<::System::Object*> MOEJEDHCMEO; // 0x10
		::System::Void HFPJMFFFAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMJGMIIFN_HFPJMFFFAFH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMJGMIIFN_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLPMJGMIIFN_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void DHBFCHLKMHP(::LLPMJGMIIFN_KPANKHFEBFL a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLPMJGMIIFN_KPANKHFEBFL))((::PBYTE)hIl2Cpp + LLPMJGMIIFN_DHBFCHLKMHP_OFFSET))(this, a1);
		}

		::System::Void NEMPMIMIOGL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLPMJGMIIFN_NEMPMIMIOGL_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LLPMJGMIIFN_BLILDBCEGFH_OFFSET))(this, a1, a2);
		}

		::System::Int32 IFECIGGPKOP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLPMJGMIIFN_IFECIGGPKOP_OFFSET))(this, a1);
		}

	};
