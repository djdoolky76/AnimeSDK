#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class CIOJDGJGAJM_NDJIEGFLOBC;
namespace MoleMole::Config { class ConfigUIScriptableAnimationV2; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIOJDGJGAJM_KHBLGBKOPLP_JPCHGLBHBMN_OFFSET UNITYSDK_OFFSET(0x193D7BF0)
#define CIOJDGJGAJM_KHBLGBKOPLP__CTOR_OFFSET UNITYSDK_OFFSET(0x193D7BE0)

inline static constexpr unsigned int CIOJDGJGAJM_KHBLGBKOPLP_TypeDefinitionIndex = 80597;

class CIOJDGJGAJM_KHBLGBKOPLP : public ::System::Object
{
public:
	::CIOJDGJGAJM_NDJIEGFLOBC* NBEAMFNMOJJ; // 0x10
	::System::Collections::Generic::List_1<::System::Action*>* EKDKDCBOIBL; // 0x18
	::System::Action* IBNICCGMILF; // 0x20
	::Foundation::AssetPath OIIHCACKLHD; // 0x28
	::System::Boolean GHOLINNCJCE; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 JFONAFOLLKC; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_KHBLGBKOPLP__CTOR_OFFSET))(this);
	}

	::System::Void JPCHGLBHBMN(::MoleMole::Config::ConfigUIScriptableAnimationV2* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2*))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_KHBLGBKOPLP_JPCHGLBHBMN_OFFSET))(this, DFMKILICPFB);
	}
};
