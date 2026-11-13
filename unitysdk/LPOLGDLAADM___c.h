#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPOLGDLAADM;
namespace System { class Object; }

#define LPOLGDLAADM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAF9C0)
#define LPOLGDLAADM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAFA00)
#define LPOLGDLAADM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBAFA10)

inline static constexpr unsigned int LPOLGDLAADM___c_TypeDefinitionIndex = 26948;

	class LPOLGDLAADM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x486D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPOLGDLAADM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOLGDLAADM___C_CTOR_OFFSET))(this);
		}

		::LPOLGDLAADM* __cctor_b__23_0()
		{
			return ((::LPOLGDLAADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOLGDLAADM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
