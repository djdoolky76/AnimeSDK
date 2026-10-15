#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"
#include "unitysdk/System/Object.h"
class GMGHBGLNMFF;
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelCasterAttributeValueGetter; }
namespace RPG::GameCore { class ChimeraDuelChimeraCasterAttributeDivideValueGetter; }
namespace RPG::GameCore { class ChimeraDuelChimeraDynamicValueGetter; }
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelGlobalDynamicValueGetter; }
namespace RPG::GameCore { class ChimeraDuelMasterIDValueGetter; }
namespace RPG::GameCore { class ChimeraDuelSelectionCountValueGetter; }
namespace RPG::GameCore { class ChimeraDuelStatusGetter; }
namespace RPG::GameCore { class ChimeraDuelSumValueGetter; }
namespace RPG::GameCore { class ChimeraDuelTurnIndexValueGetter; }
namespace RPG::GameCore { class ChimeraDuelValueCalculator; }
namespace RPG::GameCore { class ChimeraDuelWaitSummonUnitQueueCountValueGetter; }
namespace RPG::GameCore { class SimpleChimeraDuelValueGetter; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define PAMFILOLBCJ_AOELELKONJH_OFFSET UNITYSDK_OFFSET(0xBFD5090)
#define PAMFILOLBCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD44A0)
#define PAMFILOLBCJ_FCNHMGELMGJ_OFFSET UNITYSDK_OFFSET(0xBFD63B0)
#define PAMFILOLBCJ_FGDJNCAMOKB_OFFSET UNITYSDK_OFFSET(0xBFD5140)
#define PAMFILOLBCJ_FMIJJOJCDIJ_OFFSET UNITYSDK_OFFSET(0xBFD6A70)
#define PAMFILOLBCJ_GET__CONTEXTGETTER_OFFSET UNITYSDK_OFFSET(0xBFD4430)
#define PAMFILOLBCJ_GET__QUERY_OFFSET UNITYSDK_OFFSET(0xBFD4420)
#define PAMFILOLBCJ_GIAANGKLNFI_OFFSET UNITYSDK_OFFSET(0xBFD6640)
#define PAMFILOLBCJ_JEHKBKPOKKP_OFFSET UNITYSDK_OFFSET(0xBFD60E0)
#define PAMFILOLBCJ_JFCPGNCOPPM_OFFSET UNITYSDK_OFFSET(0xBFD6A00)
#define PAMFILOLBCJ_JFFEBOFGCJL_OFFSET UNITYSDK_OFFSET(0xBFD4440)
#define PAMFILOLBCJ_KELHKNFGOMD_OFFSET UNITYSDK_OFFSET(0xBFD49B0)
#define PAMFILOLBCJ_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBFD44B0)
#define PAMFILOLBCJ_KLPJAMJKEJJ_OFFSET UNITYSDK_OFFSET(0xBFD64A0)
#define PAMFILOLBCJ_MNJGJNLHLNF_OFFSET UNITYSDK_OFFSET(0xBFD5390)
#define PAMFILOLBCJ_NALPNBNJNGH_OFFSET UNITYSDK_OFFSET(0xBFD75C0)
#define PAMFILOLBCJ_NBAPFLACJGC_OFFSET UNITYSDK_OFFSET(0xBFD7350)
#define PAMFILOLBCJ_NOCPJPJGJKE_OFFSET UNITYSDK_OFFSET(0xBFD6D00)
#define PAMFILOLBCJ_NPDJFLJPMKO_OFFSET UNITYSDK_OFFSET(0xBFD6C40)
#define PAMFILOLBCJ_OFKHHGFFNPB_OFFSET UNITYSDK_OFFSET(0xBFD6750)

	class PAMFILOLBCJ : public ::System::Object
	{
	public:
		::System::Func_1<::GMGHBGLNMFF*>* __ContextGetter_k__BackingField; // 0x10
		::HAJDFCHFBGN* __Query_k__BackingField; // 0x18
		::System::Void _ctor(::HAJDFCHFBGN* a1, ::System::Func_1<::GMGHBGLNMFF*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Func_1<::GMGHBGLNMFF*>*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::HAJDFCHFBGN* get__Query()
		{
			return ((::HAJDFCHFBGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_GET__QUERY_OFFSET))(this);
		}

		::System::Func_1<::GMGHBGLNMFF*>* get__ContextGetter()
		{
			return ((::System::Func_1<::GMGHBGLNMFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_GET__CONTEXTGETTER_OFFSET))(this);
		}

		::GMGHBGLNMFF* JFFEBOFGCJL()
		{
			return ((::GMGHBGLNMFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_JFFEBOFGCJL_OFFSET))(this);
		}

		::System::Single KFGJEKJHIMB(::RPG::GameCore::BaseChimeraDuelValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Single KELHKNFGOMD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_KELHKNFGOMD_OFFSET))(this);
		}

		::System::Single FMIJJOJCDIJ(::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_FMIJJOJCDIJ_OFFSET))(this, a1);
		}

		::System::Single AOELELKONJH(::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_AOELELKONJH_OFFSET))(this, a1);
		}

		::System::Single FGDJNCAMOKB(::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_FGDJNCAMOKB_OFFSET))(this, a1);
		}

		::System::Single MNJGJNLHLNF(::RPG::GameCore::ChimeraDuelExcelValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_MNJGJNLHLNF_OFFSET))(this, a1);
		}

		::System::Single JEHKBKPOKKP(::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_JEHKBKPOKKP_OFFSET))(this, a1);
		}

		static ::System::String* NALPNBNJNGH(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelAppendKeyType a2)
		{
			return ((::System::String*(*)(::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelAppendKeyType))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_NALPNBNJNGH_OFFSET))(a1, a2);
		}

		::System::Single FCNHMGELMGJ(::RPG::GameCore::ChimeraDuelSelectionCountValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_FCNHMGELMGJ_OFFSET))(this, a1);
		}

		::System::Single KLPJAMJKEJJ(::RPG::GameCore::ChimeraDuelStatusGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelStatusGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_KLPJAMJKEJJ_OFFSET))(this, a1);
		}

		::System::Single GIAANGKLNFI(::RPG::GameCore::ChimeraDuelSumValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSumValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_GIAANGKLNFI_OFFSET))(this, a1);
		}

		::System::Single OFKHHGFFNPB(::RPG::GameCore::ChimeraDuelValueCalculator* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelValueCalculator*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_OFKHHGFFNPB_OFFSET))(this, a1);
		}

		::System::Single JFCPGNCOPPM(::RPG::GameCore::SimpleChimeraDuelValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::SimpleChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_JFCPGNCOPPM_OFFSET))(this, a1);
		}

		::System::Single NPDJFLJPMKO(::RPG::GameCore::ChimeraDuelTurnIndexValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_NPDJFLJPMKO_OFFSET))(this, a1);
		}

		::System::Single NOCPJPJGJKE(::RPG::GameCore::ChimeraDuelMasterIDValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_NOCPJPJGJKE_OFFSET))(this, a1);
		}

		::System::Single NBAPFLACJGC(::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter*))((::PBYTE)hIl2Cpp + PAMFILOLBCJ_NBAPFLACJGC_OFFSET))(this, a1);
		}

	};
