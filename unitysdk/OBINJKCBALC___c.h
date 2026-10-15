#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBINJKCBALC;
namespace System { class Object; }

#define OBINJKCBALC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB0FA0)
#define OBINJKCBALC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB0FE0)
#define OBINJKCBALC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EBB0FF0)

inline static constexpr unsigned int OBINJKCBALC___c_TypeDefinitionIndex = 27737;

	class OBINJKCBALC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x108C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBINJKCBALC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC___C_CTOR_OFFSET))(this);
		}

		::OBINJKCBALC* __cctor_b__23_0()
		{
			return ((::OBINJKCBALC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINJKCBALC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
