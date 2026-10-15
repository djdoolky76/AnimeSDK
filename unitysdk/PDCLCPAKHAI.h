#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CEFFHDKFCPN;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define PDCLCPAKHAI_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0xC005D00)
#define PDCLCPAKHAI_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xC005CA0)
#define PDCLCPAKHAI_CTOR_OFFSET UNITYSDK_OFFSET(0xC005EB0)
#define PDCLCPAKHAI_DBBINCLKEBL_OFFSET UNITYSDK_OFFSET(0xC0057C0)
#define PDCLCPAKHAI_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xC005760)
#define PDCLCPAKHAI_DPGGDECJENG_OFFSET UNITYSDK_OFFSET(0xC005B30)
#define PDCLCPAKHAI_ELGFFIJPJGO_OFFSET UNITYSDK_OFFSET(0xC005510)
#define PDCLCPAKHAI_EMCBHIAHJOH_OFFSET UNITYSDK_OFFSET(0xC005C30)
#define PDCLCPAKHAI_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xC005E90)
#define PDCLCPAKHAI_HBCFGBLMOAI_OFFSET UNITYSDK_OFFSET(0xC005AB0)
#define PDCLCPAKHAI_IDNNMILIDLN_OFFSET UNITYSDK_OFFSET(0xC0055C0)
#define PDCLCPAKHAI_IFKEMPGEMAC_OFFSET UNITYSDK_OFFSET(0xC005A40)
#define PDCLCPAKHAI_IJFBDGDOKFN_OFFSET UNITYSDK_OFFSET(0xC005D60)
#define PDCLCPAKHAI_JCPEFMJABKD_OFFSET UNITYSDK_OFFSET(0xC005560)
#define PDCLCPAKHAI_OGMJAGMJOPN_OFFSET UNITYSDK_OFFSET(0xC005DD0)
#define PDCLCPAKHAI_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xC005EA0)
#define PDCLCPAKHAI__ONBIND_OFFSET UNITYSDK_OFFSET(0xC005390)
#define PDCLCPAKHAI__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC005720)
#define PDCLCPAKHAI__ONTICK_OFFSET UNITYSDK_OFFSET(0xC005420)

inline static constexpr unsigned int PDCLCPAKHAI_TypeDefinitionIndex = 65843;

	class PDCLCPAKHAI : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x60
		::System::String* AMMFAOBBPCN; // 0x68
		::RPG::Client::UIFollow3DTarget* MCMALLKMDNC; // 0x70
		::UnityEngine::Animation* KCOAILOHDND; // 0x78
		::System::Single NGMPALMFOKL; // 0x80
		::UnityEngine::Vector2 IDGKNMLPGDL; // 0x84
		::System::Single _Duration_k__BackingField; // 0x8C
		::System::Boolean FMNEEONAMNO; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI__ONBIND_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDCLCPAKHAI__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI__ONDISPOSE_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void DBBINCLKEBL(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_DBBINCLKEBL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IFKEMPGEMAC(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_IFKEMPGEMAC_OFFSET))(this, a1);
		}

		::System::Void HBCFGBLMOAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_HBCFGBLMOAI_OFFSET))(this, a1);
		}

		::System::Void DPGGDECJENG(::CEFFHDKFCPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFFHDKFCPN*))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_DPGGDECJENG_OFFSET))(this, a1);
		}

		::System::Void BCAMNAGBDDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_BCAMNAGBDDC_OFFSET))(this, a1);
		}

		::System::Boolean ELGFFIJPJGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_ELGFFIJPJGO_OFFSET))(this);
		}

		::System::String* EMCBHIAHJOH(::CEFFHDKFCPN* a1)
		{
			return ((::System::String*(*)(::PVOID, ::CEFFHDKFCPN*))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_EMCBHIAHJOH_OFFSET))(this, a1);
		}

		::System::Void IJFBDGDOKFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_IJFBDGDOKFN_OFFSET))(this);
		}

		::System::Boolean JCPEFMJABKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_JCPEFMJABKD_OFFSET))(this);
		}

		::System::Void IDNNMILIDLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_IDNNMILIDLN_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void OGMJAGMJOPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_OGMJAGMJOPN_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDCLCPAKHAI_SET_DURATION_OFFSET))(this, a1);
		}

	};
