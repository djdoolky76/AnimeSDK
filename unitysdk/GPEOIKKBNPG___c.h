#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPEOIKKBNPG;
namespace System { class Object; }

#define GPEOIKKBNPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F81E0)
#define GPEOIKKBNPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F8220)
#define GPEOIKKBNPG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4F8230)

	class GPEOIKKBNPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPEOIKKBNPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG___C_CTOR_OFFSET))(this);
		}

		::GPEOIKKBNPG* __cctor_b__28_0()
		{
			return ((::GPEOIKKBNPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEOIKKBNPG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
