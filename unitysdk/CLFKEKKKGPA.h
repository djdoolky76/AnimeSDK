#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLFKEKKKGPA_CTOR_OFFSET UNITYSDK_OFFSET(0xD77CA50)
#define CLFKEKKKGPA_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xD77CA80)

	class CLFKEKKKGPA : public ::System::Object
	{
	public:
		::System::UInt32 PPJFIBLGBPD; // 0x10
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLFKEKKKGPA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFKEKKKGPA_JJNFOPNOPBF_OFFSET))(this);
		}

	};
