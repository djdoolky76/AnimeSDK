#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFDHDBNIHPL;
namespace System { class Object; }

#define CFDHDBNIHPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3651C0)
#define CFDHDBNIHPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3651F0)
#define CFDHDBNIHPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F365200)

inline static constexpr unsigned int CFDHDBNIHPL___c_TypeDefinitionIndex = 25935;

	class CFDHDBNIHPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFDHDBNIHPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL___C_CTOR_OFFSET))(this);
		}

		::CFDHDBNIHPL* __cctor_b__28_0()
		{
			return ((::CFDHDBNIHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHDBNIHPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
