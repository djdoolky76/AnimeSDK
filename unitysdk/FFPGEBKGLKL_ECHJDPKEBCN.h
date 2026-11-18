#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class FFPGEBKGLKL;
namespace MoleMole::Config { class ConfigAraTrails; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FFPGEBKGLKL_ECHJDPKEBCN_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x116ADA30)
#define FFPGEBKGLKL_ECHJDPKEBCN__CTOR_OFFSET UNITYSDK_OFFSET(0x116ADA20)

inline static constexpr unsigned int FFPGEBKGLKL_ECHJDPKEBCN_TypeDefinitionIndex = 83009;

class FFPGEBKGLKL_ECHJDPKEBCN : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x10
	::FFPGEBKGLKL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_ECHJDPKEBCN__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigAraTrails*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigAraTrails*>*))((::PBYTE)hIl2Cpp + FFPGEBKGLKL_ECHJDPKEBCN_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
