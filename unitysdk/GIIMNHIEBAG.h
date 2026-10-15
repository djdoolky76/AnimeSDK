#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/UnityEngine/Vector2.h"
class APLEMBNFLAA;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class OIDDJJLHGKO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define GIIMNHIEBAG_ANIFPCHGBLE_OFFSET UNITYSDK_OFFSET(0x15A31DC0)
#define GIIMNHIEBAG_APHBCNILECE_OFFSET UNITYSDK_OFFSET(0x15A311B0)
#define GIIMNHIEBAG_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0x15A31550)
#define GIIMNHIEBAG_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0x15A314F0)
#define GIIMNHIEBAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A30E20)
#define GIIMNHIEBAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A31270)
#define GIIMNHIEBAG_EBBDALJMBNL_OFFSET UNITYSDK_OFFSET(0x15A30FE0)
#define GIIMNHIEBAG_EJCLEHHHEMM_OFFSET UNITYSDK_OFFSET(0x15A32360)
#define GIIMNHIEBAG_FAEOCGDLMNG_OFFSET UNITYSDK_OFFSET(0x15A320A0)
#define GIIMNHIEBAG_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x15A317B0)
#define GIIMNHIEBAG_JEALPKMHMNM_OFFSET UNITYSDK_OFFSET(0x15A31E30)
#define GIIMNHIEBAG_KLHCPHCDKMF_OFFSET UNITYSDK_OFFSET(0x15A32090)
#define GIIMNHIEBAG_KMDFOAPFHCD_OFFSET UNITYSDK_OFFSET(0x15A31050)
#define GIIMNHIEBAG_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0x15A31D60)
#define GIIMNHIEBAG_NKFCADIMBMO_OFFSET UNITYSDK_OFFSET(0x15A31EB0)
#define GIIMNHIEBAG_OLBDBOHNGBH_OFFSET UNITYSDK_OFFSET(0x15A32010)
#define GIIMNHIEBAG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15A31940)
#define GIIMNHIEBAG_PJHKGEOENAE_OFFSET UNITYSDK_OFFSET(0x15A31FA0)
#define GIIMNHIEBAG_TOHLOD_OFFSET UNITYSDK_OFFSET(0x15A30FA0)
#define GIIMNHIEBAG__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x15A325C0)
#define GIIMNHIEBAG__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x15A32610)

inline static constexpr unsigned int GIIMNHIEBAG_TypeDefinitionIndex = 73751;

	class GIIMNHIEBAG : public ::GDMONJOAKHD
	{
	public:
		::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* HKKAODHHNLM; // 0x170
		::System::Action_1<::HPKACEPPPCA*>* CMINHDLOIIP; // 0x178
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* MDPHLGPNHGL; // 0x180
		::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* IADNCGNIHDM; // 0x188
		::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* FPBNLGEJKLH; // 0x190
		::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* INJMMHBDEHC; // 0x198
		::System::Boolean BKEGDMBMHHP; // 0x1A0
		::System::Boolean MCAPIAKDMAA; // 0x1A1
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 CGCMOADCGEC; // 0x1A4
		// static const ::System::Object IEDHJNBKKBK; // 0x0
		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ToHLOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_TOHLOD_OFFSET))(this);
		}

		::System::Void EBBDALJMBNL(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_EBBDALJMBNL_OFFSET))(this, a1);
		}

		::System::Void KMDFOAPFHCD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_KMDFOAPFHCD_OFFSET))(this, a1);
		}

		::System::Void APHBCNILECE(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_APHBCNILECE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_DISPOSE_OFFSET))(this);
		}

		::HPKACEPPPCA* CIPJBBAOLBD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_CIPJBBAOLBD_OFFSET))(this, a1);
		}

		::System::Boolean BGBPEMJCGLH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_BGBPEMJCGLH_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetItemLodLevel(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Boolean LEHKGLNGAGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_LEHKGLNGAGF_OFFSET))(this);
		}

		::System::Void ANIFPCHGBLE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_ANIFPCHGBLE_OFFSET))(this, a1, a2);
		}

		::System::Void JEALPKMHMNM(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_JEALPKMHMNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NKFCADIMBMO(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_NKFCADIMBMO_OFFSET))(this, a1);
		}

		::System::Void PJHKGEOENAE(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_PJHKGEOENAE_OFFSET))(this, a1, a2);
		}

		::System::Void OLBDBOHNGBH(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_OLBDBOHNGBH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KLHCPHCDKMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_KLHCPHCDKMF_OFFSET))(this);
		}

		::System::Void FAEOCGDLMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_FAEOCGDLMNG_OFFSET))(this);
		}

		::System::Void EJCLEHHHEMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIMNHIEBAG_EJCLEHHHEMM_OFFSET))(this);
		}

		::System::Void _RegisterInstanceToCullingSystem(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
		}

		::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GIIMNHIEBAG__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
		}

	};
