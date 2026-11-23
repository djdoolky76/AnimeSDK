#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BDD2EB663E3C9A21_F1F4A92C47D3AEDC_OFFSET UNITYSDK_OFFSET(0x41C3000)

inline static constexpr unsigned int BDD2EB663E3C9A21_TypeDefinitionIndex = 21442;

class BDD2EB663E3C9A21 : public ::System::Object
{
public:
	static ::System::String* F1F4A92C47D3AEDC(::System::IntPtr EE09E15327C674DF)
	{
		return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + BDD2EB663E3C9A21_F1F4A92C47D3AEDC_OFFSET))(EE09E15327C674DF);
	}
};
