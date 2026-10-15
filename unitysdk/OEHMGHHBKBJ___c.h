#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEHMGHHBKBJ;
namespace System { class Object; }

#define OEHMGHHBKBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFDD60)
#define OEHMGHHBKBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFDD90)
#define OEHMGHHBKBJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDFDDA0)

inline static constexpr unsigned int OEHMGHHBKBJ___c_TypeDefinitionIndex = 34212;

	class OEHMGHHBKBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x139D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHMGHHBKBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ___C_CTOR_OFFSET))(this);
		}

		::OEHMGHHBKBJ* __cctor_b__23_0()
		{
			return ((::OEHMGHHBKBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHMGHHBKBJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
