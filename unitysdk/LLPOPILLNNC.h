#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define LLPOPILLNNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB779420)
#define LLPOPILLNNC_GET_CMDID_OFFSET UNITYSDK_OFFSET(0xB779410)

inline static constexpr unsigned int LLPOPILLNNC_TypeDefinitionIndex = 69402;

	class LLPOPILLNNC : public ::System::Exception
	{
	public:
		::System::UInt16 _CmdID_k__BackingField; // 0x88
		::System::Void _ctor(::System::UInt16 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::String*))((::PBYTE)hIl2Cpp + LLPOPILLNNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt16 get_CmdID()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPOPILLNNC_GET_CMDID_OFFSET))(this);
		}

	};
