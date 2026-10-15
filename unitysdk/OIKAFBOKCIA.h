#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define OIKAFBOKCIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C995120)

inline static constexpr unsigned int OIKAFBOKCIA_TypeDefinitionIndex = 42219;

	class OIKAFBOKCIA : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x10
		::System::UInt32 JCAEANLAGMB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKAFBOKCIA_CTOR_OFFSET))(this);
		}

	};
