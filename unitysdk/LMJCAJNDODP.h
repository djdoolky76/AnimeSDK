#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAOCJKOBCN;
class DILIKOIGENM;

#define LMJCAJNDODP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CA700)
#define LMJCAJNDODP_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xB7CA6A0)
#define LMJCAJNDODP_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB7CA680)
#define LMJCAJNDODP_GET_ISPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB7CA6E0)
#define LMJCAJNDODP_GET_ISSHOWCURRENCY_OFFSET UNITYSDK_OFFSET(0xB7CA6C0)
#define LMJCAJNDODP_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xB7CA6B0)
#define LMJCAJNDODP_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB7CA690)
#define LMJCAJNDODP_SET_ISPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB7CA6F0)
#define LMJCAJNDODP_SET_ISSHOWCURRENCY_OFFSET UNITYSDK_OFFSET(0xB7CA6D0)

	class LMJCAJNDODP : public ::System::Object
	{
	public:
		::ALAOCJKOBCN* _Desc_k__BackingField; // 0x10
		::DILIKOIGENM* _Currency_k__BackingField; // 0x18
		::System::Boolean _IsShowCurrency_k__BackingField; // 0x20
		::System::Boolean _IsPercentage_k__BackingField; // 0x21
		::System::Void _ctor(::ALAOCJKOBCN* a1, ::DILIKOIGENM* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::ALAOCJKOBCN*, ::DILIKOIGENM*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LMJCAJNDODP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::ALAOCJKOBCN* get_Desc()
		{
			return ((::ALAOCJKOBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJCAJNDODP_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::ALAOCJKOBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAOCJKOBCN*))((::PBYTE)hIl2Cpp + LMJCAJNDODP_SET_DESC_OFFSET))(this, a1);
		}

		::DILIKOIGENM* get_Currency()
		{
			return ((::DILIKOIGENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJCAJNDODP_GET_CURRENCY_OFFSET))(this);
		}

		::System::Void set_Currency(::DILIKOIGENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILIKOIGENM*))((::PBYTE)hIl2Cpp + LMJCAJNDODP_SET_CURRENCY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowCurrency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJCAJNDODP_GET_ISSHOWCURRENCY_OFFSET))(this);
		}

		::System::Void set_IsShowCurrency(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMJCAJNDODP_SET_ISSHOWCURRENCY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPercentage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJCAJNDODP_GET_ISPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_IsPercentage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMJCAJNDODP_SET_ISPERCENTAGE_OFFSET))(this, a1);
		}

	};
