#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCCFFNAMLJ;

#define FLCCFFNAMLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15829FB0)
#define FLCCFFNAMLJ_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15829EE0)

inline static constexpr unsigned int FLCCFFNAMLJ_TypeDefinitionIndex = 70826;

	class FLCCFFNAMLJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* BFNCOGCFHKH; // 0x10
		::System::Int32 JNDDHADIIAD; // 0x18
		::System::Single BDLDENPDEHF; // 0x1C
		::System::Boolean HCALEIEFFMA; // 0x20
		::System::Boolean JMCJJIGIPJB; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCCFFNAMLJ_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::FLCCFFNAMLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCCFFNAMLJ*))((::PBYTE)hIl2Cpp + FLCCFFNAMLJ_PPEGOIODAKI_OFFSET))(this, a1);
		}

	};
