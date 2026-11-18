#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class APDAIKOBAKC;
namespace MoleMole::Config { class ConfigAvatarLayoutCamera; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define APDAIKOBAKC_DPDIKOOJLHL_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x1821DF90)
#define APDAIKOBAKC_DPDIKOOJLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1821DF80)

inline static constexpr unsigned int APDAIKOBAKC_DPDIKOOJLHL_TypeDefinitionIndex = 89013;

class APDAIKOBAKC_DPDIKOOJLHL : public ::System::Object
{
public:
	::APDAIKOBAKC* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDAIKOBAKC_DPDIKOOJLHL__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigAvatarLayoutCamera*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigAvatarLayoutCamera*>*))((::PBYTE)hIl2Cpp + APDAIKOBAKC_DPDIKOOJLHL_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
