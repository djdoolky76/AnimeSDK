#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHLACNDNHA;
namespace System { class Object; }

#define GKHLACNDNHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B63D0)
#define GKHLACNDNHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B6410)
#define GKHLACNDNHA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4B6420)

inline static constexpr unsigned int GKHLACNDNHA___c_TypeDefinitionIndex = 30557;

	class GKHLACNDNHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHLACNDNHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA___C_CTOR_OFFSET))(this);
		}

		::GKHLACNDNHA* __cctor_b__23_0()
		{
			return ((::GKHLACNDNHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHLACNDNHA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
