#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GCIBGPMFHMF_EPABOOHKOAO_OFFSET UNITYSDK_OFFSET(0x165E5A20)
#define GCIBGPMFHMF_GPFIKOIHAKA_OFFSET UNITYSDK_OFFSET(0x165E4F60)
#define GCIBGPMFHMF__CCTOR_OFFSET UNITYSDK_OFFSET(0x165E5B50)
#define GCIBGPMFHMF__CTOR_OFFSET UNITYSDK_OFFSET(0x165E5B40)

inline static constexpr unsigned int GCIBGPMFHMF_TypeDefinitionIndex = 87934;

class GCIBGPMFHMF : public ::System::Object
{
public:
	static ::GCIBGPMFHMF** StaticGet_NJLLMPCDOEB()
	{
		return (::GCIBGPMFHMF**)Il2CppClass::FromTypeDefinitionIndex(GCIBGPMFHMF_TypeDefinitionIndex)->GetStaticField(0x31720);
	}
	// static const ::System::Single CIFDGGPOPBL; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIBGPMFHMF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCIBGPMFHMF__CCTOR_OFFSET))();
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> GPFIKOIHAKA(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 GJNLCLDFFIN, ::Foundation::ViewObject::GroupMemberIdentifier HLDBBGGLNKP)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + GCIBGPMFHMF_GPFIKOIHAKA_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN, HLDBBGGLNKP);
	}

	static ::System::Boolean EPABOOHKOAO(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3& FCPANIPBDFB)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + GCIBGPMFHMF_EPABOOHKOAO_OFFSET))(OHOGDOMNHNK, FCPANIPBDFB);
	}
};
