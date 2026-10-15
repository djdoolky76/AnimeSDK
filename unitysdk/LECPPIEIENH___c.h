#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LECPPIEIENH;
namespace System { class Object; }

#define LECPPIEIENH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E925F10)
#define LECPPIEIENH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E925F50)
#define LECPPIEIENH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E925F60)

	class LECPPIEIENH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LECPPIEIENH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH___C_CTOR_OFFSET))(this);
		}

		::LECPPIEIENH* __cctor_b__38_0()
		{
			return ((::LECPPIEIENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
