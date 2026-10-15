#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKJMGFOPHHN;
namespace System { class Object; }

#define FKJMGFOPHHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E383BF0)
#define FKJMGFOPHHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E383C30)
#define FKJMGFOPHHN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E383C40)

inline static constexpr unsigned int FKJMGFOPHHN___c_TypeDefinitionIndex = 29491;

	class FKJMGFOPHHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ACD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKJMGFOPHHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN___C_CTOR_OFFSET))(this);
		}

		::FKJMGFOPHHN* __cctor_b__28_0()
		{
			return ((::FKJMGFOPHHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJMGFOPHHN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
