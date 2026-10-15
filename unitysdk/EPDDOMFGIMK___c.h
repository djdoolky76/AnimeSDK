#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPDDOMFGIMK;
namespace System { class Object; }

#define EPDDOMFGIMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DBEE0)
#define EPDDOMFGIMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DBF20)
#define EPDDOMFGIMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2DBF30)

inline static constexpr unsigned int EPDDOMFGIMK___c_TypeDefinitionIndex = 27318;

	class EPDDOMFGIMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x489C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPDDOMFGIMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDDOMFGIMK___C_CTOR_OFFSET))(this);
		}

		::EPDDOMFGIMK* __cctor_b__23_0()
		{
			return ((::EPDDOMFGIMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDDOMFGIMK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
