#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFBHKJLJJBJ;
namespace System { class Object; }

#define BFBHKJLJJBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C1C0)
#define BFBHKJLJJBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C200)
#define BFBHKJLJJBJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA6C210)

	class BFBHKJLJJBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFBHKJLJJBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ___C_CTOR_OFFSET))(this);
		}

		::BFBHKJLJJBJ* __cctor_b__28_0()
		{
			return ((::BFBHKJLJJBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
