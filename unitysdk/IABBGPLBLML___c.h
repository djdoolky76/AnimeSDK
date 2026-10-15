#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IABBGPLBLML;
namespace System { class Object; }

#define IABBGPLBLML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D5370)
#define IABBGPLBLML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D53B0)
#define IABBGPLBLML___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5D53C0)

inline static constexpr unsigned int IABBGPLBLML___c_TypeDefinitionIndex = 29983;

	class IABBGPLBLML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x405B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IABBGPLBLML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML___C_CTOR_OFFSET))(this);
		}

		::IABBGPLBLML* __cctor_b__23_0()
		{
			return ((::IABBGPLBLML*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABBGPLBLML___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
