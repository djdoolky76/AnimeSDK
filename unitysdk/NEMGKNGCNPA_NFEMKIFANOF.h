#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NEMGKNGCNPA;
namespace MoleMole::Config { class ConfigSlideRopeCamera; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEMGKNGCNPA_NFEMKIFANOF_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x120FD0A0)
#define NEMGKNGCNPA_NFEMKIFANOF__CTOR_OFFSET UNITYSDK_OFFSET(0x120FCD90)

inline static constexpr unsigned int NEMGKNGCNPA_NFEMKIFANOF_TypeDefinitionIndex = 72228;

class NEMGKNGCNPA_NFEMKIFANOF : public ::System::Object
{
public:
	::NEMGKNGCNPA* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_NFEMKIFANOF__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigSlideRopeCamera*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigSlideRopeCamera*>*))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_NFEMKIFANOF_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
