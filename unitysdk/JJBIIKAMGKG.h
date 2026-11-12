#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JJBIIKAMGKG_CGDOAGEGDFC_OFFSET UNITYSDK_OFFSET(0xBA234B0)
#define JJBIIKAMGKG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA236B0)

inline static constexpr unsigned int JJBIIKAMGKG_TypeDefinitionIndex = 48510;

	class JJBIIKAMGKG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBIIKAMGKG_CTOR_OFFSET))(this);
		}

		static ::System::Void CGDOAGEGDFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + JJBIIKAMGKG_CGDOAGEGDFC_OFFSET))(a1);
		}

	};
