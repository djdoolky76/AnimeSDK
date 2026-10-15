#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MarbleDamageTextInfo; }
namespace RPG::Client { class TextOutline; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define NNKPAIAPPHP_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0xBCC8E00)
#define NNKPAIAPPHP_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xBCC8D90)
#define NNKPAIAPPHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCC8F90)
#define NNKPAIAPPHP_DBBINCLKEBL_OFFSET UNITYSDK_OFFSET(0xBCC8660)
#define NNKPAIAPPHP_DLFMGCJEHBA_OFFSET UNITYSDK_OFFSET(0xBCC88E0)
#define NNKPAIAPPHP_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xBCC8600)
#define NNKPAIAPPHP_DPGGDECJENG_OFFSET UNITYSDK_OFFSET(0xBCC8A90)
#define NNKPAIAPPHP_ELGFFIJPJGO_OFFSET UNITYSDK_OFFSET(0xBCC83B0)
#define NNKPAIAPPHP_EMCBHIAHJOH_OFFSET UNITYSDK_OFFSET(0xBCC8CE0)
#define NNKPAIAPPHP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xBCC8F70)
#define NNKPAIAPPHP_HBCFGBLMOAI_OFFSET UNITYSDK_OFFSET(0xBCC8A10)
#define NNKPAIAPPHP_IDNNMILIDLN_OFFSET UNITYSDK_OFFSET(0xBCC8460)
#define NNKPAIAPPHP_IJFBDGDOKFN_OFFSET UNITYSDK_OFFSET(0xBCC8E60)
#define NNKPAIAPPHP_JCENJGBAFCP_OFFSET UNITYSDK_OFFSET(0xBCC8940)
#define NNKPAIAPPHP_JCPEFMJABKD_OFFSET UNITYSDK_OFFSET(0xBCC8400)
#define NNKPAIAPPHP_OGMJAGMJOPN_OFFSET UNITYSDK_OFFSET(0xBCC8EB0)
#define NNKPAIAPPHP_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xBCC8F80)
#define NNKPAIAPPHP__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCC81F0)
#define NNKPAIAPPHP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBCC85C0)
#define NNKPAIAPPHP__ONTICK_OFFSET UNITYSDK_OFFSET(0xBCC82C0)

inline static constexpr unsigned int NNKPAIAPPHP_TypeDefinitionIndex = 65844;

	class NNKPAIAPPHP : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::TextOutline* JNOIOMJGDFD; // 0x60
		::System::String* AMMFAOBBPCN; // 0x68
		::RPG::Client::UIFollow3DTarget* MCMALLKMDNC; // 0x70
		::RPG::Client::LocalizedText* CALNLFBNMPM; // 0x78
		::UnityEngine::Animation* KCOAILOHDND; // 0x80
		::System::Single _Duration_k__BackingField; // 0x88
		::UnityEngine::Vector2 IDGKNMLPGDL; // 0x8C
		::System::Boolean FMNEEONAMNO; // 0x94
		::System::Byte _padding0[0x3];
		::System::Single NGMPALMFOKL; // 0x98
		// static const ::System::Object DODNAJDHOLB; // 0x0
		// static const ::System::Object PNJIDOOHEEA; // 0x0
		// static const ::System::String* EFCNKKHAFDL; // 0x0
		// static const ::System::String* HHHKNIDDFDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP__ONBIND_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNKPAIAPPHP__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void DBBINCLKEBL(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_DBBINCLKEBL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DLFMGCJEHBA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_DLFMGCJEHBA_OFFSET))(this, a1);
		}

		::System::Void JCENJGBAFCP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_JCENJGBAFCP_OFFSET))(this, a1);
		}

		::System::Void HBCFGBLMOAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_HBCFGBLMOAI_OFFSET))(this, a1);
		}

		::System::Void DPGGDECJENG(::RPG::Client::MarbleDamageTextInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleDamageTextInfo*))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_DPGGDECJENG_OFFSET))(this, a1);
		}

		::System::Void BCAMNAGBDDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_BCAMNAGBDDC_OFFSET))(this, a1);
		}

		::System::Boolean ELGFFIJPJGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_ELGFFIJPJGO_OFFSET))(this);
		}

		::System::String* EMCBHIAHJOH(::RPG::Client::MarbleDamageTextInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MarbleDamageTextInfo*))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_EMCBHIAHJOH_OFFSET))(this, a1);
		}

		::System::Void IJFBDGDOKFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_IJFBDGDOKFN_OFFSET))(this);
		}

		::System::Boolean JCPEFMJABKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_JCPEFMJABKD_OFFSET))(this);
		}

		::System::Void IDNNMILIDLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_IDNNMILIDLN_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void OGMJAGMJOPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_OGMJAGMJOPN_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNKPAIAPPHP_SET_DURATION_OFFSET))(this, a1);
		}

	};
