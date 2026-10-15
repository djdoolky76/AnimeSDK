#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIOMBHPBEDG;
namespace System { class Object; }

#define CIOMBHPBEDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AAAF0)
#define CIOMBHPBEDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AAB30)
#define CIOMBHPBEDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0AAB40)

inline static constexpr unsigned int CIOMBHPBEDG___c_TypeDefinitionIndex = 25257;

	class CIOMBHPBEDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x179E0);
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
