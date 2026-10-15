#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JECIOGKPHFN;
namespace System { class Object; }

#define JECIOGKPHFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E714C40)
#define JECIOGKPHFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E714C80)
#define JECIOGKPHFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E714C90)

	class JECIOGKPHFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JECIOGKPHFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN___C_CTOR_OFFSET))(this);
		}

		::JECIOGKPHFN* __cctor_b__23_0()
		{
			return ((::JECIOGKPHFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
