#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define KHJBODBOOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x52F570)

inline static constexpr unsigned int KHJBODBOOAD_TypeDefinitionIndex = 67630;

struct alignas(8) KHJBODBOOAD
{
	::UnityEngine::Material* KEHECMCDLFC; // 0x10
	::System::String* DLFOFEDHIMC; // 0x18
	::System::Boolean JDAGKAMAGAK; // 0x20

	::System::Void _ctor(::UnityEngine::Material* HODAIDNDKHD, ::System::String* ENODHLBGNJH, ::System::Boolean DECIDLELLCP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHJBODBOOAD__CTOR_OFFSET))(this, HODAIDNDKHD, ENODHLBGNJH, DECIDLELLCP);
	}
};
