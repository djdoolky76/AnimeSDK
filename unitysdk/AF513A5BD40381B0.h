#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FA4069D5E8D991B2;
namespace UnityEngine { class MeshCollider; }

#define AF513A5BD40381B0_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x387DBD0)

inline static constexpr unsigned int AF513A5BD40381B0_TypeDefinitionIndex = 18082;

class AF513A5BD40381B0 : public ::System::Object
{
public:
	static ::FA4069D5E8D991B2* F29687675C2F4BB9(::UnityEngine::MeshCollider* BD8273AB04C4B760)
	{
		return ((::FA4069D5E8D991B2*(*)(::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + AF513A5BD40381B0_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
