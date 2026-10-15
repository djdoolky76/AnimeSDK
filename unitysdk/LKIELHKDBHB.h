#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define LKIELHKDBHB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1EC33030)
#define LKIELHKDBHB_ANFFLKAMKNO_OFFSET UNITYSDK_OFFSET(0x1EC32DB0)
#define LKIELHKDBHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC32D20)
#define LKIELHKDBHB_FAKENDEFPOC_OFFSET UNITYSDK_OFFSET(0x1EC32E10)
#define LKIELHKDBHB_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1EC332B0)
#define LKIELHKDBHB_NDGCCMLANIG_OFFSET UNITYSDK_OFFSET(0x1EC32E60)
#define LKIELHKDBHB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1EC33120)

inline static constexpr unsigned int LKIELHKDBHB_TypeDefinitionIndex = 35238;

	class LKIELHKDBHB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::Il2CppArray<::System::Byte>*>*>* BDBOGJHLEIG; // 0x10
		::System::Boolean IDBHEIBEGBA; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 KEGPELALGIM; // 0x1C
		::System::UInt32 AALAOIPDKBP; // 0x20
		::System::UInt32 IJBCBFCJMFB; // 0x24
		// static const ::System::Object PDNNIGAEAKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIELHKDBHB_CTOR_OFFSET))(this);
		}

		::System::Boolean ANFFLKAMKNO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKIELHKDBHB_ANFFLKAMKNO_OFFSET))(this, a1);
		}

		::System::Int32 FAKENDEFPOC(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKIELHKDBHB_FAKENDEFPOC_OFFSET))(this, a1);
		}

		::System::Void NDGCCMLANIG(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LKIELHKDBHB_NDGCCMLANIG_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* ACMKLFOMPFC(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKIELHKDBHB_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIELHKDBHB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LKIELHKDBHB_LCJMKJPECAP_OFFSET))(this, a1);
		}

	};
