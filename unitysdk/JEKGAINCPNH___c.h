#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEKGAINCPNH;
namespace System { class Object; }

#define JEKGAINCPNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71F680)
#define JEKGAINCPNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71F6C0)
#define JEKGAINCPNH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E71F6D0)

	class JEKGAINCPNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEKGAINCPNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH___C_CTOR_OFFSET))(this);
		}

		::JEKGAINCPNH* __cctor_b__23_0()
		{
			return ((::JEKGAINCPNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKGAINCPNH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
