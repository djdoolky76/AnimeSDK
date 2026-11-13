#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJKLCFNAHBH;
namespace System { class String; }

#define PEIJLCLAJOO_CTOR_OFFSET UNITYSDK_OFFSET(0x2078FCD0)
#define PEIJLCLAJOO_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x2078FC50)
#define PEIJLCLAJOO_SET_OFFSET UNITYSDK_OFFSET(0x2078FA70)

inline static constexpr unsigned int PEIJLCLAJOO_TypeDefinitionIndex = 36140;

	class PEIJLCLAJOO : public ::System::Object
	{
	public:
		::System::String* BGBBNIDJOII; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIJLCLAJOO_CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEIJLCLAJOO_SET_OFFSET))(this, a1);
		}

		static ::System::String* MNGGAOFNGIP(::AJKLCFNAHBH* a1)
		{
			return ((::System::String*(*)(::AJKLCFNAHBH*))((::PBYTE)hIl2Cpp + PEIJLCLAJOO_MNGGAOFNGIP_OFFSET))(a1);
		}

	};
