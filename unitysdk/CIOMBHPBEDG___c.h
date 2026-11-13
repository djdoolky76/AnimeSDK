#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIOMBHPBEDG;
namespace System { class Object; }

#define CIOMBHPBEDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F84B230)
#define CIOMBHPBEDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F84B270)
#define CIOMBHPBEDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F84B280)

inline static constexpr unsigned int CIOMBHPBEDG___c_TypeDefinitionIndex = 25735;

	class CIOMBHPBEDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIOMBHPBEDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG___C_CTOR_OFFSET))(this);
		}

		::CIOMBHPBEDG* __cctor_b__28_0()
		{
			return ((::CIOMBHPBEDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOMBHPBEDG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
