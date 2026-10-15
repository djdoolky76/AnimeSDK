#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define EKAFJOGBCFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x154EEAE0)
#define EKAFJOGBCFA_CTOR_OFFSET UNITYSDK_OFFSET(0x154EEAD0)

inline static constexpr unsigned int EKAFJOGBCFA_TypeDefinitionIndex = 48501;

	class EKAFJOGBCFA : public ::System::Object
	{
	public:
		::System::String* NLCHJCDAKCB; // 0x10
		::UnityEngine::Timeline::TrackAsset* CIBMFKKGFGN; // 0x18
		::UnityEngine::GameObject* CGMNHAEFLEP; // 0x20
		::System::String* KNAPCKONKFE; // 0x28
		::UnityEngine::GameObject* BNOMDLCNPMN; // 0x30
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKAFJOGBCFA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EKAFJOGBCFA_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
