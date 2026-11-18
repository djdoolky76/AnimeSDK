#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define GEGDLJDFNMN_IFCOGBODCBI_GIDMKPICIPH_OFFSET UNITYSDK_OFFSET(0x116E64E0)
#define GEGDLJDFNMN_IFCOGBODCBI_GOFGLAJHNDM_OFFSET UNITYSDK_OFFSET(0x116E6870)
#define GEGDLJDFNMN_IFCOGBODCBI__CTOR_OFFSET UNITYSDK_OFFSET(0x116E64D0)

inline static constexpr unsigned int GEGDLJDFNMN_IFCOGBODCBI_TypeDefinitionIndex = 81657;

class GEGDLJDFNMN_IFCOGBODCBI : public ::System::Object
{
public:
	::UnityEngine::GameObject* FNCNAPAJKBE; // 0x10
	::System::Int32 OEHOCLMCKMF; // 0x18
	::System::Single AJDLAOGGKIF; // 0x1C
	::System::Int32 NPKJNEEPKAC; // 0x20
	::System::Boolean DLBGGDIPPCC; // 0x24
	::System::Boolean LOLJANBEKCJ; // 0x25
	::System::Boolean AKJGMDLKMNB; // 0x26
	::System::Boolean IEALLHNKEFE; // 0x27
	::UnityEngine::Vector3 JOILPOPCHPB; // 0x28
	::System::Int32 GIEIBEMEPMH; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_IFCOGBODCBI__CTOR_OFFSET))(this);
	}

	::System::Void GIDMKPICIPH(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_IFCOGBODCBI_GIDMKPICIPH_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}

	::System::Void GOFGLAJHNDM(::UnityEngine::GameObject* PAAOJEMGCFJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_IFCOGBODCBI_GOFGLAJHNDM_OFFSET))(this, PAAOJEMGCFJ);
	}
};
