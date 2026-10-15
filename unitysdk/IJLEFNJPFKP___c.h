#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJLEFNJPFKP;
namespace System { class Object; }

#define IJLEFNJPFKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6970F0)
#define IJLEFNJPFKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E697120)
#define IJLEFNJPFKP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E697130)

inline static constexpr unsigned int IJLEFNJPFKP___c_TypeDefinitionIndex = 25554;

	class IJLEFNJPFKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJLEFNJPFKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLEFNJPFKP___C_CTOR_OFFSET))(this);
		}

		::IJLEFNJPFKP* __cctor_b__23_0()
		{
			return ((::IJLEFNJPFKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLEFNJPFKP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
