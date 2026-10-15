#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIGMJHLOHKG;
namespace System { class Object; }

#define JIGMJHLOHKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71FFB0)
#define JIGMJHLOHKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71FFE0)
#define JIGMJHLOHKG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E71FFF0)

inline static constexpr unsigned int JIGMJHLOHKG___c_TypeDefinitionIndex = 34629;

	class JIGMJHLOHKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIGMJHLOHKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG___C_CTOR_OFFSET))(this);
		}

		::JIGMJHLOHKG* __cctor_b__28_0()
		{
			return ((::JIGMJHLOHKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
