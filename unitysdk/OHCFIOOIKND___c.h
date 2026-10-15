#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHCFIOOIKND;
namespace System { class Object; }

#define OHCFIOOIKND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE30EE0)
#define OHCFIOOIKND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE30F10)
#define OHCFIOOIKND___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE30F20)

inline static constexpr unsigned int OHCFIOOIKND___c_TypeDefinitionIndex = 34551;

	class OHCFIOOIKND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHCFIOOIKND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND___C_CTOR_OFFSET))(this);
		}

		::OHCFIOOIKND* __cctor_b__28_0()
		{
			return ((::OHCFIOOIKND*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
