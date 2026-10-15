#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityBranchValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueSum; }

#define HGNBCNMOBAO_BAOLCIAGDBI_OFFSET UNITYSDK_OFFSET(0x15CB2970)
#define HGNBCNMOBAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB2670)
#define HGNBCNMOBAO_GIAANGKLNFI_OFFSET UNITYSDK_OFFSET(0x15CB29E0)
#define HGNBCNMOBAO_HKELDKHOPGM_OFFSET UNITYSDK_OFFSET(0x15CB2810)
#define HGNBCNMOBAO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15CB2680)

inline static constexpr unsigned int HGNBCNMOBAO_TypeDefinitionIndex = 77574;

	class HGNBCNMOBAO : public ::System::Object
	{
	public:
		::HAJDFCHFBGN* BJGGFKFAJMA; // 0x10
		::System::Void _ctor(::HAJDFCHFBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + HGNBCNMOBAO_CTOR_OFFSET))(this, a1);
		}

		::System::Single KFGJEKJHIMB(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase* a2)
		{
			return ((::System::Single(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*))((::PBYTE)hIl2Cpp + HGNBCNMOBAO_KFGJEKJHIMB_OFFSET))(this, a1, a2);
		}

		::System::Single HKELDKHOPGM(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter* a2)
		{
			return ((::System::Single(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter*))((::PBYTE)hIl2Cpp + HGNBCNMOBAO_HKELDKHOPGM_OFFSET))(this, a1, a2);
		}

		::System::Single BAOLCIAGDBI(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter* a2)
		{
			return ((::System::Single(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter*))((::PBYTE)hIl2Cpp + HGNBCNMOBAO_BAOLCIAGDBI_OFFSET))(this, a1, a2);
		}

		::System::Single GIAANGKLNFI(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityValueSum* a2)
		{
			return ((::System::Single(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityValueSum*))((::PBYTE)hIl2Cpp + HGNBCNMOBAO_GIAANGKLNFI_OFFSET))(this, a1, a2);
		}

	};
