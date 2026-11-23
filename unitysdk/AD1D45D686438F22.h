#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class SO_DefaultReferences; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AD1D45D686438F22_F83E939643805B9E_OFFSET UNITYSDK_OFFSET(0x3D6B250)

inline static constexpr unsigned int AD1D45D686438F22_TypeDefinitionIndex = 18796;

class AD1D45D686438F22 : public ::System::Object
{
public:
	static ::System::Void F83E939643805B9E(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::PampelGames::RoadConstructor::SO_DefaultReferences* B6F7C790210324C2, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* F832E176ED2FAE8E)
	{
		return ((::System::Void(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::PampelGames::RoadConstructor::SO_DefaultReferences*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*))((::PBYTE)hIl2Cpp + AD1D45D686438F22_F83E939643805B9E_OFFSET))(B657584D50B81BBF, B6F7C790210324C2, F832E176ED2FAE8E);
	}
};
