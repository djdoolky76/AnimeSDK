#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/CFMDKNCDDAL.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/PBBJDEMIFDC.h"
#include "unitysdk/System/Nullable_1.h"
class CFGGOBEDJOK;
class KNHKBNKAJAN;
class MNFBHFDNOKF;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GrowthTargetRelicRecommender; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMIODDMBPNK_AKKDEKCHAPI_OFFSET UNITYSDK_OFFSET(0x164CCDB0)
#define IMIODDMBPNK_BAPCPBGNGDN_OFFSET UNITYSDK_OFFSET(0x164CC670)
#define IMIODDMBPNK_BIAFFOFCOGK_OFFSET UNITYSDK_OFFSET(0x164CD670)
#define IMIODDMBPNK_CTOR_OFFSET UNITYSDK_OFFSET(0x164CD5D0)
#define IMIODDMBPNK_FCGOJJFBAMK_OFFSET UNITYSDK_OFFSET(0x164CC3A0)
#define IMIODDMBPNK_GET_GROWTHTARGETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164CC370)
#define IMIODDMBPNK_GET_RELICRECOMMENDER_OFFSET UNITYSDK_OFFSET(0x164CC390)
#define IMIODDMBPNK_GOPCOLIKMJN_OFFSET UNITYSDK_OFFSET(0x164CD620)
#define IMIODDMBPNK_IOOFHLLJOFI_OFFSET UNITYSDK_OFFSET(0x164CCBA0)
#define IMIODDMBPNK_KPLOPPMKKHA_OFFSET UNITYSDK_OFFSET(0x164CC6F0)
#define IMIODDMBPNK_LHNODCABGCD_OFFSET UNITYSDK_OFFSET(0x164CC5E0)
#define IMIODDMBPNK_LJADHFIAMHI_OFFSET UNITYSDK_OFFSET(0x164CD260)
#define IMIODDMBPNK_OAAKDOOOPJI_OFFSET UNITYSDK_OFFSET(0x164CC8C0)
#define IMIODDMBPNK_SET_GROWTHTARGETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164CC380)
#define IMIODDMBPNK_START_OFFSET UNITYSDK_OFFSET(0x164CCA60)
#define IMIODDMBPNK_STOP_OFFSET UNITYSDK_OFFSET(0x164CCB50)
#define IMIODDMBPNK__SETGROWTHTARGET_B__11_0_OFFSET UNITYSDK_OFFSET(0x164CD6E0)

inline static constexpr unsigned int IMIODDMBPNK_TypeDefinitionIndex = 65611;

	class IMIODDMBPNK : public ::BHPMNMMGLHI
	{
	public:
		::RPG::Client::GrowthTargetRelicRecommender* _RelicRecommender_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::CFMDKNCDDAL>* ANHCCDLOHGJ; // 0x28
		::System::Nullable_1<::OIPMNNAHIFP> _GrowthTargetIdentifier_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIODDMBPNK_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::OIPMNNAHIFP> get_GrowthTargetIdentifier()
		{
			return ((::System::Nullable_1<::OIPMNNAHIFP>(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIODDMBPNK_GET_GROWTHTARGETIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_GrowthTargetIdentifier(::System::Nullable_1<::OIPMNNAHIFP> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::OIPMNNAHIFP>))((::PBYTE)hIl2Cpp + IMIODDMBPNK_SET_GROWTHTARGETIDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::Client::GrowthTargetRelicRecommender* get_RelicRecommender()
		{
			return ((::RPG::Client::GrowthTargetRelicRecommender*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIODDMBPNK_GET_RELICRECOMMENDER_OFFSET))(this);
		}

		::System::Boolean FCGOJJFBAMK(::OIPMNNAHIFP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + IMIODDMBPNK_FCGOJJFBAMK_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* BAPCPBGNGDN()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIODDMBPNK_BAPCPBGNGDN_OFFSET))(this);
		}

		::System::Boolean LHNODCABGCD(::CFMDKNCDDAL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFMDKNCDDAL))((::PBYTE)hIl2Cpp + IMIODDMBPNK_LHNODCABGCD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* KPLOPPMKKHA(::System::Object* a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::CFMDKNCDDAL>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::CFMDKNCDDAL>*))((::PBYTE)hIl2Cpp + IMIODDMBPNK_KPLOPPMKKHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIODDMBPNK_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIODDMBPNK_STOP_OFFSET))(this);
		}

		::System::Void IOOFHLLJOFI(::System::UInt16 a1, ::MNFBHFDNOKF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::MNFBHFDNOKF*))((::PBYTE)hIl2Cpp + IMIODDMBPNK_IOOFHLLJOFI_OFFSET))(this, a1, a2);
		}

		::System::Void AKKDEKCHAPI(::System::UInt16 a1, ::KNHKBNKAJAN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::KNHKBNKAJAN*))((::PBYTE)hIl2Cpp + IMIODDMBPNK_AKKDEKCHAPI_OFFSET))(this, a1, a2);
		}

		::System::Void LJADHFIAMHI(::System::UInt16 a1, ::CFGGOBEDJOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::CFGGOBEDJOK*))((::PBYTE)hIl2Cpp + IMIODDMBPNK_LJADHFIAMHI_OFFSET))(this, a1, a2);
		}

		::PBBJDEMIFDC OAAKDOOOPJI(::System::UInt32 a1)
		{
			return ((::PBBJDEMIFDC(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMIODDMBPNK_OAAKDOOOPJI_OFFSET))(this, a1);
		}

		::System::Boolean GOPCOLIKMJN(::OIPMNNAHIFP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + IMIODDMBPNK_GOPCOLIKMJN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BIAFFOFCOGK(::System::Object* a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::CFMDKNCDDAL>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::CFMDKNCDDAL>*))((::PBYTE)hIl2Cpp + IMIODDMBPNK_BIAFFOFCOGK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetGrowthTarget_b__11_0(::KNHKBNKAJAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHKBNKAJAN*))((::PBYTE)hIl2Cpp + IMIODDMBPNK__SETGROWTHTARGET_B__11_0_OFFSET))(this, a1);
		}

	};
