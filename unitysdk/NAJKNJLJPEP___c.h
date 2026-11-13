#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAJKNJLJPEP;
namespace System { class Object; }

#define NAJKNJLJPEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2014D750)
#define NAJKNJLJPEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2014D790)
#define NAJKNJLJPEP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2014D7A0)

inline static constexpr unsigned int NAJKNJLJPEP___c_TypeDefinitionIndex = 34945;

	class NAJKNJLJPEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAJKNJLJPEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP___C_CTOR_OFFSET))(this);
		}

		::NAJKNJLJPEP* __cctor_b__28_0()
		{
			return ((::NAJKNJLJPEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
