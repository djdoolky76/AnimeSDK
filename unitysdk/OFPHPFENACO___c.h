#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFPHPFENACO;
namespace System { class Object; }

#define OFPHPFENACO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4DB30)
#define OFPHPFENACO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4DB70)
#define OFPHPFENACO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE4DB80)

	class OFPHPFENACO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFPHPFENACO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO___C_CTOR_OFFSET))(this);
		}

		::OFPHPFENACO* __cctor_b__23_0()
		{
			return ((::OFPHPFENACO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
