#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEFBECKCJIH;
namespace System { class Object; }

#define NEFBECKCJIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF3E40)
#define NEFBECKCJIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF3E80)
#define NEFBECKCJIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAF3E90)

	class NEFBECKCJIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEFBECKCJIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH___C_CTOR_OFFSET))(this);
		}

		::NEFBECKCJIH* __cctor_b__28_0()
		{
			return ((::NEFBECKCJIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
