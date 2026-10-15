#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNILJJBND;
namespace System { class Object; }

#define ANCNILJJBND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E529D40)
#define ANCNILJJBND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E529D80)
#define ANCNILJJBND___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E529D90)

inline static constexpr unsigned int ANCNILJJBND___c_TypeDefinitionIndex = 32127;

	class ANCNILJJBND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D7C0);
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
