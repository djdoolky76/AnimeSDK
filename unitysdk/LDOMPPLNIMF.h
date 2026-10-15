#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LDOMPPLNIMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB644C90)
#define LDOMPPLNIMF_PBEIGLCAHMN_OFFSET UNITYSDK_OFFSET(0xB644C40)

inline static constexpr unsigned int LDOMPPLNIMF_TypeDefinitionIndex = 75373;

	class LDOMPPLNIMF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMPPLNIMF_CTOR_OFFSET))(this);
		}

		::System::Void PBEIGLCAHMN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDOMPPLNIMF_PBEIGLCAHMN_OFFSET))(this, a1, a2);
		}

	};
