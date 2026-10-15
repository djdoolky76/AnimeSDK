#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNDPFKFEENO;
namespace System { class Object; }

#define MNDPFKFEENO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA942F0)
#define MNDPFKFEENO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA94320)
#define MNDPFKFEENO___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1EA94330)

	class MNDPFKFEENO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNDPFKFEENO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDPFKFEENO___C_CTOR_OFFSET))(this);
		}

		::MNDPFKFEENO* __cctor_b__68_0()
		{
			return ((::MNDPFKFEENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDPFKFEENO___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
