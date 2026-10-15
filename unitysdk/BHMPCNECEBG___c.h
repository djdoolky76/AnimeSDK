#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMPCNECEBG;
namespace System { class Object; }

#define BHMPCNECEBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFCB40)
#define BHMPCNECEBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFCB80)
#define BHMPCNECEBG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDFCB90)

	class BHMPCNECEBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMPCNECEBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG___C_CTOR_OFFSET))(this);
		}

		::BHMPCNECEBG* __cctor_b__23_0()
		{
			return ((::BHMPCNECEBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
