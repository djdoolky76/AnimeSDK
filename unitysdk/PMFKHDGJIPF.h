#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMFKHDGJIPF_CTOR_OFFSET UNITYSDK_OFFSET(0xCC49F60)
#define PMFKHDGJIPF_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xCC49F90)

inline static constexpr unsigned int PMFKHDGJIPF_TypeDefinitionIndex = 63870;

	class PMFKHDGJIPF : public ::System::Object
	{
	public:
		::System::UInt32 NODOJOLGHDP; // 0x10
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + PMFKHDGJIPF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKHDGJIPF_JJNFOPNOPBF_OFFSET))(this);
		}

	};
