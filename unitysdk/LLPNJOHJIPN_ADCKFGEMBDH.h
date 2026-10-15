#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define LLPNJOHJIPN_ADCKFGEMBDH_CLEAR_OFFSET UNITYSDK_OFFSET(0xB772A40)
#define LLPNJOHJIPN_ADCKFGEMBDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB772AA0)

inline static constexpr unsigned int LLPNJOHJIPN_ADCKFGEMBDH_TypeDefinitionIndex = 60772;

	class LLPNJOHJIPN_ADCKFGEMBDH : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* AKOMKFNMNOO; // 0x10
		::System::Action* HHAFBKLIAEG; // 0x18
		::System::Single LFHMPFCJOCP; // 0x20
		::System::Single HNABKMOKIKO; // 0x24
		::System::Single HNBAPLCOKAH; // 0x28
		::System::Single JOCODLOKEGM; // 0x2C
		::System::Boolean OPAACBLOALC; // 0x30
		::System::Boolean KIBAEJOKIAF; // 0x31
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
