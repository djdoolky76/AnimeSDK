#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCJANHINPDO;
namespace System { class Object; }

#define MCJANHINPDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CCBF0)
#define MCJANHINPDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CCC30)
#define MCJANHINPDO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E9CCC40)

inline static constexpr unsigned int MCJANHINPDO___c_TypeDefinitionIndex = 32419;

	class MCJANHINPDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCJANHINPDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO___C_CTOR_OFFSET))(this);
		}

		::MCJANHINPDO* __cctor_b__43_0()
		{
			return ((::MCJANHINPDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
