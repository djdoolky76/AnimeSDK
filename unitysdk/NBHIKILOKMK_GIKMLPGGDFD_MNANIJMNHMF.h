#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NBHIKILOKMK_GIKMLPGGDFD;
namespace MoleMole::Config { class ConfigRealtimeQTE; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NBHIKILOKMK_GIKMLPGGDFD_MNANIJMNHMF_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0xE567C70)
#define NBHIKILOKMK_GIKMLPGGDFD_MNANIJMNHMF__CTOR_OFFSET UNITYSDK_OFFSET(0xE567C60)

inline static constexpr unsigned int NBHIKILOKMK_GIKMLPGGDFD_MNANIJMNHMF_TypeDefinitionIndex = 80327;

class NBHIKILOKMK_GIKMLPGGDFD_MNANIJMNHMF : public ::System::Object
{
public:
	::NBHIKILOKMK_GIKMLPGGDFD* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_GIKMLPGGDFD_MNANIJMNHMF__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigRealtimeQTE*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigRealtimeQTE*>*))((::PBYTE)hIl2Cpp + NBHIKILOKMK_GIKMLPGGDFD_MNANIJMNHMF_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
