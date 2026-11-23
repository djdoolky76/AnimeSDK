#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define E9AE8EB83C71728B_A332349AB9DBEC11_OFFSET UNITYSDK_OFFSET(0x40D6420)
#define E9AE8EB83C71728B_E70BB7473B220997_OFFSET UNITYSDK_OFFSET(0x40D6A30)
#define E9AE8EB83C71728B__CCTOR_OFFSET UNITYSDK_OFFSET(0x40D6B80)

inline static constexpr unsigned int E9AE8EB83C71728B_TypeDefinitionIndex = 20212;

class E9AE8EB83C71728B : public ::System::Object
{
public:
	static ::System::Double* StaticGet_B956D69CB8F5C2B4()
	{
		return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(E9AE8EB83C71728B_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* E70BB7473B220997(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* F474F69564C2089A)
	{
		return ((::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*(*)(::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + E9AE8EB83C71728B_E70BB7473B220997_OFFSET))(F474F69564C2089A);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E9AE8EB83C71728B__CCTOR_OFFSET))();
	}

	static ::System::Void A332349AB9DBEC11(::UnityEngine::Timeline::TrackAsset* B286159CFDC40A9F)
	{
		return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + E9AE8EB83C71728B_A332349AB9DBEC11_OFFSET))(B286159CFDC40A9F);
	}
};
