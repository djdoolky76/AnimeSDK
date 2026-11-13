#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FeatureData; }
namespace RPG::Client { class IdentityData; }
namespace System { class String; }

#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA0560)
#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__REMOVENPCTODATA_B__0_OFFSET UNITYSDK_OFFSET(0x1CAA0790)
#define RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__REMOVENPCTODATA_B__1_OFFSET UNITYSDK_OFFSET(0x1CAA07E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCConfig___c__DisplayClass8_0_TypeDefinitionIndex = 61291;

	class AssemNPCConfig___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::String* FeatureID; // 0x10
		::System::String* IdentityID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveNPCToData_b__0(::RPG::Client::IdentityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IdentityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__REMOVENPCTODATA_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _RemoveNPCToData_b__1(::RPG::Client::FeatureData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FeatureData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__DISPLAYCLASS8_0__REMOVENPCTODATA_B__1_OFFSET))(this, a1);
		}

	};
}
