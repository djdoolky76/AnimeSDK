#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define MCDMAAEEJLF_BICKNMHHGOC_OFFSET UNITYSDK_OFFSET(0xB86F6E0)
#define MCDMAAEEJLF_CTOR_OFFSET UNITYSDK_OFFSET(0xB871570)
#define MCDMAAEEJLF_HAAEMDEDHNN_OFFSET UNITYSDK_OFFSET(0xB870AB0)
#define MCDMAAEEJLF_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xB86F930)
#define MCDMAAEEJLF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB86F180)
#define MCDMAAEEJLF_IJLHNGFJIHK_OFFSET UNITYSDK_OFFSET(0xB86FDD0)
#define MCDMAAEEJLF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB86E070)
#define MCDMAAEEJLF_LDCBFOBEGOL_OFFSET UNITYSDK_OFFSET(0xB8708F0)
#define MCDMAAEEJLF_LJDAEBEEFOG_OFFSET UNITYSDK_OFFSET(0xB8711F0)
#define MCDMAAEEJLF_OBPMCIELGBH_OFFSET UNITYSDK_OFFSET(0xB86F1F0)

inline static constexpr unsigned int MCDMAAEEJLF_TypeDefinitionIndex = 70366;

	class MCDMAAEEJLF : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Vector3Int BNAOJHPIJOE; // 0x18
		::UnityEngine::Vector3 EGLJEGLNHNC; // 0x24
		::System::Single OLBDMLEMLOM; // 0x30
		::UnityEngine::Vector3 IOBODKKALPM; // 0x34
		::System::Single PCCOABHBGDE; // 0x40
		::UnityEngine::Color PEDKKNCOHDE; // 0x44
		::System::Single OKDIMGDEHME; // 0x54
		::System::Single AHIPPLMCPOE; // 0x58
		::UnityEngine::Vector3 OBOJFILDNNK; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void IJLHNGFJIHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_IJLHNGFJIHK_OFFSET))(this);
		}

		::System::Void OBPMCIELGBH(::UnityEngine::LineRenderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_OBPMCIELGBH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void BICKNMHHGOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_BICKNMHHGOC_OFFSET))(this);
		}

		::System::Void LJDAEBEEFOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_LJDAEBEEFOG_OFFSET))(this);
		}

		::System::Void LDCBFOBEGOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_LDCBFOBEGOL_OFFSET))(this);
		}

		::System::Void HAAEMDEDHNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_HAAEMDEDHNN_OFFSET))(this);
		}

		::RPG::Client::Effect_WorldWireFrame* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::Effect_WorldWireFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDMAAEEJLF_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
