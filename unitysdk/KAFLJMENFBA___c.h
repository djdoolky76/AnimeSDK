#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAFLJMENFBA;
namespace System { class Object; }

#define KAFLJMENFBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAF2BD0)
#define KAFLJMENFBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF2C10)
#define KAFLJMENFBA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAF2C20)

inline static constexpr unsigned int KAFLJMENFBA___c_TypeDefinitionIndex = 32362;

	class KAFLJMENFBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAFLJMENFBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA___C_CTOR_OFFSET))(this);
		}

		::KAFLJMENFBA* __cctor_b__23_0()
		{
			return ((::KAFLJMENFBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
