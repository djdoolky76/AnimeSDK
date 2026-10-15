#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

#define KHOJFFEPLEO_MEICDCGHLEC_COMPARE_OFFSET UNITYSDK_OFFSET(0xB414D70)
#define KHOJFFEPLEO_MEICDCGHLEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB4145F0)

inline static constexpr unsigned int KHOJFFEPLEO_MEICDCGHLEC_TypeDefinitionIndex = 74114;

	class KHOJFFEPLEO_MEICDCGHLEC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_MEICDCGHLEC_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> a1, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_MEICDCGHLEC_COMPARE_OFFSET))(this, a1, a2);
		}

	};
