#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MLHDFJDIPEG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x174A6EE0)
#define MLHDFJDIPEG__CTOR_OFFSET UNITYSDK_OFFSET(0x174A6EA0)

inline static constexpr unsigned int MLHDFJDIPEG_TypeDefinitionIndex = 88662;

class MLHDFJDIPEG : public ::System::Object
{
public:
	::UnityEngine::Vector2 ELHPDKGENAC; // 0x10
	::UnityEngine::Vector2 FHCEPMACAPD; // 0x18
	::UnityEngine::Vector2 GLAJICKGDDJ; // 0x20
	::UnityEngine::Vector2 OODIMCBKGPN; // 0x28
	::System::Single FKCEINIDOKO; // 0x30

	::System::Void _ctor(::UnityEngine::Vector2 NFKGJKAOILA, ::UnityEngine::Vector2 CAAOGCMOAFA, ::System::Single KILPCOMOCMD, ::System::Single BBCODANAFGI, ::System::Single IMPIJIGBPKN, ::System::Single JNDLNIPNKJI, ::System::Single CEDGDDNECGN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MLHDFJDIPEG__CTOR_OFFSET))(this, NFKGJKAOILA, CAAOGCMOAFA, KILPCOMOCMD, BBCODANAFGI, IMPIJIGBPKN, JNDLNIPNKJI, CEDGDDNECGN);
	}

	::System::Void _ctor_1(::UnityEngine::Vector2 NFKGJKAOILA, ::UnityEngine::Vector2 CAAOGCMOAFA, ::UnityEngine::Vector2 DPLJJFIJIHD, ::UnityEngine::Vector2 OMCFJEFLGKN, ::System::Single CEDGDDNECGN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MLHDFJDIPEG__CTOR_1_OFFSET))(this, NFKGJKAOILA, CAAOGCMOAFA, DPLJJFIJIHD, OMCFJEFLGKN, CEDGDDNECGN);
	}
};
