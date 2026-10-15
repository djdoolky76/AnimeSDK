#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHINPOJOJGD;
namespace System { class Object; }

#define PHINPOJOJGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3EC00)
#define PHINPOJOJGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3EC40)
#define PHINPOJOJGD___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DF3EC50)

inline static constexpr unsigned int PHINPOJOJGD___c_TypeDefinitionIndex = 32689;

	class PHINPOJOJGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x402D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHINPOJOJGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD___C_CTOR_OFFSET))(this);
		}

		::PHINPOJOJGD* __cctor_b__53_0()
		{
			return ((::PHINPOJOJGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
