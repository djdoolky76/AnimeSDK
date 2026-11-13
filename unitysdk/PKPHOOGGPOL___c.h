#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKPHOOGGPOL;
namespace System { class Object; }

#define PKPHOOGGPOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4A6510)
#define PKPHOOGGPOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A6550)
#define PKPHOOGGPOL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4A6560)

inline static constexpr unsigned int PKPHOOGGPOL___c_TypeDefinitionIndex = 32602;

	class PKPHOOGGPOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPHOOGGPOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL___C_CTOR_OFFSET))(this);
		}

		::PKPHOOGGPOL* __cctor_b__23_0()
		{
			return ((::PKPHOOGGPOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPHOOGGPOL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
