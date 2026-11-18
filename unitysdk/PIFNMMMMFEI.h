#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define PIFNMMMMFEI_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x1A7F4390)
#define PIFNMMMMFEI_ONDROP_OFFSET UNITYSDK_OFFSET(0x1A7F43E0)
#define PIFNMMMMFEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F4380)

inline static constexpr unsigned int PIFNMMMMFEI_TypeDefinitionIndex = 63937;

class PIFNMMMMFEI : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NDDKCGEDDEN; // 0x10
	::System::Int32 NBIOLOEMMBL; // 0x18

	::System::Void _ctor(::System::Int32 FBKGFLADIDE, ::System::Action_1<::System::Int32>* ACCMBOADNMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PIFNMMMMFEI__CTOR_OFFSET))(this, FBKGFLADIDE, ACCMBOADNMD);
	}

	::System::Boolean CanAcceptDrop(::System::Object* MFHBPIBHAOB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIFNMMMMFEI_CANACCEPTDROP_OFFSET))(this, MFHBPIBHAOB);
	}

	::System::Void OnDrop(::System::Object* MFHBPIBHAOB, ::UnityEngine::Transform* JHDOMODPOPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIFNMMMMFEI_ONDROP_OFFSET))(this, MFHBPIBHAOB, JHDOMODPOPO);
	}
};
