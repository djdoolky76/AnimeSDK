#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FEKLMJPJIKG;
class OKELLDKLMGF;

#define FEKLMJPJIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB4310)
#define FEKLMJPJIKG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDB4220)

inline static constexpr unsigned int FEKLMJPJIKG_TypeDefinitionIndex = 15146;

	class FEKLMJPJIKG : public ::System::Object
	{
	public:
		::Il2CppArray<::OKELLDKLMGF*>* LDGGPHOEJMM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKLMJPJIKG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FEKLMJPJIKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FEKLMJPJIKG*))((::PBYTE)hIl2Cpp + FEKLMJPJIKG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
