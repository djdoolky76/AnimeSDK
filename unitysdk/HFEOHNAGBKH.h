#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLBKCJPICMN;

#define HFEOHNAGBKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC8280)

inline static constexpr unsigned int HFEOHNAGBKH_TypeDefinitionIndex = 43218;

	class HFEOHNAGBKH : public ::System::Object
	{
	public:
		::PLBKCJPICMN* HELHNOEDHCM; // 0x10
		::System::Single JCILFFIBKPP; // 0x18
		::System::Int32 NEMMBJJHALO; // 0x1C
		::System::Boolean KEGEENEFOII; // 0x20
		::System::Boolean EBCCMIMNJIG; // 0x21
		::System::Byte _padding0[0x2];
		::System::Int32 NIJAPFMPOOF; // 0x24
		::System::Single FPDLMIIEGEB; // 0x28
		::System::Int32 FMEKHAPGLMB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOHNAGBKH_CTOR_OFFSET))(this);
		}

	};
