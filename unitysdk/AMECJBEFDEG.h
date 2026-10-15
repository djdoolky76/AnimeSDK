#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;
namespace System { class String; }

#define AMECJBEFDEG_ALEBBJAFIOG_OFFSET UNITYSDK_OFFSET(0x1557BBE0)
#define AMECJBEFDEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1557BEA0)

inline static constexpr unsigned int AMECJBEFDEG_TypeDefinitionIndex = 64982;

	class AMECJBEFDEG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMECJBEFDEG_CTOR_OFFSET))(this);
		}

		::System::Boolean ALEBBJAFIOG(::System::UInt32 a1, ::System::UInt32 a2, ::NDPFOOJIAIJ* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::NDPFOOJIAIJ*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AMECJBEFDEG_ALEBBJAFIOG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
