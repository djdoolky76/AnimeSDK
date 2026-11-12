#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNOOMFIAFPF;
namespace System { class Object; }

#define MNOOMFIAFPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDDDAA0)
#define MNOOMFIAFPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDDDAE0)
#define MNOOMFIAFPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDDDAF0)

inline static constexpr unsigned int MNOOMFIAFPF___c_TypeDefinitionIndex = 29361;

	class MNOOMFIAFPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x622E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNOOMFIAFPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOOMFIAFPF___C_CTOR_OFFSET))(this);
		}

		::MNOOMFIAFPF* __cctor_b__28_0()
		{
			return ((::MNOOMFIAFPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOOMFIAFPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
