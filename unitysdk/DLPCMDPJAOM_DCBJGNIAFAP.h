#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DLPCMDPJAOM_DCBJGNIAFAP_JHIJLNJECKO_OFFSET UNITYSDK_OFFSET(0x124214B0)
#define DLPCMDPJAOM_DCBJGNIAFAP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x12421510)
#define DLPCMDPJAOM_DCBJGNIAFAP_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x12421620)
#define DLPCMDPJAOM_DCBJGNIAFAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x12421850)
#define DLPCMDPJAOM_DCBJGNIAFAP__CTOR_OFFSET UNITYSDK_OFFSET(0x124211E0)

inline static constexpr unsigned int DLPCMDPJAOM_DCBJGNIAFAP_TypeDefinitionIndex = 89044;

class DLPCMDPJAOM_DCBJGNIAFAP : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NJADLICILJH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DLPCMDPJAOM_DCBJGNIAFAP_TypeDefinitionIndex)->GetStaticField(0x130E0);
	}
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x10
	::UnityEngine::Quaternion CJHGOOPHALO; // 0x18
	::UnityEngine::Vector3 JAHGKHFOFLF; // 0x28
	::UnityEngine::Quaternion COGLJJGDDGJ; // 0x34

	::System::Void _ctor(::UnityEngine::Vector3 FPNKBIPMBCA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP__CTOR_OFFSET))(this, FPNKBIPMBCA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 JHIJLNJECKO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP_JHIJLNJECKO_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single HFFCOJCKIBD, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP_OKJCHFGIKBH_OFFSET))(this, HFFCOJCKIBD, OHOGDOMNHNK);
	}

	::System::Void OKLLFEIJKHN(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_DCBJGNIAFAP_OKLLFEIJKHN_OFFSET))(this, OHOGDOMNHNK);
	}
};
