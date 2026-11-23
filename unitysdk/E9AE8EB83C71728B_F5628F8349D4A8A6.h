#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define E9AE8EB83C71728B_F5628F8349D4A8A6_F9299DC35767C946_OFFSET UNITYSDK_OFFSET(0x40E8BF0)
#define E9AE8EB83C71728B_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x40E8D70)
#define E9AE8EB83C71728B_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9AE8EB83C71728B_F5628F8349D4A8A6_TypeDefinitionIndex = 20211;

class E9AE8EB83C71728B_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E9AE8EB83C71728B_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E9AE8EB83C71728B_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E9AE8EB83C71728B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::UnityEngine::Timeline::TimelineClip*>** StaticGet_E3CEE43317B9E051()
	{
		return (::System::ADDF5F55A85EB950<::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(E9AE8EB83C71728B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E9AE8EB83C71728B_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9AE8EB83C71728B_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 F9299DC35767C946(::UnityEngine::Timeline::TimelineClip* B70234A7D4AF49C9, ::UnityEngine::Timeline::TimelineClip* BF8D3D0DD0E2721E)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + E9AE8EB83C71728B_F5628F8349D4A8A6_F9299DC35767C946_OFFSET))(this, B70234A7D4AF49C9, BF8D3D0DD0E2721E);
	}
};
