#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEAIMKCPPDJ;
namespace System { class Object; }

#define DEAIMKCPPDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18EB80)
#define DEAIMKCPPDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18EBC0)
#define DEAIMKCPPDJ___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E18EBD0)

inline static constexpr unsigned int DEAIMKCPPDJ___c_TypeDefinitionIndex = 30141;

	class DEAIMKCPPDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEAIMKCPPDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ___C_CTOR_OFFSET))(this);
		}

		::DEAIMKCPPDJ* __cctor_b__53_0()
		{
			return ((::DEAIMKCPPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAIMKCPPDJ___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
