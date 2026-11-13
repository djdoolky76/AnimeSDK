#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;
namespace System { class String; }

#define LLHLBJJFFPI_ALEBBJAFIOG_OFFSET UNITYSDK_OFFSET(0x1AFB7020)
#define LLHLBJJFFPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFB72D0)

inline static constexpr unsigned int LLHLBJJFFPI_TypeDefinitionIndex = 66575;

	class LLHLBJJFFPI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHLBJJFFPI_CTOR_OFFSET))(this);
		}

		::System::Boolean ALEBBJAFIOG(::System::UInt32 a1, ::System::UInt32 a2, ::NDPFOOJIAIJ* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::NDPFOOJIAIJ*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LLHLBJJFFPI_ALEBBJAFIOG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
