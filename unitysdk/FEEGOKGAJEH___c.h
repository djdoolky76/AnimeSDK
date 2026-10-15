#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEEGOKGAJEH;
namespace System { class Object; }

#define FEEGOKGAJEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E336B10)
#define FEEGOKGAJEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E336B50)
#define FEEGOKGAJEH___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1E336B60)

inline static constexpr unsigned int FEEGOKGAJEH___c_TypeDefinitionIndex = 25135;

	class FEEGOKGAJEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEEGOKGAJEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEGOKGAJEH___C_CTOR_OFFSET))(this);
		}

		::FEEGOKGAJEH* __cctor_b__98_0()
		{
			return ((::FEEGOKGAJEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEGOKGAJEH___C___CCTOR_B__98_0_OFFSET))(this);
		}

	};
