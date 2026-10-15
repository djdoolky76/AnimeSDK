#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGNAMLHFLDB;
namespace System { class Object; }

#define BGNAMLHFLDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEECA0)
#define BGNAMLHFLDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEECE0)
#define BGNAMLHFLDB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDEECF0)

inline static constexpr unsigned int BGNAMLHFLDB___c_TypeDefinitionIndex = 31955;

	class BGNAMLHFLDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x441E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNAMLHFLDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB___C_CTOR_OFFSET))(this);
		}

		::BGNAMLHFLDB* __cctor_b__23_0()
		{
			return ((::BGNAMLHFLDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
