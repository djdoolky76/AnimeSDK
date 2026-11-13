#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBEMBMGFDBJ;
namespace System { class Object; }

#define IBEMBMGFDBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203AC0B0)
#define IBEMBMGFDBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203AC0F0)
#define IBEMBMGFDBJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x203AC100)

inline static constexpr unsigned int IBEMBMGFDBJ___c_TypeDefinitionIndex = 30535;

	class IBEMBMGFDBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBEMBMGFDBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ___C_CTOR_OFFSET))(this);
		}

		::IBEMBMGFDBJ* __cctor_b__48_0()
		{
			return ((::IBEMBMGFDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
