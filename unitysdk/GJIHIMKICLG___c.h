#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJIHIMKICLG;
namespace System { class Object; }

#define GJIHIMKICLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBDD140)
#define GJIHIMKICLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDD180)
#define GJIHIMKICLG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBDD190)

inline static constexpr unsigned int GJIHIMKICLG___c_TypeDefinitionIndex = 34025;

	class GJIHIMKICLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJIHIMKICLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG___C_CTOR_OFFSET))(this);
		}

		::GJIHIMKICLG* __cctor_b__23_0()
		{
			return ((::GJIHIMKICLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
