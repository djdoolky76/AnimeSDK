#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HLHAKDMEJHB;
namespace System { class String; }

#define HLHAKDMEJHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC09D0)
#define HLHAKDMEJHB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEC0810)

inline static constexpr unsigned int HLHAKDMEJHB_TypeDefinitionIndex = 11295;

	class HLHAKDMEJHB : public ::System::Object
	{
	public:
		::System::String* HDCDMCBPLKI; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::UInt32 FOKEJNDOFNI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHAKDMEJHB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HLHAKDMEJHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HLHAKDMEJHB*))((::PBYTE)hIl2Cpp + HLHAKDMEJHB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
