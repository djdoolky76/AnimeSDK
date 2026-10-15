#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NONKABLNHEM;
namespace System { class Object; }

#define NONKABLNHEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB63A60)
#define NONKABLNHEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB63AA0)
#define NONKABLNHEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB63AB0)

inline static constexpr unsigned int NONKABLNHEM___c_TypeDefinitionIndex = 28624;

	class NONKABLNHEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NONKABLNHEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM___C_CTOR_OFFSET))(this);
		}

		::NONKABLNHEM* __cctor_b__23_0()
		{
			return ((::NONKABLNHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONKABLNHEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
