#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKPHOOGGPOL;
namespace System { class Object; }

#define PKPHOOGGPOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF98610)
#define PKPHOOGGPOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF98650)
#define PKPHOOGGPOL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF98660)

inline static constexpr unsigned int PKPHOOGGPOL___c_TypeDefinitionIndex = 31689;

	class PKPHOOGGPOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AC60);
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
