#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJFPCBCKKEJ;
namespace System { class Object; }

#define AJFPCBCKKEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0C80)
#define AJFPCBCKKEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0CC0)
#define AJFPCBCKKEJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3C0CD0)

inline static constexpr unsigned int AJFPCBCKKEJ___c_TypeDefinitionIndex = 30585;

	class AJFPCBCKKEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJFPCBCKKEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ___C_CTOR_OFFSET))(this);
		}

		::AJFPCBCKKEJ* __cctor_b__18_0()
		{
			return ((::AJFPCBCKKEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
