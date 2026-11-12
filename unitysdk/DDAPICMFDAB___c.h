#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDAPICMFDAB;
namespace System { class Object; }

#define DDAPICMFDAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F453CE0)
#define DDAPICMFDAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F453D20)
#define DDAPICMFDAB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F453D30)

inline static constexpr unsigned int DDAPICMFDAB___c_TypeDefinitionIndex = 31245;

	class DDAPICMFDAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDAPICMFDAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB___C_CTOR_OFFSET))(this);
		}

		::DDAPICMFDAB* __cctor_b__33_0()
		{
			return ((::DDAPICMFDAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
