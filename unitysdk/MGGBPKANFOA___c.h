#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGGBPKANFOA;
namespace System { class Object; }

#define MGGBPKANFOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA25590)
#define MGGBPKANFOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA255C0)
#define MGGBPKANFOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA255D0)

	class MGGBPKANFOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGGBPKANFOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA___C_CTOR_OFFSET))(this);
		}

		::MGGBPKANFOA* __cctor_b__23_0()
		{
			return ((::MGGBPKANFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGBPKANFOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
