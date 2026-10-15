#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJGOCJPBPFJ;
namespace System { class Object; }

#define IJGOCJPBPFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E694220)
#define IJGOCJPBPFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E694260)
#define IJGOCJPBPFJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E694270)

	class IJGOCJPBPFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x523F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJGOCJPBPFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ___C_CTOR_OFFSET))(this);
		}

		::IJGOCJPBPFJ* __cctor_b__28_0()
		{
			return ((::IJGOCJPBPFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGOCJPBPFJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
