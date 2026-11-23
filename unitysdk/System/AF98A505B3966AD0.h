#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/EC7B8AE64364F4AB.h"

#define SYSTEM_AF98A505B3966AD0_A5D29CAD618ED92D_OFFSET UNITYSDK_OFFSET(0x1ACD0A0)
#define SYSTEM_AF98A505B3966AD0_F09715278FAAA3D2_OFFSET UNITYSDK_OFFSET(0x1ACD0B0)
#define SYSTEM_AF98A505B3966AD0__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BC0160)
#define SYSTEM_AF98A505B3966AD0__CTOR_OFFSET UNITYSDK_OFFSET(0x3BC01E0)

namespace System
{
	inline static constexpr unsigned int AF98A505B3966AD0_TypeDefinitionIndex = 11202;

	class AF98A505B3966AD0 : public ::System::Attribute
	{
	public:
		static ::System::AF98A505B3966AD0** StaticGet_EF2E6918210D1E4E()
		{
			return (::System::AF98A505B3966AD0**)Il2CppClass::FromTypeDefinitionIndex(AF98A505B3966AD0_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::EC7B8AE64364F4AB FC99AEA84576488F; // 0x10
		::System::Boolean A49A482560A7E609; // 0x14
		::System::Boolean FF2508C9CD3AF562; // 0x15

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_AF98A505B3966AD0__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::EC7B8AE64364F4AB F2F8FE06DE4A4466)
		{
			return ((::System::Void(*)(::PVOID, ::System::EC7B8AE64364F4AB))((::PBYTE)hIl2Cpp + SYSTEM_AF98A505B3966AD0__CTOR_OFFSET))(this, F2F8FE06DE4A4466);
		}

		::System::Void A5D29CAD618ED92D(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_AF98A505B3966AD0_A5D29CAD618ED92D_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F09715278FAAA3D2(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_AF98A505B3966AD0_F09715278FAAA3D2_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
