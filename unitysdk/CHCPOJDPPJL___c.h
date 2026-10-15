#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHCPOJDPPJL;
namespace System { class Object; }

#define CHCPOJDPPJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C27B0)
#define CHCPOJDPPJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C27F0)
#define CHCPOJDPPJL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0C2800)

	class CHCPOJDPPJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x160D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHCPOJDPPJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL___C_CTOR_OFFSET))(this);
		}

		::CHCPOJDPPJL* __cctor_b__28_0()
		{
			return ((::CHCPOJDPPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCPOJDPPJL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
