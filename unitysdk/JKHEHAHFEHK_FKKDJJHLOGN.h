#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class JKHEHAHFEHK;
namespace MoleMole::Config { class ConfigOverShoulderCamera; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JKHEHAHFEHK_FKKDJJHLOGN_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x17B2D1B0)
#define JKHEHAHFEHK_FKKDJJHLOGN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2D1A0)

inline static constexpr unsigned int JKHEHAHFEHK_FKKDJJHLOGN_TypeDefinitionIndex = 78876;

class JKHEHAHFEHK_FKKDJJHLOGN : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x10
	::JKHEHAHFEHK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHEHAHFEHK_FKKDJJHLOGN__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigOverShoulderCamera*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigOverShoulderCamera*>*))((::PBYTE)hIl2Cpp + JKHEHAHFEHK_FKKDJJHLOGN_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
