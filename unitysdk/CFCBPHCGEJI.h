#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJMCCBBANDN.h"
#include "unitysdk/System/Object.h"

#define CFCBPHCGEJI_CTOR_OFFSET UNITYSDK_OFFSET(0xCA01AF0)
#define CFCBPHCGEJI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCA01B60)

inline static constexpr unsigned int CFCBPHCGEJI_TypeDefinitionIndex = 69522;

	class CFCBPHCGEJI : public ::System::Object
	{
	public:
		::Il2CppArray<::MJMCCBBANDN>* PJJEKELFPJA; // 0x10
		::System::Boolean JHLDDMECMDC; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 GMIDJMPLOJJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBPHCGEJI_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBPHCGEJI_KHGIKBFDLFB_OFFSET))(this);
		}

	};
