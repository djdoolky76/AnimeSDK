#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOKMBKGPCFE;
namespace System { class Object; }

#define KOKMBKGPCFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B34A0)
#define KOKMBKGPCFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B34E0)
#define KOKMBKGPCFE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8B34F0)

	class KOKMBKGPCFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOKMBKGPCFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE___C_CTOR_OFFSET))(this);
		}

		::KOKMBKGPCFE* __cctor_b__23_0()
		{
			return ((::KOKMBKGPCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
