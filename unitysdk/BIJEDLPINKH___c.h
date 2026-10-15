#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIJEDLPINKH;
namespace System { class Object; }

#define BIJEDLPINKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE03350)
#define BIJEDLPINKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE03390)
#define BIJEDLPINKH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE033A0)

inline static constexpr unsigned int BIJEDLPINKH___c_TypeDefinitionIndex = 30003;

	class BIJEDLPINKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIJEDLPINKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJEDLPINKH___C_CTOR_OFFSET))(this);
		}

		::BIJEDLPINKH* __cctor_b__18_0()
		{
			return ((::BIJEDLPINKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJEDLPINKH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
