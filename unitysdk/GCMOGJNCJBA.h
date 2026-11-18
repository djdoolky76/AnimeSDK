#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GCMOGJNCJBA_GPFIKOIHAKA_OFFSET UNITYSDK_OFFSET(0x11C9E450)
#define GCMOGJNCJBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C9E920)
#define GCMOGJNCJBA__CTOR_OFFSET UNITYSDK_OFFSET(0x11C9E910)

inline static constexpr unsigned int GCMOGJNCJBA_TypeDefinitionIndex = 49726;

class GCMOGJNCJBA : public ::System::Object
{
public:
	static ::GCMOGJNCJBA** StaticGet_NJLLMPCDOEB()
	{
		return (::GCMOGJNCJBA**)Il2CppClass::FromTypeDefinitionIndex(GCMOGJNCJBA_TypeDefinitionIndex)->GetStaticField(0x4CF40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMOGJNCJBA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCMOGJNCJBA__CCTOR_OFFSET))();
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> GPFIKOIHAKA(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 GJNLCLDFFIN, ::Foundation::ViewObject::GroupMemberIdentifier HLDBBGGLNKP)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + GCMOGJNCJBA_GPFIKOIHAKA_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN, HLDBBGGLNKP);
	}
};
