#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCMOIFIMAIL_OverrideAspect.h"
#include "unitysdk/PAOIIOIGCOJ.h"
#include "unitysdk/RPG/Client/OpenWorld/ItemOverrideReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceNotifyType.h"
#include "unitysdk/CCMOIFIMAIL_BNEKPBGLAOJ.h"
#include "unitysdk/CCMOIFIMAIL_HFBJKMABOCK.h"
#include "unitysdk/NKKMILCOAJF.h"
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CCMOIFIMAIL_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC74D6B0)
#define CCMOIFIMAIL_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xC74C9E0)
#define CCMOIFIMAIL_CGDKJPOCOID_OFFSET UNITYSDK_OFFSET(0xC74DF90)
#define CCMOIFIMAIL_CJLPNEEMPHG_OFFSET UNITYSDK_OFFSET(0xC74CFD0)
#define CCMOIFIMAIL_COAEOIPBNAJ_OFFSET UNITYSDK_OFFSET(0xC74DEE0)
#define CCMOIFIMAIL_CTOR_OFFSET UNITYSDK_OFFSET(0xC74C6B0)
#define CCMOIFIMAIL_DIDMEDIFEHO_OFFSET UNITYSDK_OFFSET(0xC74DC30)
#define CCMOIFIMAIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC74D870)
#define CCMOIFIMAIL_DLJIDBOHMFH_OFFSET UNITYSDK_OFFSET(0xC74D410)
#define CCMOIFIMAIL_EBOCIPHDKGC_OFFSET UNITYSDK_OFFSET(0xC74E990)
#define CCMOIFIMAIL_FFINNGLBBKK_OFFSET UNITYSDK_OFFSET(0xC74DD50)
#define CCMOIFIMAIL_FOEPDAJIELD_OFFSET UNITYSDK_OFFSET(0xC74D820)
#define CCMOIFIMAIL_GCCENAPJBEH_OFFSET UNITYSDK_OFFSET(0xC74ECF0)
#define CCMOIFIMAIL_GMFCFODMIFD_OFFSET UNITYSDK_OFFSET(0xC74D5A0)
#define CCMOIFIMAIL_HDILKFNHEFI_OFFSET UNITYSDK_OFFSET(0xC74E790)
#define CCMOIFIMAIL_IGPPCCNMPKN_OFFSET UNITYSDK_OFFSET(0xC74D2D0)
#define CCMOIFIMAIL_IMEGLOPKCJO_OFFSET UNITYSDK_OFFSET(0xC74E170)
#define CCMOIFIMAIL_JCOEKCHBJEO_OFFSET UNITYSDK_OFFSET(0xC74CC50)
#define CCMOIFIMAIL_KDACDDMALPE_OFFSET UNITYSDK_OFFSET(0xC74D260)
#define CCMOIFIMAIL_KDDKKCFFILK_OFFSET UNITYSDK_OFFSET(0xC74EA60)
#define CCMOIFIMAIL_LMJHLIOFCBL_OFFSET UNITYSDK_OFFSET(0xC74EDB0)
#define CCMOIFIMAIL_MJOGADKPOBK_OFFSET UNITYSDK_OFFSET(0xC74E610)
#define CCMOIFIMAIL_MNMGPGGAMCP_OFFSET UNITYSDK_OFFSET(0xC74CE10)
#define CCMOIFIMAIL_NBAEIBPLACF_OFFSET UNITYSDK_OFFSET(0xC74D040)
#define CCMOIFIMAIL_NGCDIELMKPI_OFFSET UNITYSDK_OFFSET(0xC74E510)
#define CCMOIFIMAIL_PCHMLPGEPEK_OFFSET UNITYSDK_OFFSET(0xC74DA20)

inline static constexpr unsigned int CCMOIFIMAIL_TypeDefinitionIndex = 73810;

	class CCMOIFIMAIL : public ::PAOIIOIGCOJ
	{
	public:
		::System::Action_4<::HPKACEPPPCA*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType>* EDOOHBDJLEO; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Object*>* BACMAOIGABB; // 0x20
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* DECLBABJGKI; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* DIENBAMFJEJ; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* KOEGPNNJCIG; // 0x38
		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* PNCIEMMMPEN; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* KKJNFBBCEFD; // 0x48
		::System::Int32 MCDLKALJOKP; // 0x50
		// static const ::System::Object KDJKHOCKHPB; // 0x0
		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_CTOR_OFFSET))(this, a1);
		}

		::NKKMILCOAJF BGOMKDMBLKK(::UnityEngine::GameObject* a1)
		{
			return ((::NKKMILCOAJF(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_BGOMKDMBLKK_OFFSET))(this, a1);
		}

		::System::Boolean CJLPNEEMPHG(::NKKMILCOAJF a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKKMILCOAJF, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_CJLPNEEMPHG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KDACDDMALPE(::NKKMILCOAJF a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKKMILCOAJF, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_KDACDDMALPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NBAEIBPLACF(::NKKMILCOAJF a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3, ::CCMOIFIMAIL_OverrideAspect a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKKMILCOAJF, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean, ::CCMOIFIMAIL_OverrideAspect))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_NBAEIBPLACF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ABKBOGIGAEH(::NKKMILCOAJF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKKMILCOAJF))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IGPPCCNMPKN(::NKKMILCOAJF a1, ::CCMOIFIMAIL_HFBJKMABOCK a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKKMILCOAJF, ::CCMOIFIMAIL_HFBJKMABOCK))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_IGPPCCNMPKN_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 FOEPDAJIELD(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_FOEPDAJIELD_OFFSET))(a1);
		}

		::System::Void JCOEKCHBJEO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_JCOEKCHBJEO_OFFSET))(this, a1);
		}

		::System::Void DIDMEDIFEHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_DIDMEDIFEHO_OFFSET))(this);
		}

		::System::Void FFINNGLBBKK(::HPKACEPPPCA* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::System::Object*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_FFINNGLBBKK_OFFSET))(this, a1, a2);
		}

		::System::Void IMEGLOPKCJO(::HPKACEPPPCA* a1, ::KLEFGGIHGMI* a2, ::UnityEngine::GameObject* a3, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType a4)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_IMEGLOPKCJO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void COAEOIPBNAJ(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_COAEOIPBNAJ_OFFSET))(this, a1, a2);
		}

		::System::Void NGCDIELMKPI(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_NGCDIELMKPI_OFFSET))(this, a1, a2);
		}

		::System::Boolean MNMGPGGAMCP(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_MNMGPGGAMCP_OFFSET))(this, a1, a2);
		}

		::System::Void MJOGADKPOBK(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_MJOGADKPOBK_OFFSET))(this, a1, a2);
		}

		::System::Void DLJIDBOHMFH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::CCMOIFIMAIL_BNEKPBGLAOJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::CCMOIFIMAIL_BNEKPBGLAOJ))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_DLJIDBOHMFH_OFFSET))(this, a1, a2);
		}

		::System::Void CGDKJPOCOID(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_CGDKJPOCOID_OFFSET))(this, a1, a2);
		}

		::System::Void PCHMLPGEPEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_PCHMLPGEPEK_OFFSET))(this);
		}

		::System::Void KDDKKCFFILK(::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_KDDKKCFFILK_OFFSET))(this, a1, a2);
		}

		::System::Void GCCENAPJBEH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::CCMOIFIMAIL_OverrideAspect a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::CCMOIFIMAIL_OverrideAspect))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_GCCENAPJBEH_OFFSET))(this, a1, a2);
		}

		::System::Void GMFCFODMIFD(::RPG::Client::OpenWorld::StreamingItemData* a1, ::CCMOIFIMAIL_OverrideAspect a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::CCMOIFIMAIL_OverrideAspect, ::System::Boolean))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_GMFCFODMIFD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBOCIPHDKGC(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_EBOCIPHDKGC_OFFSET))(this, a1, a2);
		}

		::System::Boolean LMJHLIOFCBL(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_LMJHLIOFCBL_OFFSET))(this, a1, a2);
		}

		::System::Boolean HDILKFNHEFI(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_HDILKFNHEFI_OFFSET))(this, a1, a2, a3);
		}

	};
