#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define LBILCOPLPPF_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5FBF10)
#define LBILCOPLPPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FC530)
#define LBILCOPLPPF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB5FC2A0)
#define LBILCOPLPPF_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0xB5FC470)
#define LBILCOPLPPF_JPBGKJHINBC_OFFSET UNITYSDK_OFFSET(0xB5FC360)
#define LBILCOPLPPF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5FBF60)
#define LBILCOPLPPF_MLHIIBGLONL_OFFSET UNITYSDK_OFFSET(0xB5FC4C0)
#define LBILCOPLPPF_NGLEEPLKMNP_OFFSET UNITYSDK_OFFSET(0xB5FC070)
#define LBILCOPLPPF_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xB5FBFE0)

	class LBILCOPLPPF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
		::RPG::Client::BaseShaderPropertyTransition* EMIGJFKIAEF; // 0x18
		::UnityEngine::Collider* CLFOJDPNEPD; // 0x20
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x28
		::System::Single COAELIHGAHH; // 0x30
		::UnityEngine::Vector3 KFJPKPKPEOJ; // 0x34
		::System::Boolean DMODDCDAFJJ; // 0x40
		::System::Boolean AKBPNMEFGAO; // 0x41
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 MEEAANFOAAM; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBILCOPLPPF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBILCOPLPPF_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LBILCOPLPPF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBILCOPLPPF_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LBILCOPLPPF_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Vector3 JPBGKJHINBC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LBILCOPLPPF_JPBGKJHINBC_OFFSET))(this);
		}

		::System::Single IHLCKDJPLCF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LBILCOPLPPF_IHLCKDJPLCF_OFFSET))(this);
		}

		::UnityEngine::Vector3 MLHIIBGLONL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LBILCOPLPPF_MLHIIBGLONL_OFFSET))(this);
		}

		::System::Void NGLEEPLKMNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBILCOPLPPF_NGLEEPLKMNP_OFFSET))(this);
		}

	};
