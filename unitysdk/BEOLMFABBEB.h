#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
class BEOLMFABBEB;
namespace UnityEngine { class Transform; }

#define BEOLMFABBEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB159B70)
#define BEOLMFABBEB_DJFIDOBFIGE_1_OFFSET UNITYSDK_OFFSET(0xB159B80)
#define BEOLMFABBEB_DJFIDOBFIGE_OFFSET UNITYSDK_OFFSET(0xB159940)
#define BEOLMFABBEB_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xB159D40)

inline static constexpr unsigned int BEOLMFABBEB_TypeDefinitionIndex = 68224;

	class BEOLMFABBEB : public ::System::Object
	{
	public:
		::System::Int32 FFNBLDFFMCN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOLMFABBEB_CTOR_OFFSET))(this);
		}

		static ::BEOLMFABBEB* DJFIDOBFIGE(::UnityEngine::Transform* a1)
		{
			return ((::BEOLMFABBEB*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BEOLMFABBEB_DJFIDOBFIGE_OFFSET))(a1);
		}

		static ::BEOLMFABBEB* DJFIDOBFIGE_1(::UnityEngine::Rect a1)
		{
			return ((::BEOLMFABBEB*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + BEOLMFABBEB_DJFIDOBFIGE_1_OFFSET))(a1);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOLMFABBEB_FFHNOMIDEDE_OFFSET))(this);
		}

	};
