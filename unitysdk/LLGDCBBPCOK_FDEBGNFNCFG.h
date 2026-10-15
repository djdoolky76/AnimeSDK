#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LLGDCBBPCOK_FDEBGNFNCFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C0)
#define LLGDCBBPCOK_FDEBGNFNCFG_DEOLBMKIKLF_OFFSET UNITYSDK_OFFSET(0x1A2F0)
#define LLGDCBBPCOK_FDEBGNFNCFG_HFMIICCCCHM_OFFSET UNITYSDK_OFFSET(0x1A260)
#define LLGDCBBPCOK_FDEBGNFNCFG_HNDKKFLOOEI_OFFSET UNITYSDK_OFFSET(0x1A300)
#define LLGDCBBPCOK_FDEBGNFNCFG_NBBGCCOGFPG_OFFSET UNITYSDK_OFFSET(0x1A2E0)
#define LLGDCBBPCOK_FDEBGNFNCFG_NGEGLJNFIFL_OFFSET UNITYSDK_OFFSET(0x1A2D0)
#define LLGDCBBPCOK_FDEBGNFNCFG_OBNCMBGPLOG_OFFSET UNITYSDK_OFFSET(0x1A310)
#define LLGDCBBPCOK_FDEBGNFNCFG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1A320)

	struct alignas(8) LLGDCBBPCOK_FDEBGNFNCFG
	{
		::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Int32>*>* KLJNOODEEBM; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDEBGNFNCFG_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 HFMIICCCCHM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDEBGNFNCFG_HFMIICCCCHM_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* NGEGLJNFIFL(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDEBGNFNCFG_NGEGLJNFIFL_OFFSET))(this, a1);
		}

		::System::Void NBBGCCOGFPG(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDEBGNFNCFG_NBBGCCOGFPG_OFFSET))(this, a1, a2);
		}

		::System::Void DEOLBMKIKLF(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDEBGNFNCFG_DEOLBMKIKLF_OFFSET))(this, a1, a2);
		}

		::System::Void HNDKKFLOOEI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDEBGNFNCFG_HNDKKFLOOEI_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* OBNCMBGPLOG()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDEBGNFNCFG_OBNCMBGPLOG_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_FDEBGNFNCFG_PJPFIHFAHGO_OFFSET))(this);
		}

	};
