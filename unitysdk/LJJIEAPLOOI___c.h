#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJJIEAPLOOI;
namespace System { class Object; }

#define LJJIEAPLOOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E984F40)
#define LJJIEAPLOOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E984F80)
#define LJJIEAPLOOI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E984F90)

	class LJJIEAPLOOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJIEAPLOOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI___C_CTOR_OFFSET))(this);
		}

		::LJJIEAPLOOI* __cctor_b__23_0()
		{
			return ((::LJJIEAPLOOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
