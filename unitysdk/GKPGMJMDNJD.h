#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CPCJOHMDDFA;
class ECDNGOHAPMA;
class EGOIABMAGME;
class HBIPKAEAEJE;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKPGMJMDNJD_CNAAAIMPDIM_OFFSET UNITYSDK_OFFSET(0x15AA9510)
#define GKPGMJMDNJD_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA9610)
#define GKPGMJMDNJD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15AA91A0)
#define GKPGMJMDNJD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15AA93B0)
#define GKPGMJMDNJD_JKBLIJJDFKP_OFFSET UNITYSDK_OFFSET(0x15AA9580)
#define GKPGMJMDNJD_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x15AA9270)
#define GKPGMJMDNJD_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15AA9470)
#define GKPGMJMDNJD_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15AA92C0)
#define GKPGMJMDNJD_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15AA93F0)
#define GKPGMJMDNJD__ONBIND_OFFSET UNITYSDK_OFFSET(0x15AA8D20)
#define GKPGMJMDNJD__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15AA94B0)

inline static constexpr unsigned int GKPGMJMDNJD_TypeDefinitionIndex = 71761;

	class GKPGMJMDNJD : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::EGOIABMAGME* PJEBEIBGIBG; // 0x68
		::HBIPKAEAEJE* EIPPIIAKNJO; // 0x70
		::CPCJOHMDDFA* HPBPBEEKHKN; // 0x78
		::System::Collections::Generic::List_1<::ECDNGOHAPMA*>* FOFHDIOPKED; // 0x80
		// static const ::System::Object HIABDJIMFLO; // 0x0
		// static const ::System::Object FDBMFLDGEAL; // 0x0
		// static const ::System::Object FIEOAECBMLH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPGMJMDNJD__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_ONRETURN_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPGMJMDNJD__ONDISPOSE_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void CNAAAIMPDIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_CNAAAIMPDIM_OFFSET))(this);
		}

		::System::Void JKBLIJJDFKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_JKBLIJJDFKP_OFFSET))(this, a1);
		}

	};
