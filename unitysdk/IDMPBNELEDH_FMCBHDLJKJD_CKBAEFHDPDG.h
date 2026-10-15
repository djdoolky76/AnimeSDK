#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class FKIODIMJPNA;
namespace RPG::GameCore { class CharacterInputData; }

#define IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_AHBHFIMGBJC_OFFSET UNITYSDK_OFFSET(0x15ED19D0)
#define IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x15ED1150)
#define IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED1140)
#define IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_DKPPOOIHCPB_OFFSET UNITYSDK_OFFSET(0x15ED1A40)
#define IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x15ED13A0)

inline static constexpr unsigned int IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_TypeDefinitionIndex = 60199;

	class IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG : public ::System::Object
	{
	public:
		::FKIODIMJPNA* MIPCILCJBMP; // 0x10
		::System::Single NPNKJAPMINI; // 0x18
		::System::Boolean AMNFEGCAHKB; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::MVector3 MDKGDLJDCLC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_CTOR_OFFSET))(this);
		}

		::System::Void AHBHFIMGBJC(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_AHBHFIMGBJC_OFFSET))(this, a1);
		}

		::System::Void BKJGMFOKKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_BKJGMFOKKKN_OFFSET))(this);
		}

		::System::Void GNCJAGHKEPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_GNCJAGHKEPO_OFFSET))(this);
		}

		::System::Void DKPPOOIHCPB(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG_DKPPOOIHCPB_OFFSET))(this, a1, a2);
		}

	};
