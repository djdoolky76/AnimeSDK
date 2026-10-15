#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class GGBKKLGBBII;
namespace System { class Type; }

#define PMFGGDFFLPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC31B050)
#define PMFGGDFFLPE_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xC31AFA0)
#define PMFGGDFFLPE_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xC31B000)
#define PMFGGDFFLPE_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xC31B0A0)

inline static constexpr unsigned int PMFGGDFFLPE_TypeDefinitionIndex = 62603;

	class PMFGGDFFLPE : public ::System::Object
	{
	public:
		::GGBKKLGBBII* OABFEGLNGEC; // 0x10
		::System::Void _ctor(::GGBKKLGBBII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGBKKLGBBII*))((::PBYTE)hIl2Cpp + PMFGGDFFLPE_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFGGDFFLPE_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFGGDFFLPE_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + PMFGGDFFLPE_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
