#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMLEKKCDCKG;

#define GMLEKKCDCKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x15AD5590)
#define GMLEKKCDCKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD5580)
#define GMLEKKCDCKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x15AD54D0)
#define GMLEKKCDCKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15AD5530)

inline static constexpr unsigned int GMLEKKCDCKG_TypeDefinitionIndex = 49137;

	class GMLEKKCDCKG : public ::System::Object
	{
	public:
		static ::GMLEKKCDCKG** StaticGet_FMJPMFEDIJL()
		{
			return (::GMLEKKCDCKG**)UnitySDK::FromName("", "GMLEKKCDCKG")->GetStaticField(0x65E30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLEKKCDCKG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMLEKKCDCKG_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GMLEKKCDCKG_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMLEKKCDCKG_GETHASHCODE_OFFSET))(this, a1);
		}

	};
