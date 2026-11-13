#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LKLJDMDACFC_EIIMAEHCGBC_OFFSET UNITYSDK_OFFSET(0x18CF80E0)
#define LKLJDMDACFC_PGKCLANAHLC_OFFSET UNITYSDK_OFFSET(0x18CF8010)

inline static constexpr unsigned int LKLJDMDACFC_TypeDefinitionIndex = 79828;

	class LKLJDMDACFC : public ::System::Object
	{
	public:
		static ::System::Boolean PGKCLANAHLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + LKLJDMDACFC_PGKCLANAHLC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean EIIMAEHCGBC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LKLJDMDACFC_EIIMAEHCGBC_OFFSET))(a1, a2);
		}

	};
