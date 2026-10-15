#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJPBKMBIGNC.h"
class NFHKMGFPINI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMKEFPAJIPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5564D0)
#define KMKEFPAJIPI_GET_ACTIVEACTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xB556390)
#define KMKEFPAJIPI_GET_ACTIVEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xB556370)
#define KMKEFPAJIPI_GET_FINISHEDACTIONNUM_OFFSET UNITYSDK_OFFSET(0xB556350)
#define KMKEFPAJIPI_JCLLPJLNFAL_OFFSET UNITYSDK_OFFSET(0xB5563B0)
#define KMKEFPAJIPI_SET_ACTIVEACTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xB5563A0)
#define KMKEFPAJIPI_SET_ACTIVEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xB556380)
#define KMKEFPAJIPI_SET_FINISHEDACTIONNUM_OFFSET UNITYSDK_OFFSET(0xB556360)

inline static constexpr unsigned int KMKEFPAJIPI_TypeDefinitionIndex = 81667;

	class KMKEFPAJIPI : public ::AJPBKMBIGNC
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ActiveActionIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivePartIDList_k__BackingField; // 0x28
		::System::UInt32 _FinishedActionNum_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKEFPAJIPI_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FinishedActionNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKEFPAJIPI_GET_FINISHEDACTIONNUM_OFFSET))(this);
		}

		::System::Void set_FinishedActionNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKEFPAJIPI_SET_FINISHEDACTIONNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ActivePartIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKEFPAJIPI_GET_ACTIVEPARTIDLIST_OFFSET))(this);
		}

		::System::Void set_ActivePartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KMKEFPAJIPI_SET_ACTIVEPARTIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ActiveActionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKEFPAJIPI_GET_ACTIVEACTIONIDLIST_OFFSET))(this);
		}

		::System::Void set_ActiveActionIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KMKEFPAJIPI_SET_ACTIVEACTIONIDLIST_OFFSET))(this, a1);
		}

		::System::Void JCLLPJLNFAL(::NFHKMGFPINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFHKMGFPINI*))((::PBYTE)hIl2Cpp + KMKEFPAJIPI_JCLLPJLNFAL_OFFSET))(this, a1);
		}

	};
