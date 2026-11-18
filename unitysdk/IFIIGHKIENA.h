#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IFIIGHKIENA_HFKJALIOEDD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFIIGHKIENA_OBACBCKHNPP_OFFSET UNITYSDK_OFFSET(0x13A97F40)

inline static constexpr unsigned int IFIIGHKIENA_TypeDefinitionIndex = 44838;

class IFIIGHKIENA : public ::System::Object
{
public:
	static ::System::UInt32 OBACBCKHNPP(::IFIIGHKIENA_HFKJALIOEDD DCMLMJJAKMI, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGDAPONDHCE, ::MoleMole::Config::CampType ENMLFHNKPPL)
	{
		return ((::System::UInt32(*)(::IFIIGHKIENA_HFKJALIOEDD, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + IFIIGHKIENA_OBACBCKHNPP_OFFSET))(DCMLMJJAKMI, CKPGOKHECCH, HBOHIAPEIMH, OLNAFBAENGH, OJBJBOJKFJO, EGDAPONDHCE, ENMLFHNKPPL);
	}
};
