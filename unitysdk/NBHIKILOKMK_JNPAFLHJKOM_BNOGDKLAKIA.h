#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NBHIKILOKMK_JNPAFLHJKOM;
namespace MoleMole::Config { class ConfigRealtimeQTE; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NBHIKILOKMK_JNPAFLHJKOM_BNOGDKLAKIA_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x120F1470)
#define NBHIKILOKMK_JNPAFLHJKOM_BNOGDKLAKIA__CTOR_OFFSET UNITYSDK_OFFSET(0x120F1460)

inline static constexpr unsigned int NBHIKILOKMK_JNPAFLHJKOM_BNOGDKLAKIA_TypeDefinitionIndex = 80331;

class NBHIKILOKMK_JNPAFLHJKOM_BNOGDKLAKIA : public ::System::Object
{
public:
	::NBHIKILOKMK_JNPAFLHJKOM* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_JNPAFLHJKOM_BNOGDKLAKIA__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigRealtimeQTE*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigRealtimeQTE*>*))((::PBYTE)hIl2Cpp + NBHIKILOKMK_JNPAFLHJKOM_BNOGDKLAKIA_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
