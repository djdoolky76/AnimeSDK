#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAGNHGIBCPG;
namespace System { class Object; }

#define DAGNHGIBCPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E152430)
#define DAGNHGIBCPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E152460)
#define DAGNHGIBCPG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E152470)

	class DAGNHGIBCPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAGNHGIBCPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG___C_CTOR_OFFSET))(this);
		}

		::DAGNHGIBCPG* __cctor_b__28_0()
		{
			return ((::DAGNHGIBCPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
