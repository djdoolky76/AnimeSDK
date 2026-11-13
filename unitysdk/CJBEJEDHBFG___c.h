#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJBEJEDHBFG;
namespace System { class Object; }

#define CJBEJEDHBFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20585AE0)
#define CJBEJEDHBFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20585B20)
#define CJBEJEDHBFG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20585B30)

inline static constexpr unsigned int CJBEJEDHBFG___c_TypeDefinitionIndex = 30577;

	class CJBEJEDHBFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJBEJEDHBFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG___C_CTOR_OFFSET))(this);
		}

		::CJBEJEDHBFG* __cctor_b__28_0()
		{
			return ((::CJBEJEDHBFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
