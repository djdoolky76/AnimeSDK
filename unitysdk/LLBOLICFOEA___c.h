#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBOLICFOEA;
namespace System { class Object; }

#define LLBOLICFOEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9974A0)
#define LLBOLICFOEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9974E0)
#define LLBOLICFOEA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9974F0)

	class LLBOLICFOEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLBOLICFOEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA___C_CTOR_OFFSET))(this);
		}

		::LLBOLICFOEA* __cctor_b__28_0()
		{
			return ((::LLBOLICFOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBOLICFOEA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
