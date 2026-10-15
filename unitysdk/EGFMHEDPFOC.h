#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/JDMNPLMAKGE.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ANJOILDLGOC;
class DamageTextStyle;
class PLJNLHLGILF;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGFMHEDPFOC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14514960)
#define EGFMHEDPFOC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14514A30)
#define EGFMHEDPFOC_CTOR_OFFSET UNITYSDK_OFFSET(0x14514AD0)
#define EGFMHEDPFOC_DMAFBAONBII_OFFSET UNITYSDK_OFFSET(0x145141F0)
#define EGFMHEDPFOC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x14513FF0)
#define EGFMHEDPFOC_HBKKEDNCBOE_OFFSET UNITYSDK_OFFSET(0x14514870)
#define EGFMHEDPFOC_HNDGOJLMBFA_OFFSET UNITYSDK_OFFSET(0x14514500)
#define EGFMHEDPFOC_IHLINKNMKMM_OFFSET UNITYSDK_OFFSET(0x14514470)
#define EGFMHEDPFOC_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x145137F0)
#define EGFMHEDPFOC_OBCBFAJALEG_OFFSET UNITYSDK_OFFSET(0x14514680)
#define EGFMHEDPFOC_OPPGCKPOFKJ_OFFSET UNITYSDK_OFFSET(0x14514070)
#define EGFMHEDPFOC_PBKHADFHMJK_OFFSET UNITYSDK_OFFSET(0x145142D0)
#define EGFMHEDPFOC_PGFLAMALOPG_OFFSET UNITYSDK_OFFSET(0x14514380)
#define EGFMHEDPFOC__ONBIND_OFFSET UNITYSDK_OFFSET(0x145137B0)
#define EGFMHEDPFOC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x14514030)

inline static constexpr unsigned int EGFMHEDPFOC_TypeDefinitionIndex = 71595;

	class EGFMHEDPFOC : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::DamageTextStyle*>* GNKGANNNMGI; // 0x60
		::DamageTextStyle* MEEBEGPKBBM; // 0x68
		::DamageTextStyle* LDCIMODGNCN; // 0x70
		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>*>* LADHCMMDAOA; // 0x78
		::DamageTextStyle* PCHICPLDDIB; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::DamageTextStyle*>* BHNHLHHOKLJ; // 0x88
		::RPG::Client::UIFloatingTextType OJPMJFFIGCP; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC__ONDISPOSE_OFFSET))(this);
		}

		::DamageTextStyle* OPPGCKPOFKJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::Client::UIFloatingTextType a3, ::JDMNPLMAKGE a4)
		{
			return ((::DamageTextStyle*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::JDMNPLMAKGE))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_OPPGCKPOFKJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::DamageTextStyle* DMAFBAONBII(::CHMCAGBDPJH a1)
		{
			return ((::DamageTextStyle*(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_DMAFBAONBII_OFFSET))(this, a1);
		}

		::DamageTextStyle* PBKHADFHMJK(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::DamageTextStyle*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_PBKHADFHMJK_OFFSET))(this, a1);
		}

		::DamageTextStyle* PGFLAMALOPG()
		{
			return ((::DamageTextStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_PGFLAMALOPG_OFFSET))(this);
		}

		::System::Void IHLINKNMKMM(::ANJOILDLGOC* a1, ::RPG::Client::UIFloatingTextType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_IHLINKNMKMM_OFFSET))(this, a1, a2, a3);
		}

		::System::String* HNDGOJLMBFA(::RPG::Client::UIFloatingTextType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_HNDGOJLMBFA_OFFSET))(this, a1);
		}

		::System::Void OBCBFAJALEG(::PLJNLHLGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLJNLHLGILF*))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_OBCBFAJALEG_OFFSET))(this, a1);
		}

		::System::Void HBKKEDNCBOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_HBKKEDNCBOE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFMHEDPFOC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
