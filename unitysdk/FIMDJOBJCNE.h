#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CCJJEJFDBIF;
class JCBMNCANHAP;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::GameCore { class AdventureCharacterController; }

#define FIMDJOBJCNE_CTOR_OFFSET UNITYSDK_OFFSET(0x157A21F0)
#define FIMDJOBJCNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157A1FE0)
#define FIMDJOBJCNE_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x157A1F70)
#define FIMDJOBJCNE_LJBBOGFFKNG_OFFSET UNITYSDK_OFFSET(0x157A20B0)
#define FIMDJOBJCNE_MILDAIHIGAI_OFFSET UNITYSDK_OFFSET(0x157A20A0)
#define FIMDJOBJCNE_NGIDAKDKANM_OFFSET UNITYSDK_OFFSET(0x157A2090)
#define FIMDJOBJCNE_OBOCFAJELAI_OFFSET UNITYSDK_OFFSET(0x157A2160)
#define FIMDJOBJCNE_OPPKPPIPFFO_OFFSET UNITYSDK_OFFSET(0x157A2080)
#define FIMDJOBJCNE_PPJPCGIMICH_OFFSET UNITYSDK_OFFSET(0x157A2030)

inline static constexpr unsigned int FIMDJOBJCNE_TypeDefinitionIndex = 60298;

	class FIMDJOBJCNE : public ::System::Object
	{
	public:
		::RPG::Client::MonoControllableHand* KNBJLAPEIFJ; // 0x10
		::CCJJEJFDBIF* OJMMJIALPON; // 0x18
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::CCJJEJFDBIF* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::RPG::Client::MonoControllableHand* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCJJEJFDBIF*, ::RPG::GameCore::AdventureCharacterController*, ::RPG::Client::MonoControllableHand*))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_DLAILGNMFGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_DISPOSE_OFFSET))(this);
		}

		::System::Void PPJPCGIMICH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_PPJPCGIMICH_OFFSET))(this, a1);
		}

		::System::Boolean OPPKPPIPFFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_OPPKPPIPFFO_OFFSET))(this);
		}

		::System::Boolean NGIDAKDKANM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_NGIDAKDKANM_OFFSET))(this);
		}

		::JCBMNCANHAP* MILDAIHIGAI()
		{
			return ((::JCBMNCANHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_MILDAIHIGAI_OFFSET))(this);
		}

		::UnityEngine::Vector3 LJBBOGFFKNG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_LJBBOGFFKNG_OFFSET))(this);
		}

		::UnityEngine::Quaternion OBOCFAJELAI()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDJOBJCNE_OBOCFAJELAI_OFFSET))(this);
		}

	};
