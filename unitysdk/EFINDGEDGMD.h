#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class EFINDGEDGMD;
namespace UnityEngine { class RectTransform; }

#define EFINDGEDGMD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x13A4DD70)
#define EFINDGEDGMD_CFGFDKLMLIL_OFFSET UNITYSDK_OFFSET(0x13A4E190)
#define EFINDGEDGMD_CGFCOAGLIAC_OFFSET UNITYSDK_OFFSET(0x13A4DE60)
#define EFINDGEDGMD_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4DE50)
#define EFINDGEDGMD_HELMJANIFNN_OFFSET UNITYSDK_OFFSET(0x13A4DF20)
#define EFINDGEDGMD_OBIIJABDNPC_OFFSET UNITYSDK_OFFSET(0x13A4E210)

inline static constexpr unsigned int EFINDGEDGMD_TypeDefinitionIndex = 71892;

	class EFINDGEDGMD : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* CIJHJOEEHMI; // 0x10
		::UnityEngine::Vector2 JDGLOAPBEBK; // 0x18
		::UnityEngine::Vector2 AIGECPNJGNG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFINDGEDGMD_CTOR_OFFSET))(this);
		}

		static ::EFINDGEDGMD* BPLPBPMEODA(::UnityEngine::RectTransform* a1)
		{
			return ((::EFINDGEDGMD*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + EFINDGEDGMD_BPLPBPMEODA_OFFSET))(a1);
		}

		::UnityEngine::Vector2 CGFCOAGLIAC(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EFINDGEDGMD_CGFCOAGLIAC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 HELMJANIFNN(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EFINDGEDGMD_HELMJANIFNN_OFFSET))(this, a1, a2);
		}

		static ::System::Single CFGFDKLMLIL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EFINDGEDGMD_CFGFDKLMLIL_OFFSET))(a1, a2);
		}

		::System::Single OBIIJABDNPC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFINDGEDGMD_OBIIJABDNPC_OFFSET))(this);
		}

	};
