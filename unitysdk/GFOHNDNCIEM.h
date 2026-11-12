#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GFOHNDNCIEM;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class FollowPointMapping; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define GFOHNDNCIEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x169395E0)
#define GFOHNDNCIEM_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0x16939680)
#define GFOHNDNCIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x169399A0)
#define GFOHNDNCIEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16939850)

inline static constexpr unsigned int GFOHNDNCIEM_TypeDefinitionIndex = 70813;

	class GFOHNDNCIEM : public ::System::Object
	{
	public:
		::RPG::Client::FollowPointMapping* CFIOFNEOCMI; // 0x10
		::System::String* IPKCFNKIDMB; // 0x18
		::RPG::Client::CameraBlendCurve* NLIFDJHPHLP; // 0x20
		::UnityEngine::Transform* MCLLALGABAB; // 0x28
		::UnityEngine::Quaternion ANGPCKDKKIJ; // 0x30
		::System::Single IEHPFADHJFD; // 0x40
		::UnityEngine::Quaternion FICPPFFOIFB; // 0x44
		::System::Single PMHMEGEJDGP; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOHNDNCIEM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOHNDNCIEM_CLEAR_OFFSET))(this);
		}

		static ::GFOHNDNCIEM* COKMDIMBLHN(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::String* a5)
		{
			return ((::GFOHNDNCIEM*(*)(::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + GFOHNDNCIEM_COKMDIMBLHN_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFOHNDNCIEM_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
