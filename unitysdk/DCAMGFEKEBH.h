#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"

#define DCAMGFEKEBH_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1C5ADF70)
#define DCAMGFEKEBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AE850)
#define DCAMGFEKEBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5AE5F0)
#define DCAMGFEKEBH_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x1C5AE400)
#define DCAMGFEKEBH_GETSPAN_OFFSET UNITYSDK_OFFSET(0x1C5AE060)
#define DCAMGFEKEBH_GET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5AE830)
#define DCAMGFEKEBH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C5AE4D0)
#define DCAMGFEKEBH_LJAKPENGEFL_OFFSET UNITYSDK_OFFSET(0x1C5AE740)
#define DCAMGFEKEBH_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1C5ADE70)
#define DCAMGFEKEBH_OLPGABCLDLK_OFFSET UNITYSDK_OFFSET(0x1C5AE170)
#define DCAMGFEKEBH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C5AE640)
#define DCAMGFEKEBH_PMDJCENNNDM_OFFSET UNITYSDK_OFFSET(0x1C5AE690)
#define DCAMGFEKEBH_SET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5AE840)

inline static constexpr unsigned int DCAMGFEKEBH_TypeDefinitionIndex = 36891;

	class DCAMGFEKEBH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* MFAJGGDPION; // 0x10
		::System::Int32 _WrittenCount_k__BackingField; // 0x18
		// static const ::System::Object FGOAHKLMKID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void Advance(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_ADVANCE_OFFSET))(this, a1);
		}

		::System::Span_1_0C0D59FF8BC7380B<::System::Byte> GetSpan(::System::Int32 a1)
		{
			return ((::System::Span_1_0C0D59FF8BC7380B<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_GETSPAN_OFFSET))(this, a1);
		}

		::System::Memory_1<::System::Byte> GetMemory(::System::Int32 a1)
		{
			return ((::System::Memory_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_GETMEMORY_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void OLPGABCLDLK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_OLPGABCLDLK_OFFSET))(this, a1);
		}

		::System::Memory_1<::System::Byte> PMDJCENNNDM()
		{
			return ((::System::Memory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_PMDJCENNNDM_OFFSET))(this);
		}

		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> LJAKPENGEFL()
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_LJAKPENGEFL_OFFSET))(this);
		}

		::System::Int32 get_WrittenCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_GET_WRITTENCOUNT_OFFSET))(this);
		}

		::System::Void set_WrittenCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCAMGFEKEBH_SET_WRITTENCOUNT_OFFSET))(this, a1);
		}

	};
