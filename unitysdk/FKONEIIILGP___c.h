#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKONEIIILGP;
namespace System { class Object; }

#define FKONEIIILGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B39B0)
#define FKONEIIILGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B39E0)
#define FKONEIIILGP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3B39F0)

	class FKONEIIILGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKONEIIILGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKONEIIILGP___C_CTOR_OFFSET))(this);
		}

		::FKONEIIILGP* __cctor_b__18_0()
		{
			return ((::FKONEIIILGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKONEIIILGP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
