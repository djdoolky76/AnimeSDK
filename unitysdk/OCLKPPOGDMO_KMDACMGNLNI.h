#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class OCLKPPOGDMO;
namespace MoleMole::Config { class ConfigOverShoulderCamera; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OCLKPPOGDMO_KMDACMGNLNI_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0xB309BB0)
#define OCLKPPOGDMO_KMDACMGNLNI__CTOR_OFFSET UNITYSDK_OFFSET(0xB309BA0)

inline static constexpr unsigned int OCLKPPOGDMO_KMDACMGNLNI_TypeDefinitionIndex = 79429;

class OCLKPPOGDMO_KMDACMGNLNI : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x10
	::OCLKPPOGDMO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKPPOGDMO_KMDACMGNLNI__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigOverShoulderCamera*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigOverShoulderCamera*>*))((::PBYTE)hIl2Cpp + OCLKPPOGDMO_KMDACMGNLNI_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
