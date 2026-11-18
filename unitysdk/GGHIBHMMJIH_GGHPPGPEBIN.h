#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class GGHIBHMMJIH;
class MHKICIJCKLP;
namespace MoleMole { class AvatarShowSetting; }

#define GGHIBHMMJIH_GGHPPGPEBIN_EAICCKDKPEB_OFFSET UNITYSDK_OFFSET(0x179EC910)
#define GGHIBHMMJIH_GGHPPGPEBIN__CTOR_OFFSET UNITYSDK_OFFSET(0x179E9FB0)

inline static constexpr unsigned int GGHIBHMMJIH_GGHPPGPEBIN_TypeDefinitionIndex = 45797;

class GGHIBHMMJIH_GGHPPGPEBIN : public ::System::Object
{
public:
	::GGHIBHMMJIH* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath JGCGKBANHEN; // 0x18
	::MHKICIJCKLP* KMMKMGDHCOI; // 0x28
	::MoleMole::AvatarShowSetting* HFALBGDOFFO; // 0x30
	::System::Int32 GALDCEHLDOO; // 0x38
	::System::Int32 PKMFBJMJCOO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_GGHPPGPEBIN__CTOR_OFFSET))(this);
	}

	::System::Void EAICCKDKPEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_GGHPPGPEBIN_EAICCKDKPEB_OFFSET))(this);
	}
};
