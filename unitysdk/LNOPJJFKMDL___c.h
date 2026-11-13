#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNOPJJFKMDL;
namespace System { class Object; }

#define LNOPJJFKMDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200CDC30)
#define LNOPJJFKMDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200CDC70)
#define LNOPJJFKMDL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200CDC80)

inline static constexpr unsigned int LNOPJJFKMDL___c_TypeDefinitionIndex = 34264;

	class LNOPJJFKMDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x451C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNOPJJFKMDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL___C_CTOR_OFFSET))(this);
		}

		::LNOPJJFKMDL* __cctor_b__23_0()
		{
			return ((::LNOPJJFKMDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPJJFKMDL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
