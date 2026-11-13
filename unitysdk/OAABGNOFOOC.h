#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class FOEPMKFEJMK;
namespace RPG::Client { class ActivityRebateData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAABGNOFOOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB51410)
#define OAABGNOFOOC_DGDGAPKGFBL_OFFSET UNITYSDK_OFFSET(0x1AB507D0)
#define OAABGNOFOOC_GCGDGBDOFMP_OFFSET UNITYSDK_OFFSET(0x1AB512F0)
#define OAABGNOFOOC_GET_ACTIVITYREBATEDATADICT_OFFSET UNITYSDK_OFFSET(0x1AB513F0)
#define OAABGNOFOOC_GHOJBCGPEOH_OFFSET UNITYSDK_OFFSET(0x1AB51270)
#define OAABGNOFOOC_HHIAJMNKPKL_OFFSET UNITYSDK_OFFSET(0x1AB50C60)
#define OAABGNOFOOC_HMEKHMKNDLB_OFFSET UNITYSDK_OFFSET(0x1AB51160)
#define OAABGNOFOOC_INIT_OFFSET UNITYSDK_OFFSET(0x1AB50530)
#define OAABGNOFOOC_LJOFDEEGADD_OFFSET UNITYSDK_OFFSET(0x1AB50D60)
#define OAABGNOFOOC_ONPBLBMCIBN_OFFSET UNITYSDK_OFFSET(0x1AB50880)
#define OAABGNOFOOC_SET_ACTIVITYREBATEDATADICT_OFFSET UNITYSDK_OFFSET(0x1AB51400)
#define OAABGNOFOOC__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AB50A30)

inline static constexpr unsigned int OAABGNOFOOC_TypeDefinitionIndex = 63315;

	class OAABGNOFOOC : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>* _ActivityRebateDataDict_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAABGNOFOOC_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAABGNOFOOC_INIT_OFFSET))(this);
		}

		::RPG::Client::ActivityRebateData* DGDGAPKGFBL(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRebateData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAABGNOFOOC_DGDGAPKGFBL_OFFSET))(this, a1);
		}

		::System::Void ONPBLBMCIBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAABGNOFOOC_ONPBLBMCIBN_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAABGNOFOOC__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void HHIAJMNKPKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAABGNOFOOC_HHIAJMNKPKL_OFFSET))(this);
		}

		::System::Void LJOFDEEGADD(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OAABGNOFOOC_LJOFDEEGADD_OFFSET))(this, a1, a2);
		}

		::System::Void GHOJBCGPEOH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OAABGNOFOOC_GHOJBCGPEOH_OFFSET))(this, a1, a2);
		}

		::System::Void HMEKHMKNDLB(::FOEPMKFEJMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOEPMKFEJMK*))((::PBYTE)hIl2Cpp + OAABGNOFOOC_HMEKHMKNDLB_OFFSET))(this, a1);
		}

		::System::Void GCGDGBDOFMP(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OAABGNOFOOC_GCGDGBDOFMP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>* get_ActivityRebateDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAABGNOFOOC_GET_ACTIVITYREBATEDATADICT_OFFSET))(this);
		}

		::System::Void set_ActivityRebateDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>*))((::PBYTE)hIl2Cpp + OAABGNOFOOC_SET_ACTIVITYREBATEDATADICT_OFFSET))(this, a1);
		}

	};
