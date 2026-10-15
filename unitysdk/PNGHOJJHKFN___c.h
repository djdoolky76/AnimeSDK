#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNGHOJJHKFN;
namespace System { class Object; }

#define PNGHOJJHKFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB8F80)
#define PNGHOJJHKFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB8FB0)
#define PNGHOJJHKFN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DFB8FC0)

	class PNGHOJJHKFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGHOJJHKFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN___C_CTOR_OFFSET))(this);
		}

		::PNGHOJJHKFN* __cctor_b__18_0()
		{
			return ((::PNGHOJJHKFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGHOJJHKFN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
