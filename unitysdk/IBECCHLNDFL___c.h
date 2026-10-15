#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBECCHLNDFL;
namespace System { class Object; }

#define IBECCHLNDFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E612200)
#define IBECCHLNDFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E612240)
#define IBECCHLNDFL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E612250)

inline static constexpr unsigned int IBECCHLNDFL___c_TypeDefinitionIndex = 28393;

	class IBECCHLNDFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBECCHLNDFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL___C_CTOR_OFFSET))(this);
		}

		::IBECCHLNDFL* __cctor_b__23_0()
		{
			return ((::IBECCHLNDFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
