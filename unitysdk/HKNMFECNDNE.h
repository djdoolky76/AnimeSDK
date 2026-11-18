#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Material; }

#define HKNMFECNDNE_APPMJKMEJGI_OFFSET UNITYSDK_OFFSET(0x140BEB00)
#define HKNMFECNDNE_DOJMAGMDDJN_OFFSET UNITYSDK_OFFSET(0x140BEC60)
#define HKNMFECNDNE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x140BED10)
#define HKNMFECNDNE__CCTOR_OFFSET UNITYSDK_OFFSET(0x140BEAF0)
#define HKNMFECNDNE__CTOR_OFFSET UNITYSDK_OFFSET(0x140BEA70)

inline static constexpr unsigned int HKNMFECNDNE_TypeDefinitionIndex = 87384;

class HKNMFECNDNE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_DABJIHHDFNO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HKNMFECNDNE_TypeDefinitionIndex)->GetStaticField(0x137D0);
	}
	::UnityEngine::Material* EIIDOADGOIF; // 0x10
	::System::Collections::Generic::Stack_1<::UnityEngine::Material*>* EJDCHICFPPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNMFECNDNE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKNMFECNDNE__CCTOR_OFFSET))();
	}

	::System::Void APPMJKMEJGI(::UnityEngine::Material* KNNDDLMOKCG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HKNMFECNDNE_APPMJKMEJGI_OFFSET))(this, KNNDDLMOKCG);
	}

	::UnityEngine::Material* DOJMAGMDDJN()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNMFECNDNE_DOJMAGMDDJN_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNMFECNDNE_PHOADBJGFBE_OFFSET))(this);
	}
};
