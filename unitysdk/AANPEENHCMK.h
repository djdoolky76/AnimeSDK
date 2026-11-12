#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EJJAGEEGEKA;
class FMPCODLIOLG;
namespace RPG::Client { class LocalizedTextSDF; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define AANPEENHCMK_BNKOFGDFEPE_OFFSET UNITYSDK_OFFSET(0xB739350)
#define AANPEENHCMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7393C0)
#define AANPEENHCMK_DOGAJHCKDGN_OFFSET UNITYSDK_OFFSET(0xB738F50)
#define AANPEENHCMK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB7388C0)
#define AANPEENHCMK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB7387C0)
#define AANPEENHCMK_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB7387E0)
#define AANPEENHCMK_GGJPBDIKKDO_OFFSET UNITYSDK_OFFSET(0xB738BE0)
#define AANPEENHCMK_HEODKFHMMNK_OFFSET UNITYSDK_OFFSET(0xB738B50)
#define AANPEENHCMK_HKOOHLCHDHN_OFFSET UNITYSDK_OFFSET(0xB739200)
#define AANPEENHCMK_IIMPFKFGOIG_OFFSET UNITYSDK_OFFSET(0xB738A10)
#define AANPEENHCMK_JMCMOGBMMNH_OFFSET UNITYSDK_OFFSET(0xB738E40)
#define AANPEENHCMK_KFLPDLOEMBB_OFFSET UNITYSDK_OFFSET(0xB738BA0)
#define AANPEENHCMK_KLNOOGKLOIN_OFFSET UNITYSDK_OFFSET(0xB738AF0)
#define AANPEENHCMK_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB7387D0)
#define AANPEENHCMK__ONBIND_OFFSET UNITYSDK_OFFSET(0xB737FA0)
#define AANPEENHCMK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB738840)
#define AANPEENHCMK__ONTICK_OFFSET UNITYSDK_OFFSET(0xB738CC0)
#define AANPEENHCMK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7389C0)

inline static constexpr unsigned int AANPEENHCMK_TypeDefinitionIndex = 74157;

	class AANPEENHCMK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* BFLJCMLOINL; // 0x60
		::Il2CppArray<::RPG::Client::LocalizedTextSDF*>* PCIIKFOIAJA; // 0x68
		::UnityEngine::AnimationState* DFGNANDJMGI; // 0x70
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x78
		::EJJAGEEGEKA* GIEOINBJPBL; // 0x80
		::UnityEngine::Animation* GNCPKHINOJL; // 0x88
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x90
		::System::Action* PCFCFJLHLNF; // 0x98
		::System::Int32 _Index_k__BackingField; // 0xA0
		::System::Boolean MLEJJCMIOEC; // 0xA4
		::System::Boolean DMBFJAEAGPL; // 0xA5
		::System::Boolean BJPOBNAADML; // 0xA6
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object JJBKIKNKMFA; // 0x0
		// static const ::System::String* KLOHNJIJOAF; // 0x0
		// static const ::System::String* LJIKDLEPPKE; // 0x0
		// static const ::System::String* NGLELEEFOOI; // 0x0
		// static const ::System::String* LKFJNJJEBGF; // 0x0
		// static const ::System::String* EJLLLIKHKMI; // 0x0
		// static const ::System::String* JKBDJHCFKEP; // 0x0
		// static const ::System::String* KKHODKIKGED; // 0x0
		// static const ::System::String* GCJJPMICABD; // 0x0
		// static const ::System::String* GDFKDDLDACB; // 0x0
		// static const ::System::String* DJNCPMIDDJE; // 0x0
		// static const ::System::String* EFGHHFABHAJ; // 0x0
		// static const ::System::String* NEELGIMCPKF; // 0x0
		// static const ::System::String* OJHOJAAJLHN; // 0x0
		// static const ::System::String* EOIFNNGOPOL; // 0x0
		// static const ::System::String* CANLIEKIPJG; // 0x0
		// static const ::System::String* OAIMKFCDGDB; // 0x0
		// static const ::System::String* AALHGBPMDOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AANPEENHCMK_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_GET_TRANS_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AANPEENHCMK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void IIMPFKFGOIG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AANPEENHCMK_IIMPFKFGOIG_OFFSET))(this, a1);
		}

		::System::Void KLNOOGKLOIN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AANPEENHCMK_KLNOOGKLOIN_OFFSET))(this, a1);
		}

		::System::Boolean HEODKFHMMNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_HEODKFHMMNK_OFFSET))(this);
		}

		::FMPCODLIOLG* KFLPDLOEMBB()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_KFLPDLOEMBB_OFFSET))(this);
		}

		::System::Void GGJPBDIKKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_GGJPBDIKKDO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AANPEENHCMK__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JMCMOGBMMNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_JMCMOGBMMNH_OFFSET))(this);
		}

		::System::Void HKOOHLCHDHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_HKOOHLCHDHN_OFFSET))(this);
		}

		::System::Void DOGAJHCKDGN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AANPEENHCMK_DOGAJHCKDGN_OFFSET))(this, a1);
		}

		::System::Void BNKOFGDFEPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_BNKOFGDFEPE_OFFSET))(this);
		}

	};
