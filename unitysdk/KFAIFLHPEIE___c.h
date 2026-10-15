#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFAIFLHPEIE;
namespace System { class Object; }

#define KFAIFLHPEIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E815830)
#define KFAIFLHPEIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E815870)
#define KFAIFLHPEIE___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E815880)

inline static constexpr unsigned int KFAIFLHPEIE___c_TypeDefinitionIndex = 28361;

	class KFAIFLHPEIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFAIFLHPEIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAIFLHPEIE___C_CTOR_OFFSET))(this);
		}

		::KFAIFLHPEIE* __cctor_b__32_0()
		{
			return ((::KFAIFLHPEIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAIFLHPEIE___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
