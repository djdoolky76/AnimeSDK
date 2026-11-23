#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B41A0238108684E4;
namespace UnityEngine { class Transform; }

#define F371911F4B701E93_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x38082F0)

inline static constexpr unsigned int F371911F4B701E93_TypeDefinitionIndex = 17813;

class F371911F4B701E93 : public ::System::Object
{
public:
	static ::B41A0238108684E4* F29687675C2F4BB9(::UnityEngine::Transform* BD8273AB04C4B760)
	{
		return ((::B41A0238108684E4*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + F371911F4B701E93_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
