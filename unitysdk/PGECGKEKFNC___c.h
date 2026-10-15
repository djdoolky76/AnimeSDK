#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGECGKEKFNC;
namespace System { class Object; }

#define PGECGKEKFNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF000A0)
#define PGECGKEKFNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF000E0)
#define PGECGKEKFNC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF000F0)

inline static constexpr unsigned int PGECGKEKFNC___c_TypeDefinitionIndex = 29179;

	class PGECGKEKFNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGECGKEKFNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC___C_CTOR_OFFSET))(this);
		}

		::PGECGKEKFNC* __cctor_b__28_0()
		{
			return ((::PGECGKEKFNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
