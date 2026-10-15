#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBGKLKLKLFG;
namespace System { class Object; }

#define KBGKLKLKLFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C25D0)
#define KBGKLKLKLFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C2610)
#define KBGKLKLKLFG___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E7C2620)

inline static constexpr unsigned int KBGKLKLKLFG___c_TypeDefinitionIndex = 25903;

	class KBGKLKLKLFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBGKLKLKLFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG___C_CTOR_OFFSET))(this);
		}

		::KBGKLKLKLFG* __cctor_b__32_0()
		{
			return ((::KBGKLKLKLFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
