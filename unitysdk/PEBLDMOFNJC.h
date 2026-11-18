#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEntityModelModifier; }
namespace System { class String; }

#define PEBLDMOFNJC_EKOAIDCMPCE_OFFSET UNITYSDK_OFFSET(0x14B963F0)
#define PEBLDMOFNJC_GFCKFEPALCK_OFFSET UNITYSDK_OFFSET(0x14B96280)

inline static constexpr unsigned int PEBLDMOFNJC_TypeDefinitionIndex = 74328;

class PEBLDMOFNJC : public ::System::Object
{
public:
	static ::MoleMole::Config::EntityType GFCKFEPALCK(::System::Int32 NEPNMLIMGIE)
	{
		return ((::MoleMole::Config::EntityType(*)(::System::Int32))((::PBYTE)hIl2Cpp + PEBLDMOFNJC_GFCKFEPALCK_OFFSET))(NEPNMLIMGIE);
	}

	static ::MoleMole::EntityHandle EKOAIDCMPCE(::System::Int32 GIAOKGFENJD, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single CFJFMMGPGKE, ::System::Boolean KICLNPMPOEI, ::System::String* DFCJFPNCLEO, ::System::UInt64 ANOBHPEJLLN, ::MoleMole::MonoEntityModelModifier* BEOFKLACFGE)
	{
		return ((::MoleMole::EntityHandle(*)(::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::String*, ::System::UInt64, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + PEBLDMOFNJC_EKOAIDCMPCE_OFFSET))(GIAOKGFENJD, OHOGDOMNHNK, CFJFMMGPGKE, KICLNPMPOEI, DFCJFPNCLEO, ANOBHPEJLLN, BEOFKLACFGE);
	}
};
