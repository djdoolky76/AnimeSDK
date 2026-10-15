#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLPLICDMFEL;
namespace System { class Object; }

#define BLPLICDMFEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01D440)
#define BLPLICDMFEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01D480)
#define BLPLICDMFEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E01D490)

	class BLPLICDMFEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLPLICDMFEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL___C_CTOR_OFFSET))(this);
		}

		::BLPLICDMFEL* __cctor_b__28_0()
		{
			return ((::BLPLICDMFEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPLICDMFEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
