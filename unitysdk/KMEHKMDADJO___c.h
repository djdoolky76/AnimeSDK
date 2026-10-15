#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMEHKMDADJO;
namespace System { class Object; }

#define KMEHKMDADJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E896720)
#define KMEHKMDADJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E896760)
#define KMEHKMDADJO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E896770)

	class KMEHKMDADJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEHKMDADJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO___C_CTOR_OFFSET))(this);
		}

		::KMEHKMDADJO* __cctor_b__28_0()
		{
			return ((::KMEHKMDADJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
