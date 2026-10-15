#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLBAMNCLBHB;
namespace System { class Object; }

#define PLBAMNCLBHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF70710)
#define PLBAMNCLBHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF70750)
#define PLBAMNCLBHB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF70760)

inline static constexpr unsigned int PLBAMNCLBHB___c_TypeDefinitionIndex = 33488;

	class PLBAMNCLBHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLBAMNCLBHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB___C_CTOR_OFFSET))(this);
		}

		::PLBAMNCLBHB* __cctor_b__38_0()
		{
			return ((::PLBAMNCLBHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
