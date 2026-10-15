#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPHFNLMNPFC;
namespace RPG::GameCore { class ChimeraEvaluationGroupRow; }

#define KPHFNLMNPFC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5BDBB0)
#define KPHFNLMNPFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BDC10)
#define KPHFNLMNPFC_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB5BDC20)
#define KPHFNLMNPFC_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0xB5BDC40)
#define KPHFNLMNPFC_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xB5BDCE0)
#define KPHFNLMNPFC_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB5BDC30)

inline static constexpr unsigned int KPHFNLMNPFC_TypeDefinitionIndex = 63489;

	class KPHFNLMNPFC : public ::System::Object
	{
	public:
		::System::UInt32 _GroupID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHFNLMNPFC_CTOR_OFFSET))(this);
		}

		static ::KPHFNLMNPFC* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::KPHFNLMNPFC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPHFNLMNPFC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHFNLMNPFC_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPHFNLMNPFC_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 NHONNHCIOOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHFNLMNPFC_NHONNHCIOOJ_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraEvaluationGroupRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::ChimeraEvaluationGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHFNLMNPFC_PDAENODHFCM_OFFSET))(this);
		}

	};
