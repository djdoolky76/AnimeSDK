#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBOCALABMII;
class FCOEMCEDLNL;

#define CBOCALABMII_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DA160)
#define CBOCALABMII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DA020)

inline static constexpr unsigned int CBOCALABMII_TypeDefinitionIndex = 12489;

	class CBOCALABMII : public ::System::Object
	{
	public:
		::System::UInt32 EKLFKIEBIMM; // 0x10
		::System::UInt32 HLCEBFIMJGN; // 0x14
		::System::UInt32 MFIEHPLADIM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOCALABMII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CBOCALABMII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CBOCALABMII*))((::PBYTE)hIl2Cpp + CBOCALABMII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
