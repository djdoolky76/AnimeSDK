#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIBJDDNABII;
namespace System { class Object; }

#define KIBJDDNABII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E854A70)
#define KIBJDDNABII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E854AB0)
#define KIBJDDNABII___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E854AC0)

inline static constexpr unsigned int KIBJDDNABII___c_TypeDefinitionIndex = 26389;

	class KIBJDDNABII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIBJDDNABII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBJDDNABII___C_CTOR_OFFSET))(this);
		}

		::KIBJDDNABII* __cctor_b__18_0()
		{
			return ((::KIBJDDNABII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBJDDNABII___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
