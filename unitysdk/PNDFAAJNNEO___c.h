#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNDFAAJNNEO;
namespace System { class Object; }

#define PNDFAAJNNEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F266800)
#define PNDFAAJNNEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F266830)
#define PNDFAAJNNEO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F266840)

inline static constexpr unsigned int PNDFAAJNNEO___c_TypeDefinitionIndex = 30746;

	class PNDFAAJNNEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNDFAAJNNEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDFAAJNNEO___C_CTOR_OFFSET))(this);
		}

		::PNDFAAJNNEO* __cctor_b__48_0()
		{
			return ((::PNDFAAJNNEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDFAAJNNEO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
