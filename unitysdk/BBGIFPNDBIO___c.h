#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBGIFPNDBIO;
namespace System { class Object; }

#define BBGIFPNDBIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3770)
#define BBGIFPNDBIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C37B0)
#define BBGIFPNDBIO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7C37C0)

	class BBGIFPNDBIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBGIFPNDBIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO___C_CTOR_OFFSET))(this);
		}

		::BBGIFPNDBIO* __cctor_b__23_0()
		{
			return ((::BBGIFPNDBIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGIFPNDBIO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
