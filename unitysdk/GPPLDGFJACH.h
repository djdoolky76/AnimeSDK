#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NKHFCEIKHOO;

#define GPPLDGFJACH_EFJMBPHOBEI_OFFSET UNITYSDK_OFFSET(0x13D77A40)
#define GPPLDGFJACH_FAMFPJEMEAN_OFFSET UNITYSDK_OFFSET(0x13D77CE0)
#define GPPLDGFJACH_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x13D77AA0)
#define GPPLDGFJACH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D779E0)

inline static constexpr unsigned int GPPLDGFJACH_TypeDefinitionIndex = 41139;

class GPPLDGFJACH : public ::System::Object
{
public:
	static ::NKHFCEIKHOO** StaticGet_ALFGGJBHMGP()
	{
		return (::NKHFCEIKHOO**)Il2CppClass::FromTypeDefinitionIndex(GPPLDGFJACH_TypeDefinitionIndex)->GetStaticField(0x4CFC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPPLDGFJACH__CCTOR_OFFSET))();
	}

	static ::NKHFCEIKHOO* EFJMBPHOBEI()
	{
		return ((::NKHFCEIKHOO*(*)())((::PBYTE)hIl2Cpp + GPPLDGFJACH_EFJMBPHOBEI_OFFSET))();
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> JLIMOLHLFAK(::NKHFCEIKHOO* MOAIBKBEGFO, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 GJNLCLDFFIN, ::Foundation::ViewObject::GroupMemberIdentifier HLDBBGGLNKP)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::NKHFCEIKHOO*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + GPPLDGFJACH_JLIMOLHLFAK_OFFSET))(MOAIBKBEGFO, CKPGOKHECCH, GJNLCLDFFIN, HLDBBGGLNKP);
	}

	static ::System::Void FAMFPJEMEAN(::NKHFCEIKHOO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::NKHFCEIKHOO*))((::PBYTE)hIl2Cpp + GPPLDGFJACH_FAMFPJEMEAN_OFFSET))(EGEGIMGMJHN);
	}
};
