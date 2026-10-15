#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJKLCFNAHBH;
namespace System { class String; }

#define ADCPIMCKDJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEB940)
#define ADCPIMCKDJK_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1EBEB780)
#define ADCPIMCKDJK_SET_OFFSET UNITYSDK_OFFSET(0x1EBEB580)

inline static constexpr unsigned int ADCPIMCKDJK_TypeDefinitionIndex = 35215;

	class ADCPIMCKDJK : public ::System::Object
	{
	public:
		::System::Int32 JOGHMLFLGAL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCPIMCKDJK_CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ADCPIMCKDJK_SET_OFFSET))(this, a1);
		}

		static ::System::Int32 MNGGAOFNGIP(::AJKLCFNAHBH* a1)
		{
			return ((::System::Int32(*)(::AJKLCFNAHBH*))((::PBYTE)hIl2Cpp + ADCPIMCKDJK_MNGGAOFNGIP_OFFSET))(a1);
		}

	};
