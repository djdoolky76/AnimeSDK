#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGFLOJNIFLF;
namespace System { class Object; }

#define PGFLOJNIFLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2EBE0)
#define PGFLOJNIFLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2EC10)
#define PGFLOJNIFLF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF2EC20)

	class PGFLOJNIFLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGFLOJNIFLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF___C_CTOR_OFFSET))(this);
		}

		::PGFLOJNIFLF* __cctor_b__33_0()
		{
			return ((::PGFLOJNIFLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
