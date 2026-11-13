#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEPHEHAEFOF;
namespace System { class Object; }

#define EEPHEHAEFOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20491420)
#define EEPHEHAEFOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20491460)
#define EEPHEHAEFOF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20491470)

inline static constexpr unsigned int EEPHEHAEFOF___c_TypeDefinitionIndex = 29228;

	class EEPHEHAEFOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEPHEHAEFOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPHEHAEFOF___C_CTOR_OFFSET))(this);
		}

		::EEPHEHAEFOF* __cctor_b__18_0()
		{
			return ((::EEPHEHAEFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPHEHAEFOF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
