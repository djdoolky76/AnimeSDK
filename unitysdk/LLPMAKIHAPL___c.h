#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLPMAKIHAPL;
namespace System { class Object; }

#define LLPMAKIHAPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A05F0)
#define LLPMAKIHAPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A0630)
#define LLPMAKIHAPL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9A0640)

	class LLPMAKIHAPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLPMAKIHAPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL___C_CTOR_OFFSET))(this);
		}

		::LLPMAKIHAPL* __cctor_b__23_0()
		{
			return ((::LLPMAKIHAPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPMAKIHAPL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
