#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NICENHFMLNE;
namespace System { class Object; }

#define NICENHFMLNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB26760)
#define NICENHFMLNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB26790)
#define NICENHFMLNE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB267A0)

inline static constexpr unsigned int NICENHFMLNE___c_TypeDefinitionIndex = 34516;

	class NICENHFMLNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NICENHFMLNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE___C_CTOR_OFFSET))(this);
		}

		::NICENHFMLNE* __cctor_b__33_0()
		{
			return ((::NICENHFMLNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NICENHFMLNE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
