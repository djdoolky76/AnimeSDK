#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EDBBEC7FE699BBE5_A265CD8B48E966DE_OFFSET UNITYSDK_OFFSET(0x27F53F0)
#define EDBBEC7FE699BBE5_F7F458730754B685_1_OFFSET UNITYSDK_OFFSET(0x27F52C0)
#define EDBBEC7FE699BBE5_F7F458730754B685_2_OFFSET UNITYSDK_OFFSET(0x27F5220)
#define EDBBEC7FE699BBE5_F7F458730754B685_OFFSET UNITYSDK_OFFSET(0x27F5360)

inline static constexpr unsigned int EDBBEC7FE699BBE5_TypeDefinitionIndex = 16776;

class EDBBEC7FE699BBE5 : public ::System::Object
{
public:
	static ::System::UInt32 A265CD8B48E966DE(::UnityEngine::Vector3 FD6BEC6563AC7110)
	{
		return ((::System::UInt32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EDBBEC7FE699BBE5_A265CD8B48E966DE_OFFSET))(FD6BEC6563AC7110);
	}

	static ::System::Boolean F7F458730754B685(::UnityEngine::Vector3& B35BBBE7E39341A2, ::UnityEngine::Vector3& AE40CAA6BBFEAD2C)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EDBBEC7FE699BBE5_F7F458730754B685_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	static ::System::Boolean F7F458730754B685_1(::UnityEngine::E46B881AA2636190& B35BBBE7E39341A2, ::UnityEngine::E46B881AA2636190& AE40CAA6BBFEAD2C)
	{
		return ((::System::Boolean(*)(::UnityEngine::E46B881AA2636190&, ::UnityEngine::E46B881AA2636190&))((::PBYTE)hIl2Cpp + EDBBEC7FE699BBE5_F7F458730754B685_1_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	static ::System::Boolean F7F458730754B685_2(::UnityEngine::Quaternion& B35BBBE7E39341A2, ::UnityEngine::Quaternion& AE40CAA6BBFEAD2C)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + EDBBEC7FE699BBE5_F7F458730754B685_2_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
