#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMHADFNOIGP;
namespace System { class Object; }

#define DMHADFNOIGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EEAE0)
#define DMHADFNOIGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EEB20)
#define DMHADFNOIGP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1EEB30)

	class DMHADFNOIGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMHADFNOIGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP___C_CTOR_OFFSET))(this);
		}

		::DMHADFNOIGP* __cctor_b__28_0()
		{
			return ((::DMHADFNOIGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
