#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NMLIIGKIMLD;
namespace UnityEngine::Events { class UnityAction; }

#define NMLIIGKIMLD_LJJMNPAKDAG_FJHPJEDNJKG_OFFSET UNITYSDK_OFFSET(0x131696E0)
#define NMLIIGKIMLD_LJJMNPAKDAG__CTOR_OFFSET UNITYSDK_OFFSET(0x131696D0)

inline static constexpr unsigned int NMLIIGKIMLD_LJJMNPAKDAG_TypeDefinitionIndex = 57957;

class NMLIIGKIMLD_LJJMNPAKDAG : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* BDLKAKKCAII; // 0x10
	::NMLIIGKIMLD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLIIGKIMLD_LJJMNPAKDAG__CTOR_OFFSET))(this);
	}

	::System::Void FJHPJEDNJKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLIIGKIMLD_LJJMNPAKDAG_FJHPJEDNJKG_OFFSET))(this);
	}
};
