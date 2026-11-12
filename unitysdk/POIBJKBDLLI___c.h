#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POIBJKBDLLI;
namespace System { class Object; }

#define POIBJKBDLLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F27E340)
#define POIBJKBDLLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F27E380)
#define POIBJKBDLLI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F27E390)

inline static constexpr unsigned int POIBJKBDLLI___c_TypeDefinitionIndex = 30414;

	class POIBJKBDLLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x466B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POIBJKBDLLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI___C_CTOR_OFFSET))(this);
		}

		::POIBJKBDLLI* __cctor_b__23_0()
		{
			return ((::POIBJKBDLLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
