#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGFMDMPCKDN;
namespace System { class Object; }

#define CGFMDMPCKDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AEBA0)
#define CGFMDMPCKDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AEBE0)
#define CGFMDMPCKDN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0AEBF0)

	class CGFMDMPCKDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGFMDMPCKDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN___C_CTOR_OFFSET))(this);
		}

		::CGFMDMPCKDN* __cctor_b__23_0()
		{
			return ((::CGFMDMPCKDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFMDMPCKDN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
