#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OICAPCABFNK;
namespace System { class Object; }

#define OICAPCABFNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3BBF0)
#define OICAPCABFNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3BC30)
#define OICAPCABFNK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE3BC40)

inline static constexpr unsigned int OICAPCABFNK___c_TypeDefinitionIndex = 28358;

	class OICAPCABFNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OICAPCABFNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK___C_CTOR_OFFSET))(this);
		}

		::OICAPCABFNK* __cctor_b__23_0()
		{
			return ((::OICAPCABFNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICAPCABFNK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
