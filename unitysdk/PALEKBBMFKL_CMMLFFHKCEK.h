#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class PALEKBBMFKL;
namespace MoleMole::Config { class ConfigHighLightAirCombat; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PALEKBBMFKL_CMMLFFHKCEK_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x1A7DF1A0)
#define PALEKBBMFKL_CMMLFFHKCEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DF190)

inline static constexpr unsigned int PALEKBBMFKL_CMMLFFHKCEK_TypeDefinitionIndex = 68938;

class PALEKBBMFKL_CMMLFFHKCEK : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x10
	::PALEKBBMFKL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALEKBBMFKL_CMMLFFHKCEK__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHighLightAirCombat*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHighLightAirCombat*>*))((::PBYTE)hIl2Cpp + PALEKBBMFKL_CMMLFFHKCEK_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
