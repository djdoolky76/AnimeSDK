#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBBIAPEHABA;
namespace System { class Object; }

#define BBBIAPEHABA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA795F0)
#define BBBIAPEHABA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA79630)
#define BBBIAPEHABA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FA79640)

inline static constexpr unsigned int BBBIAPEHABA___c_TypeDefinitionIndex = 25666;

	class BBBIAPEHABA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBBIAPEHABA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA___C_CTOR_OFFSET))(this);
		}

		::BBBIAPEHABA* __cctor_b__48_0()
		{
			return ((::BBBIAPEHABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBIAPEHABA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
