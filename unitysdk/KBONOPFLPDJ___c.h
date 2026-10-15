#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBONOPFLPDJ;
namespace System { class Object; }

#define KBONOPFLPDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C47F0)
#define KBONOPFLPDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C4820)
#define KBONOPFLPDJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7C4830)

inline static constexpr unsigned int KBONOPFLPDJ___c_TypeDefinitionIndex = 32385;

	class KBONOPFLPDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBONOPFLPDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ___C_CTOR_OFFSET))(this);
		}

		::KBONOPFLPDJ* __cctor_b__28_0()
		{
			return ((::KBONOPFLPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBONOPFLPDJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
