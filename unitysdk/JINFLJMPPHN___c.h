#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JINFLJMPPHN;
namespace System { class Object; }

#define JINFLJMPPHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA80540)
#define JINFLJMPPHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA80570)
#define JINFLJMPPHN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA80580)

inline static constexpr unsigned int JINFLJMPPHN___c_TypeDefinitionIndex = 33792;

	class JINFLJMPPHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JINFLJMPPHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINFLJMPPHN___C_CTOR_OFFSET))(this);
		}

		::JINFLJMPPHN* __cctor_b__23_0()
		{
			return ((::JINFLJMPPHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINFLJMPPHN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
