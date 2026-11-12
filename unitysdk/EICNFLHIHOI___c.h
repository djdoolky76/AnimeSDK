#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EICNFLHIHOI;
namespace System { class Object; }

#define EICNFLHIHOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F589A60)
#define EICNFLHIHOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F589A90)
#define EICNFLHIHOI___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F589AA0)

inline static constexpr unsigned int EICNFLHIHOI___c_TypeDefinitionIndex = 25909;

	class EICNFLHIHOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x428B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EICNFLHIHOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICNFLHIHOI___C_CTOR_OFFSET))(this);
		}

		::EICNFLHIHOI* __cctor_b__53_0()
		{
			return ((::EICNFLHIHOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICNFLHIHOI___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
