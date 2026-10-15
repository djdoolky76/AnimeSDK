#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAFDLBFIJMB;
namespace System { class Object; }

#define MAFDLBFIJMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D82D0)
#define MAFDLBFIJMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8300)
#define MAFDLBFIJMB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9D8310)

	class MAFDLBFIJMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x429A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAFDLBFIJMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB___C_CTOR_OFFSET))(this);
		}

		::MAFDLBFIJMB* __cctor_b__28_0()
		{
			return ((::MAFDLBFIJMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFDLBFIJMB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
