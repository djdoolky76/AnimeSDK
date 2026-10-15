#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPDGPEOBBNJ;
namespace System { class Object; }

#define JPDGPEOBBNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1110)
#define JPDGPEOBBNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1140)
#define JPDGPEOBBNJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7D1150)

	class JPDGPEOBBNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPDGPEOBBNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ___C_CTOR_OFFSET))(this);
		}

		::JPDGPEOBBNJ* __cctor_b__18_0()
		{
			return ((::JPDGPEOBBNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
