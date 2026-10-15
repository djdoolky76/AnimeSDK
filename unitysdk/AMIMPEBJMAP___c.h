#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMIMPEBJMAP;
namespace System { class Object; }

#define AMIMPEBJMAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6DE0)
#define AMIMPEBJMAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6E20)
#define AMIMPEBJMAP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4F6E30)

inline static constexpr unsigned int AMIMPEBJMAP___c_TypeDefinitionIndex = 32154;

	class AMIMPEBJMAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x458B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIMPEBJMAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP___C_CTOR_OFFSET))(this);
		}

		::AMIMPEBJMAP* __cctor_b__33_0()
		{
			return ((::AMIMPEBJMAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIMPEBJMAP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
