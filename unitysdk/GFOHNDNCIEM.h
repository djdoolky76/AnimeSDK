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

#define GFOHNDNCIEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x159F3760)
#define GFOHNDNCIEM_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0x159F37F0)
#define GFOHNDNCIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x159F3B10)
#define GFOHNDNCIEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x159F39C0)

inline static constexpr unsigned int GFOHNDNCIEM_TypeDefinitionIndex = 68860;

	class GFOHNDNCIEM : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* NLIFDJHPHLP; // 0x10
		::UnityEngine::Transform* MCLLALGABAB; // 0x18
		::RPG::Client::FollowPointMapping* CFIOFNEOCMI; // 0x20
		::System::String* IPKCFNKIDMB; // 0x28
		::System::Single PMHMEGEJDGP; // 0x30
		::System::Single IEHPFADHJFD; // 0x34
		::UnityEngine::Quaternion FICPPFFOIFB; // 0x38
		::UnityEngine::Quaternion ANGPCKDKKIJ; // 0x48
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
