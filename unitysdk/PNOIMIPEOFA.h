#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APPKINLAONP;
class BLPBNHJNGID;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PNOIMIPEOFA_BBDEPHPJNBD_OFFSET UNITYSDK_OFFSET(0xC34E150)
#define PNOIMIPEOFA_CTOR_OFFSET UNITYSDK_OFFSET(0xC34E080)
#define PNOIMIPEOFA_GET_DRESSEDENPCF07_OFFSET UNITYSDK_OFFSET(0xC34E060)
#define PNOIMIPEOFA_GET_ENPCF07IDS_OFFSET UNITYSDK_OFFSET(0xC34E050)
#define PNOIMIPEOFA_KKLHJCEJGEG_OFFSET UNITYSDK_OFFSET(0xC34E090)
#define PNOIMIPEOFA_SET_DRESSEDENPCF07_OFFSET UNITYSDK_OFFSET(0xC34E070)

inline static constexpr unsigned int PNOIMIPEOFA_TypeDefinitionIndex = 51909;

	class PNOIMIPEOFA : public ::System::Object
	{
	public:
		::APPKINLAONP* NMOPFNGFPPB; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ENpcF07Ids_k__BackingField; // 0x18
		::BLPBNHJNGID* _DressedENpcF07_k__BackingField; // 0x20
		::System::Void _ctor(::APPKINLAONP* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APPKINLAONP*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PNOIMIPEOFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_ENpcF07Ids()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOIMIPEOFA_GET_ENPCF07IDS_OFFSET))(this);
		}

		::BLPBNHJNGID* get_DressedENpcF07()
		{
			return ((::BLPBNHJNGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOIMIPEOFA_GET_DRESSEDENPCF07_OFFSET))(this);
		}

		::System::Void set_DressedENpcF07(::BLPBNHJNGID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPBNHJNGID*))((::PBYTE)hIl2Cpp + PNOIMIPEOFA_SET_DRESSEDENPCF07_OFFSET))(this, a1);
		}

		::System::Void KKLHJCEJGEG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNOIMIPEOFA_KKLHJCEJGEG_OFFSET))(this, a1);
		}

		::System::Void BBDEPHPJNBD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNOIMIPEOFA_BBDEPHPJNBD_OFFSET))(this, a1);
		}

	};
