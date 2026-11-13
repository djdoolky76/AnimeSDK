#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAAIMLDHJCI;
namespace System { class Object; }

#define PAAIMLDHJCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2036F750)
#define PAAIMLDHJCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2036F780)
#define PAAIMLDHJCI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2036F790)

inline static constexpr unsigned int PAAIMLDHJCI___c_TypeDefinitionIndex = 35534;

	class PAAIMLDHJCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAAIMLDHJCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI___C_CTOR_OFFSET))(this);
		}

		::PAAIMLDHJCI* __cctor_b__33_0()
		{
			return ((::PAAIMLDHJCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAIMLDHJCI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
