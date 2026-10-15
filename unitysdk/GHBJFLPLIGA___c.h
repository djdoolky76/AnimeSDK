#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHBJFLPLIGA;
namespace System { class Object; }

#define GHBJFLPLIGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E456840)
#define GHBJFLPLIGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E456870)
#define GHBJFLPLIGA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E456880)

inline static constexpr unsigned int GHBJFLPLIGA___c_TypeDefinitionIndex = 25957;

	class GHBJFLPLIGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x160D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHBJFLPLIGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBJFLPLIGA___C_CTOR_OFFSET))(this);
		}

		::GHBJFLPLIGA* __cctor_b__28_0()
		{
			return ((::GHBJFLPLIGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBJFLPLIGA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
