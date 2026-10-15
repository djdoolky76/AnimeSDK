#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMHDLBHJKOG;
namespace System { class Object; }

#define DMHDLBHJKOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EF620)
#define DMHDLBHJKOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EF660)
#define DMHDLBHJKOG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1EF670)

	class DMHDLBHJKOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMHDLBHJKOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG___C_CTOR_OFFSET))(this);
		}

		::DMHDLBHJKOG* __cctor_b__23_0()
		{
			return ((::DMHDLBHJKOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
