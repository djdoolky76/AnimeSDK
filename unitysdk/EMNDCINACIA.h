#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"

#define EMNDCINACIA_LPGJLLJAGDN_OFFSET UNITYSDK_OFFSET(0x1DD0F1D0)

inline static constexpr unsigned int EMNDCINACIA_TypeDefinitionIndex = 6552;

	class EMNDCINACIA : public ::System::Object
	{
	public:
		static ::System::Int32 LPGJLLJAGDN(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + EMNDCINACIA_LPGJLLJAGDN_OFFSET))(a1);
		}

	};
