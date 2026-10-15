#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EINFHDNDOHM;
namespace System { class Object; }

#define EINFHDNDOHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27FA00)
#define EINFHDNDOHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27FA40)
#define EINFHDNDOHM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E27FA50)

inline static constexpr unsigned int EINFHDNDOHM___c_TypeDefinitionIndex = 27656;

	class EINFHDNDOHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B0D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EINFHDNDOHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM___C_CTOR_OFFSET))(this);
		}

		::EINFHDNDOHM* __cctor_b__23_0()
		{
			return ((::EINFHDNDOHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINFHDNDOHM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
