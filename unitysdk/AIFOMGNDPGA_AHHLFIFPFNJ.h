#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCDHCHIECKF;
namespace System { template <typename T> class Action_1; }

#define AIFOMGNDPGA_AHHLFIFPFNJ_CMAIFANMGAF_OFFSET UNITYSDK_OFFSET(0x17CD2D90)
#define AIFOMGNDPGA_AHHLFIFPFNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD2D80)

inline static constexpr unsigned int AIFOMGNDPGA_AHHLFIFPFNJ_TypeDefinitionIndex = 47266;

class AIFOMGNDPGA_AHHLFIFPFNJ : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::LCDHCHIECKF*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20
	::System::Single KKIAHJODOIA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_AHHLFIFPFNJ__CTOR_OFFSET))(this);
	}

	::System::Void CMAIFANMGAF(::LCDHCHIECKF* DBMAPOKBCPO)
	{
		return ((::System::Void(*)(::PVOID, ::LCDHCHIECKF*))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_AHHLFIFPFNJ_CMAIFANMGAF_OFFSET))(this, DBMAPOKBCPO);
	}
};
