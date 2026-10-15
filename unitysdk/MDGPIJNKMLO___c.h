#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDGPIJNKMLO;
namespace System { class Object; }

#define MDGPIJNKMLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA03430)
#define MDGPIJNKMLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA03460)
#define MDGPIJNKMLO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA03470)

	class MDGPIJNKMLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x495F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDGPIJNKMLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO___C_CTOR_OFFSET))(this);
		}

		::MDGPIJNKMLO* __cctor_b__18_0()
		{
			return ((::MDGPIJNKMLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
