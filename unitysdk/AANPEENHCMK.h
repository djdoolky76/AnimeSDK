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

#define AANPEENHCMK_BNKOFGDFEPE_OFFSET UNITYSDK_OFFSET(0xB0D77D0)
#define AANPEENHCMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D7840)
#define AANPEENHCMK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB0D6CD0)
#define AANPEENHCMK_DOGAJHCKDGN_OFFSET UNITYSDK_OFFSET(0xB0D73C0)
#define AANPEENHCMK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB0D6D50)
#define AANPEENHCMK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB0D6E50)
#define AANPEENHCMK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB0D6C50)
#define AANPEENHCMK_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB0D6C70)
#define AANPEENHCMK_GGJPBDIKKDO_OFFSET UNITYSDK_OFFSET(0xB0D7070)
#define AANPEENHCMK_HEODKFHMMNK_OFFSET UNITYSDK_OFFSET(0xB0D6FE0)
#define AANPEENHCMK_HKOOHLCHDHN_OFFSET UNITYSDK_OFFSET(0xB0D7680)
#define AANPEENHCMK_IIMPFKFGOIG_OFFSET UNITYSDK_OFFSET(0xB0D6EA0)
#define AANPEENHCMK_JMCMOGBMMNH_OFFSET UNITYSDK_OFFSET(0xB0D72C0)
#define AANPEENHCMK_KFLPDLOEMBB_OFFSET UNITYSDK_OFFSET(0xB0D7030)
#define AANPEENHCMK_KLNOOGKLOIN_OFFSET UNITYSDK_OFFSET(0xB0D6F80)
#define AANPEENHCMK_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB0D6C60)
#define AANPEENHCMK__ONBIND_OFFSET UNITYSDK_OFFSET(0xB0D6540)
#define AANPEENHCMK__ONTICK_OFFSET UNITYSDK_OFFSET(0xB0D7150)

	class AANPEENHCMK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::AnimationState* DFGNANDJMGI; // 0x60
		::EJJAGEEGEKA* GIEOINBJPBL; // 0x68
		::UnityEngine::Animation* GNCPKHINOJL; // 0x70
		::UnityEngine::Transform* BFLJCMLOINL; // 0x78
		::Il2CppArray<::RPG::Client::LocalizedTextSDF*>* PCIIKFOIAJA; // 0x80
		::System::Action* PCFCFJLHLNF; // 0x88
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x90
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x98
		::System::Boolean BJPOBNAADML; // 0xA0
		::System::Boolean MLEJJCMIOEC; // 0xA1
		::System::Boolean DMBFJAEAGPL; // 0xA2
		::System::Byte _padding0[0x1];
		::System::Int32 _Index_k__BackingField; // 0xA4
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AANPEENHCMK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANPEENHCMK_EKGCGIDIFJJ_OFFSET))(this);
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
