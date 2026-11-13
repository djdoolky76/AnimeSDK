#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCNEPHHMGLG;
class ILPPBGLJABD;

#define NGKAOGLDFCO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18E8E660)
#define NGKAOGLDFCO_CTOR_OFFSET UNITYSDK_OFFSET(0x18E8E800)

inline static constexpr unsigned int NGKAOGLDFCO_TypeDefinitionIndex = 63712;

	class NGKAOGLDFCO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAOGLDFCO_CTOR_OFFSET))(this);
		}

		static ::ILPPBGLJABD* BPLPBPMEODA(::GCNEPHHMGLG* a1)
		{
			return ((::ILPPBGLJABD*(*)(::GCNEPHHMGLG*))((::PBYTE)hIl2Cpp + NGKAOGLDFCO_BPLPBPMEODA_OFFSET))(a1);
		}

	};
