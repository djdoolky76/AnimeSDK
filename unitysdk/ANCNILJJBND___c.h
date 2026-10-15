#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNILJJBND;
namespace System { class Object; }

#define ANCNILJJBND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC730)
#define ANCNILJJBND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC770)
#define ANCNILJJBND___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E4FC780)

inline static constexpr unsigned int ANCNILJJBND___c_TypeDefinitionIndex = 32127;

	class ANCNILJJBND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x463F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANCNILJJBND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNILJJBND___C_CTOR_OFFSET))(this);
		}

		::ANCNILJJBND* __cctor_b__18_0()
		{
			return ((::ANCNILJJBND*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNILJJBND___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
