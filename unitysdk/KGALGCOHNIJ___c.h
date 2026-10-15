#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGALGCOHNIJ;
namespace System { class Object; }

#define KGALGCOHNIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E833160)
#define KGALGCOHNIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E833190)
#define KGALGCOHNIJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8331A0)

	class KGALGCOHNIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGALGCOHNIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ___C_CTOR_OFFSET))(this);
		}

		::KGALGCOHNIJ* __cctor_b__28_0()
		{
			return ((::KGALGCOHNIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALGCOHNIJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
