#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
namespace System { class Object; }

#define BMCNDLNONMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E022700)
#define BMCNDLNONMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E022730)
#define BMCNDLNONMO___C___CCTOR_B__59_0_OFFSET UNITYSDK_OFFSET(0x1E022740)

inline static constexpr unsigned int BMCNDLNONMO___c_TypeDefinitionIndex = 33606;

	class BMCNDLNONMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCNDLNONMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCNDLNONMO___C_CTOR_OFFSET))(this);
		}

		::BMCNDLNONMO* __cctor_b__59_0()
		{
			return ((::BMCNDLNONMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCNDLNONMO___C___CCTOR_B__59_0_OFFSET))(this);
		}

	};
