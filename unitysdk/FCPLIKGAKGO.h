#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Object; }
namespace System { class String; }

#define FCPLIKGAKGO_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x156D0BF0)
#define FCPLIKGAKGO_CTOR_OFFSET UNITYSDK_OFFSET(0x156D0350)
#define FCPLIKGAKGO_DEMDIHFEGLH_OFFSET UNITYSDK_OFFSET(0x156D0980)
#define FCPLIKGAKGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D0B20)
#define FCPLIKGAKGO_GET_COUNTTEXT_OFFSET UNITYSDK_OFFSET(0x156D0230)
#define FCPLIKGAKGO_GET_CURRENCYID_OFFSET UNITYSDK_OFFSET(0x156D0210)
#define FCPLIKGAKGO_GET_ENABLENAVIGATION_OFFSET UNITYSDK_OFFSET(0x156D0280)
#define FCPLIKGAKGO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x156D0220)
#define FCPLIKGAKGO_GET_SHOWMAX_OFFSET UNITYSDK_OFFSET(0x156D0270)
#define FCPLIKGAKGO_GET_SHOWPLUSBUTTON_OFFSET UNITYSDK_OFFSET(0x156D0240)
#define FCPLIKGAKGO_GET_SHOWTOTALNUM_OFFSET UNITYSDK_OFFSET(0x156D0250)
#define FCPLIKGAKGO_GET_TOTALNUMTEXT_OFFSET UNITYSDK_OFFSET(0x156D0260)
#define FCPLIKGAKGO_JLCGDPMCIGE_OFFSET UNITYSDK_OFFSET(0x156D0930)
#define FCPLIKGAKGO_LCJNBFLNDOI_OFFSET UNITYSDK_OFFSET(0x156D0290)
#define FCPLIKGAKGO_OKMAEFDNKJL_OFFSET UNITYSDK_OFFSET(0x156D0BA0)

	class FCPLIKGAKGO : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* _ShowMax_k__BackingField; // 0x10
		::Sofa::Core::SimpleCommand* EAGJDPFNCPF; // 0x18
		::R3::ReactiveProperty_1<::System::String*>* _TotalNumText_k__BackingField; // 0x20
		::R3::ReactiveProperty_1<::System::String*>* _CountText_k__BackingField; // 0x28
		::R3::ReactiveProperty_1<::System::Boolean>* _EnableNavigation_k__BackingField; // 0x30
		::R3::ReactiveProperty_1<::System::Boolean>* _ShowPlusButton_k__BackingField; // 0x38
		::R3::ReactiveProperty_1<::System::String*>* _IconPath_k__BackingField; // 0x40
		::R3::ReactiveProperty_1<::System::Boolean>* _ShowTotalNum_k__BackingField; // 0x48
		::System::UInt32 IDMKFFMGJJJ; // 0x50
		::System::UInt32 _CurrencyID_k__BackingField; // 0x54
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrencyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_GET_CURRENCYID_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_IconPath()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_GET_ICONPATH_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_CountText()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_GET_COUNTTEXT_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_ShowPlusButton()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_GET_SHOWPLUSBUTTON_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_ShowTotalNum()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_GET_SHOWTOTALNUM_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::String*>* get_TotalNumText()
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_GET_TOTALNUMTEXT_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_ShowMax()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_GET_SHOWMAX_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_EnableNavigation()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_GET_ENABLENAVIGATION_OFFSET))(this);
		}

		::CEEGMMCFCBG* LCJNBFLNDOI()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_LCJNBFLNDOI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_DISPOSE_OFFSET))(this);
		}

		::System::Void OKMAEFDNKJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_OKMAEFDNKJL_OFFSET))(this, a1);
		}

		::System::Void DEMDIHFEGLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_DEMDIHFEGLH_OFFSET))(this);
		}

		::System::Boolean JLCGDPMCIGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_JLCGDPMCIGE_OFFSET))(this);
		}

		::System::Void COPGACEDIEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPLIKGAKGO_COPGACEDIEI_OFFSET))(this);
		}

	};
