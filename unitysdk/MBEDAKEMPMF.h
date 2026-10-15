#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define MBEDAKEMPMF_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC653F0)
#define MBEDAKEMPMF_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC65380)
#define MBEDAKEMPMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC65470)

inline static constexpr unsigned int MBEDAKEMPMF_TypeDefinitionIndex = 43904;

	class MBEDAKEMPMF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEDAKEMPMF_CTOR_OFFSET))(this);
		}

		::System::Boolean Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + MBEDAKEMPMF_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + MBEDAKEMPMF_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
