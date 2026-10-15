#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;

#define KCBJMBAHPKB_BCIPEPCEHFH_OFFSET UNITYSDK_OFFSET(0xB328E20)
#define KCBJMBAHPKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB328760)
#define KCBJMBAHPKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB328770)
#define KCBJMBAHPKB_DMDJHAILPJB_OFFSET UNITYSDK_OFFSET(0xB328E70)
#define KCBJMBAHPKB_KJLIGMCBILA_OFFSET UNITYSDK_OFFSET(0xB3287C0)
#define KCBJMBAHPKB_LMFGGFFJCLO_OFFSET UNITYSDK_OFFSET(0xB3292C0)
#define KCBJMBAHPKB_NJIKIPKOIFD_OFFSET UNITYSDK_OFFSET(0xB328EC0)

inline static constexpr unsigned int KCBJMBAHPKB_TypeDefinitionIndex = 77759;

	class KCBJMBAHPKB : public ::System::Object
	{
	public:
		::OAIPJANPCEK* PDENFEFCAGN; // 0x10
		::NGFHCJIAOLH* PBEDAHDEDGH; // 0x18
		::System::Boolean BLHCHELDEHL; // 0x20
		// static const ::System::Object CICEFMOJOHF; // 0x0
		// static const ::System::String* BMAFGHBOBJA; // 0x0
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + KCBJMBAHPKB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBJMBAHPKB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean KJLIGMCBILA(::UnityEngine::Vector3 a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + KCBJMBAHPKB_KJLIGMCBILA_OFFSET))(this, a1, a2);
		}

		::System::Void BCIPEPCEHFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCBJMBAHPKB_BCIPEPCEHFH_OFFSET))(this, a1);
		}

		::System::Void DMDJHAILPJB(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + KCBJMBAHPKB_DMDJHAILPJB_OFFSET))(this, a1);
		}

		::System::Boolean NJIKIPKOIFD(::UnityEngine::Vector3 a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + KCBJMBAHPKB_NJIKIPKOIFD_OFFSET))(this, a1, a2);
		}

		::System::Boolean LMFGGFFJCLO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KCBJMBAHPKB_LMFGGFFJCLO_OFFSET))(this, a1, a2, a3);
		}

	};
