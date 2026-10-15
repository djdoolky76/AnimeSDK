#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define LLPNJOHJIPN_ADCKFGEMBDH_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7792E0)
#define LLPNJOHJIPN_ADCKFGEMBDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB779350)

	class LLPNJOHJIPN_ADCKFGEMBDH : public ::System::Object
	{
	public:
		::System::Action* HHAFBKLIAEG; // 0x10
		::System::Func_1<::System::Boolean>* AKOMKFNMNOO; // 0x18
		::System::Single HNABKMOKIKO; // 0x20
		::System::Single HNBAPLCOKAH; // 0x24
		::System::Boolean KIBAEJOKIAF; // 0x28
		::System::Boolean OPAACBLOALC; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single JOCODLOKEGM; // 0x2C
		::System::Single LFHMPFCJOCP; // 0x30
		// static const ::System::Object DOPMIIHPALK; // 0x0
		// static const ::System::Object ANNIBFPMFFG; // 0x0
		// static const ::System::Object OPIKCOBIMOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_ADCKFGEMBDH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPNJOHJIPN_ADCKFGEMBDH_CLEAR_OFFSET))(this);
		}

	};
