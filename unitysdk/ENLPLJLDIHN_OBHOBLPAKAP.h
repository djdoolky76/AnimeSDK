#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class ENLPLJLDIHN;
namespace MoleMole { class ConfigGalGameAvatarShowSettings; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ENLPLJLDIHN_OBHOBLPAKAP_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x10F48AD0)
#define ENLPLJLDIHN_OBHOBLPAKAP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F48AC0)

inline static constexpr unsigned int ENLPLJLDIHN_OBHOBLPAKAP_TypeDefinitionIndex = 43113;

class ENLPLJLDIHN_OBHOBLPAKAP : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x10
	::ENLPLJLDIHN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLPLJLDIHN_OBHOBLPAKAP__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigGalGameAvatarShowSettings*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigGalGameAvatarShowSettings*>*))((::PBYTE)hIl2Cpp + ENLPLJLDIHN_OBHOBLPAKAP_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
