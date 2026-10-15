#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFEEHEBBLCI;
namespace System { class Object; }

#define FFEEHEBBLCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33F630)
#define FFEEHEBBLCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33F660)
#define FFEEHEBBLCI___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E33F670)

inline static constexpr unsigned int FFEEHEBBLCI___c_TypeDefinitionIndex = 31343;

	class FFEEHEBBLCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFEEHEBBLCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEEHEBBLCI___C_CTOR_OFFSET))(this);
		}

		::FFEEHEBBLCI* __cctor_b__53_0()
		{
			return ((::FFEEHEBBLCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEEHEBBLCI___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
