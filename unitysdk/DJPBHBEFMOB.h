#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DJPBHBEFMOB;
class MarbleSubSealRotator;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DJPBHBEFMOB_AEMFOACPBJJ_OFFSET UNITYSDK_OFFSET(0xF24F410)
#define DJPBHBEFMOB_APGEIPBCJOK_OFFSET UNITYSDK_OFFSET(0xF24FC70)
#define DJPBHBEFMOB_BIECOAKLHOK_OFFSET UNITYSDK_OFFSET(0xF24F5C0)
#define DJPBHBEFMOB_BLACKFNDDAJ_OFFSET UNITYSDK_OFFSET(0xF24F8E0)
#define DJPBHBEFMOB_CCTOR_OFFSET UNITYSDK_OFFSET(0xF250300)
#define DJPBHBEFMOB_CTOR_OFFSET UNITYSDK_OFFSET(0xF24ED70)
#define DJPBHBEFMOB_DKJOECACIMN_OFFSET UNITYSDK_OFFSET(0xF24F7B0)
#define DJPBHBEFMOB_DNFGHPGAMPC_OFFSET UNITYSDK_OFFSET(0xF24F360)
#define DJPBHBEFMOB_ECCJCGOJDJB_OFFSET UNITYSDK_OFFSET(0xF24F530)
#define DJPBHBEFMOB_FDPMEAEDOGB_OFFSET UNITYSDK_OFFSET(0xF24F000)
#define DJPBHBEFMOB_GLNONEODKOL_OFFSET UNITYSDK_OFFSET(0xF24FDF0)
#define DJPBHBEFMOB_HLKFNCPHFLI_OFFSET UNITYSDK_OFFSET(0xF24F490)
#define DJPBHBEFMOB_JBBPGEJLGHC_OFFSET UNITYSDK_OFFSET(0xF24F670)
#define DJPBHBEFMOB_LGFJHKBMEDJ_OFFSET UNITYSDK_OFFSET(0xF24F290)
#define DJPBHBEFMOB_MPBMBAJAMHA_OFFSET UNITYSDK_OFFSET(0xF24FBC0)
#define DJPBHBEFMOB_NHNIBEPGNKD_OFFSET UNITYSDK_OFFSET(0xF24ED80)
#define DJPBHBEFMOB_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xF24F700)
#define DJPBHBEFMOB_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xF24FAC0)
#define DJPBHBEFMOB_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xF24F2D0)

inline static constexpr unsigned int DJPBHBEFMOB_TypeDefinitionIndex = 76549;

	class DJPBHBEFMOB : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* JFBGDKNCHAE; // 0x10
		::RPG::PoolList_1<::DJPBHBEFMOB*>* BGEDJGOLEHB; // 0x18
		::MarbleSubSealRotator* KBJNOKDNDDG; // 0x20
		::UnityEngine::GameObject* FAEGPGKBBLI; // 0x28
		::RPG::Client::RendererMaterialCache* LMFMHHJANIB; // 0x30
		::UnityEngine::Vector4 FHOLKDIAAMF; // 0x38
		static ::System::Int32* StaticGet_CHPKAAIKEED()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DJPBHBEFMOB")->GetStaticField(0x137C0);
		}

		static ::System::Int32* StaticGet_PPEEPMHDJPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DJPBHBEFMOB")->GetStaticField(0x137C4);
		}

		// static const ::System::String* FLOOLLHBPCE; // 0x0
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJPBHBEFMOB_CCTOR_OFFSET))();
		}

		::System::Void FDPMEAEDOGB(::DJPBHBEFMOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJPBHBEFMOB*))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_FDPMEAEDOGB_OFFSET))(this, a1);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DNFGHPGAMPC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_DNFGHPGAMPC_OFFSET))(this);
		}

		::System::Void AEMFOACPBJJ(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_AEMFOACPBJJ_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion HLKFNCPHFLI()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_HLKFNCPHFLI_OFFSET))(this);
		}

		::System::Void ECCJCGOJDJB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_ECCJCGOJDJB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BIECOAKLHOK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_BIECOAKLHOK_OFFSET))(this);
		}

		::System::Void JBBPGEJLGHC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_JBBPGEJLGHC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_NINDHOGICJD_OFFSET))(this);
		}

		::UnityEngine::Vector3 DKJOECACIMN(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_DKJOECACIMN_OFFSET))(this, a1);
		}

		::System::Void BLACKFNDDAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_BLACKFNDDAJ_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void MPBMBAJAMHA(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_MPBMBAJAMHA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* LGFJHKBMEDJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_LGFJHKBMEDJ_OFFSET))(this);
		}

		::System::Void APGEIPBCJOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_APGEIPBCJOK_OFFSET))(this, a1);
		}

		::System::Void NHNIBEPGNKD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_NHNIBEPGNKD_OFFSET))(this, a1);
		}

		::System::Void GLNONEODKOL(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + DJPBHBEFMOB_GLNONEODKOL_OFFSET))(this, a1, a2);
		}

	};
