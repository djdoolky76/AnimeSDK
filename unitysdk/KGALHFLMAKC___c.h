#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGALHFLMAKC;
namespace System { class Object; }

#define KGALHFLMAKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB4D6E0)
#define KGALHFLMAKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4D720)
#define KGALHFLMAKC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB4D730)

inline static constexpr unsigned int KGALHFLMAKC___c_TypeDefinitionIndex = 32220;

	class KGALHFLMAKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGALHFLMAKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC___C_CTOR_OFFSET))(this);
		}

		::KGALHFLMAKC* __cctor_b__28_0()
		{
			return ((::KGALHFLMAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGALHFLMAKC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
