#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMAAIFEDKOO;
namespace System { class Object; }

#define OMAAIFEDKOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAE140)
#define OMAAIFEDKOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAE180)
#define OMAAIFEDKOO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEAE190)

	class OMAAIFEDKOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMAAIFEDKOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO___C_CTOR_OFFSET))(this);
		}

		::OMAAIFEDKOO* __cctor_b__23_0()
		{
			return ((::OMAAIFEDKOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAAIFEDKOO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
