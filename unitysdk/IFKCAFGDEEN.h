#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define IFKCAFGDEEN_BNOJFOHCMED_OFFSET UNITYSDK_OFFSET(0x15EB3B70)
#define IFKCAFGDEEN_ECDGBAPFJMN_OFFSET UNITYSDK_OFFSET(0x15EB3B00)
#define IFKCAFGDEEN_GFLIDEHDIND_OFFSET UNITYSDK_OFFSET(0x15EB3DB0)
#define IFKCAFGDEEN_JKNEEMPOIEJ_OFFSET UNITYSDK_OFFSET(0x15EB3D60)
#define IFKCAFGDEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB3A90)

inline static constexpr unsigned int IFKCAFGDEEN_TypeDefinitionIndex = 89736;

class IFKCAFGDEEN : public ::System::Object
{
public:
	::UnityEngine::RectTransform* ADEENCEMEEF; // 0x10
	::UnityEngine::Vector2 BJCLOBAGEBH; // 0x18
	::System::Single GDIPJHMLFHD; // 0x20
	::System::Int32 CGDPCDEBLDN; // 0x24
	::UnityEngine::Vector2 CFEGIKFNFLI; // 0x28

	::System::Void _ctor(::UnityEngine::RectTransform* MGOFOAFCFIJ, ::System::Int32 CGDPCDEBLDN, ::UnityEngine::Vector2 BJCLOBAGEBH, ::System::Single GDIPJHMLFHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + IFKCAFGDEEN__CTOR_OFFSET))(this, MGOFOAFCFIJ, CGDPCDEBLDN, BJCLOBAGEBH, GDIPJHMLFHD);
	}

	::UnityEngine::Vector2 BNOJFOHCMED(::System::Int32 ABHBKFJKINO, ::UnityEngine::RectTransform* EMDOIDLAFDB)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + IFKCAFGDEEN_BNOJFOHCMED_OFFSET))(this, ABHBKFJKINO, EMDOIDLAFDB);
	}

	::System::Void JKNEEMPOIEJ(::UnityEngine::Vector2 CFEGIKFNFLI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IFKCAFGDEEN_JKNEEMPOIEJ_OFFSET))(this, CFEGIKFNFLI);
	}

	::System::Void GFLIDEHDIND(::System::Int32 CGDPCDEBLDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFKCAFGDEEN_GFLIDEHDIND_OFFSET))(this, CGDPCDEBLDN);
	}

	::System::Void ECDGBAPFJMN(::UnityEngine::Vector2 BJCLOBAGEBH, ::System::Single GDIPJHMLFHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + IFKCAFGDEEN_ECDGBAPFJMN_OFFSET))(this, BJCLOBAGEBH, GDIPJHMLFHD);
	}
};
