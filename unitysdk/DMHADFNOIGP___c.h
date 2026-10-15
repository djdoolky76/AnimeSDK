#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMHADFNOIGP;
namespace System { class Object; }

#define DMHADFNOIGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1540)
#define DMHADFNOIGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1580)
#define DMHADFNOIGP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1C1590)

inline static constexpr unsigned int DMHADFNOIGP___c_TypeDefinitionIndex = 27209;

	class DMHADFNOIGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x364C0);
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
