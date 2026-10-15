#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HLIKFKIBEBA;
class IDDFICCDOMI;
class IKKHGBKGPAO;
class OCKEFINEJCD;
class PJPMNIFCFGH;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define KMMMMKICJIE_ANFHFABGJJO_OFFSET UNITYSDK_OFFSET(0xB566F80)
#define KMMMMKICJIE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB568150)
#define KMMMMKICJIE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB568240)
#define KMMMMKICJIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB568310)
#define KMMMMKICJIE_DFFJENECLLP_OFFSET UNITYSDK_OFFSET(0xB567010)
#define KMMMMKICJIE_DMNNDMDMNMJ_OFFSET UNITYSDK_OFFSET(0xB568090)
#define KMMMMKICJIE_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB566D30)
#define KMMMMKICJIE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB566E40)
#define KMMMMKICJIE_GCLFLAILMOJ_OFFSET UNITYSDK_OFFSET(0xB568020)
#define KMMMMKICJIE_GDLNHEJDLCJ_OFFSET UNITYSDK_OFFSET(0xB567EB0)
#define KMMMMKICJIE_GECIPKKOPJM_OFFSET UNITYSDK_OFFSET(0xB567300)
#define KMMMMKICJIE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB566B60)
#define KMMMMKICJIE_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB566B80)
#define KMMMMKICJIE_JHCKBFBFEJP_OFFSET UNITYSDK_OFFSET(0xB567E60)
#define KMMMMKICJIE_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB566BC0)
#define KMMMMKICJIE_OCMEKEBCDBE_OFFSET UNITYSDK_OFFSET(0xB566E90)
#define KMMMMKICJIE_OGHAJNBFOAF_OFFSET UNITYSDK_OFFSET(0xB567070)
#define KMMMMKICJIE_PKIBIAJFPPD_OFFSET UNITYSDK_OFFSET(0xB567BC0)
#define KMMMMKICJIE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB566B70)
#define KMMMMKICJIE__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5669C0)

inline static constexpr unsigned int KMMMMKICJIE_TypeDefinitionIndex = 71603;

	class KMMMMKICJIE : public ::FMPCODLIOLG
	{
	public:
		::OCKEFINEJCD* GCCECHLEDJG; // 0x60
		::IDDFICCDOMI* MJCFDFGLFFG; // 0x68
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x70
		::System::String* NCAJAIMOMHC; // 0x78
		::RPG::Client::MonoInControlTip* HBHIMMJCGAA; // 0x80
		::UnityEngine::Transform* AGOPIPEPHPC; // 0x88
		::IKKHGBKGPAO* CEKBNBIPJCB; // 0x90
		::UnityEngine::Animator* APPGGMLEPLN; // 0x98
		::PJPMNIFCFGH* CEFDOFPIHCF; // 0xA0
		::RPG::Client::AnimatorButton* JOODINOFCLL; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xB0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* BLNNHHBOPOE; // 0x0
		// static const ::System::String* NMPJHEJLNCA; // 0x0
		// static const ::System::String* IEBDFPGBKED; // 0x0
		// static const ::System::String* HEOOLPIHAGC; // 0x0
		// static const ::System::String* BBPFHBGNEEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMMMMKICJIE_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_GET_TRANS_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void OCMEKEBCDBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_OCMEKEBCDBE_OFFSET))(this);
		}

		::System::Void ANFHFABGJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_ANFHFABGJJO_OFFSET))(this);
		}

		::System::Void JHCKBFBFEJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_JHCKBFBFEJP_OFFSET))(this);
		}

		::System::Void OGHAJNBFOAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_OGHAJNBFOAF_OFFSET))(this);
		}

		::System::Void GECIPKKOPJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_GECIPKKOPJM_OFFSET))(this);
		}

		::System::Void PKIBIAJFPPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_PKIBIAJFPPD_OFFSET))(this);
		}

		::System::Void GCLFLAILMOJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMMMMKICJIE_GCLFLAILMOJ_OFFSET))(this, a1);
		}

		::System::Void GDLNHEJDLCJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMMMMKICJIE_GDLNHEJDLCJ_OFFSET))(this, a1);
		}

		::HLIKFKIBEBA* DFFJENECLLP()
		{
			return ((::HLIKFKIBEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_DFFJENECLLP_OFFSET))(this);
		}

		::System::Void DMNNDMDMNMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMMMMKICJIE_DMNNDMDMNMJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMMMKICJIE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
