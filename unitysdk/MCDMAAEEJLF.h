#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define MCDMAAEEJLF_BICKNMHHGOC_OFFSET UNITYSDK_OFFSET(0x1B83C7C0)
#define MCDMAAEEJLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B83E4C0)
#define MCDMAAEEJLF_HAAEMDEDHNN_OFFSET UNITYSDK_OFFSET(0x1B83DA00)
#define MCDMAAEEJLF_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x1B83CA10)
#define MCDMAAEEJLF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1B83C260)
#define MCDMAAEEJLF_IJLHNGFJIHK_OFFSET UNITYSDK_OFFSET(0x1B83CEB0)
#define MCDMAAEEJLF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B83B2C0)
#define MCDMAAEEJLF_LDCBFOBEGOL_OFFSET UNITYSDK_OFFSET(0x1B83D840)
#define MCDMAAEEJLF_LJDAEBEEFOG_OFFSET UNITYSDK_OFFSET(0x1B83E140)
#define MCDMAAEEJLF_OBPMCIELGBH_OFFSET UNITYSDK_OFFSET(0x1B83C2D0)

inline static constexpr unsigned int MCDMAAEEJLF_TypeDefinitionIndex = 72333;

	class MCDMAAEEJLF : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Color PEDKKNCOHDE; // 0x18
		::System::Single AHIPPLMCPOE; // 0x28
		::UnityEngine::Vector3 IOBODKKALPM; // 0x2C
		::UnityEngine::Vector3 OBOJFILDNNK; // 0x38
		::System::Single OKDIMGDEHME; // 0x44
		::UnityEngine::Vector3Int BNAOJHPIJOE; // 0x48
		::UnityEngine::Vector3 EGLJEGLNHNC; // 0x54
		::System::Single PCCOABHBGDE; // 0x60
		::System::Single OLBDMLEMLOM; // 0x64
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
