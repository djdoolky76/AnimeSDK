#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define MAJABIBGFKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C25A0E0)

inline static constexpr unsigned int MAJABIBGFKH_TypeDefinitionIndex = 43941;

	class MAJABIBGFKH : public ::System::Object
	{
	public:
		::System::Int32 MCLLALGABAB; // 0x10
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> KPAKGDIIPHD; // 0x14
		::System::Int32 GNOKDJHJJAB; // 0x1C
		::System::Int32 DKOOHFBFJPL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJABIBGFKH_CTOR_OFFSET))(this);
		}

	};
