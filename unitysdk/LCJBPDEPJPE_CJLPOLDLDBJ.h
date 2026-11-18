#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LCJBPDEPJPE;
namespace MoleMole::Config { class ConfigGamepadRumble; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LCJBPDEPJPE_CJLPOLDLDBJ_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x1683B3F0)
#define LCJBPDEPJPE_CJLPOLDLDBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1683B3E0)

inline static constexpr unsigned int LCJBPDEPJPE_CJLPOLDLDBJ_TypeDefinitionIndex = 46157;

class LCJBPDEPJPE_CJLPOLDLDBJ : public ::System::Object
{
public:
	::LCJBPDEPJPE* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_CJLPOLDLDBJ__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigGamepadRumble*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigGamepadRumble*>*))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_CJLPOLDLDBJ_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
