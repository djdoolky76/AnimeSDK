#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class KJPPANPJBOJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOKFPNKJOON_OCEONPBIHLC_FMGOPBMNICF_OFFSET UNITYSDK_OFFSET(0xF77ABA0)
#define AOKFPNKJOON_OCEONPBIHLC__CTOR_OFFSET UNITYSDK_OFFSET(0xF77AB90)

inline static constexpr unsigned int AOKFPNKJOON_OCEONPBIHLC_TypeDefinitionIndex = 51457;

class AOKFPNKJOON_OCEONPBIHLC : public ::System::Object
{
public:
	::System::Single HHMMKIAFHOC; // 0x10
	::System::Int32 MDHPEPLKPHL; // 0x14
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType JIPPMBKLFHE; // 0x18
	::System::Boolean PLCJLHLIMGG; // 0x1C
	::System::Boolean KMNDDPAJJNN; // 0x1D
	::System::Byte _padding0[0x2];
	::System::Int32 DLHIGAEBHFC; // 0x20
	::System::Single CIIPCCLOHLH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_OCEONPBIHLC__CTOR_OFFSET))(this);
	}

	::System::Void FMGOPBMNICF(::KJPPANPJBOJ* GLAOEHCGCFO, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* HKABGLFEIPA)
	{
		return ((::System::Void(*)(::PVOID, ::KJPPANPJBOJ*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_OCEONPBIHLC_FMGOPBMNICF_OFFSET))(this, GLAOEHCGCFO, HKABGLFEIPA);
	}
};
