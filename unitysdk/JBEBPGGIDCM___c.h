#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBEBPGGIDCM;
namespace System { class Object; }

#define JBEBPGGIDCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F4940)
#define JBEBPGGIDCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F4980)
#define JBEBPGGIDCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6F4990)

	class JBEBPGGIDCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBEBPGGIDCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM___C_CTOR_OFFSET))(this);
		}

		::JBEBPGGIDCM* __cctor_b__23_0()
		{
			return ((::JBEBPGGIDCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
