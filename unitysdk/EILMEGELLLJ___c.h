#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILMEGELLLJ;
namespace System { class Object; }

#define EILMEGELLLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF95480)
#define EILMEGELLLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF954C0)
#define EILMEGELLLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF954D0)

inline static constexpr unsigned int EILMEGELLLJ___c_TypeDefinitionIndex = 29050;

	class EILMEGELLLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ECA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EILMEGELLLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ___C_CTOR_OFFSET))(this);
		}

		::EILMEGELLLJ* __cctor_b__23_0()
		{
			return ((::EILMEGELLLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMEGELLLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
