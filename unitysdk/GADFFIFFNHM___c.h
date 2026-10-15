#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GADFFIFFNHM;
namespace System { class Object; }

#define GADFFIFFNHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E416E50)
#define GADFFIFFNHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E416E80)
#define GADFFIFFNHM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E416E90)

	class GADFFIFFNHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADFFIFFNHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM___C_CTOR_OFFSET))(this);
		}

		::GADFFIFFNHM* __cctor_b__48_0()
		{
			return ((::GADFFIFFNHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
