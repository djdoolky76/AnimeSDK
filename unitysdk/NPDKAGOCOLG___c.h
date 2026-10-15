#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPDKAGOCOLG;
namespace System { class Object; }

#define NPDKAGOCOLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB67BB0)
#define NPDKAGOCOLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB67BF0)
#define NPDKAGOCOLG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB67C00)

inline static constexpr unsigned int NPDKAGOCOLG___c_TypeDefinitionIndex = 27501;

	class NPDKAGOCOLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPDKAGOCOLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG___C_CTOR_OFFSET))(this);
		}

		::NPDKAGOCOLG* __cctor_b__23_0()
		{
			return ((::NPDKAGOCOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDKAGOCOLG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
