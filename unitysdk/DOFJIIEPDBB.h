#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKDIHAIJPHI;
class GCDPDMAOBHG;
class GIAOADHEMIJ;
class JGPGPIFEMCI;
class JLJIMJMCGOB;
class KCIIJAFOOBL;
class MFMNHELPIMP;
class PIEPJMAKDFJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOFJIIEPDBB_FMCFBEFDEBC_OFFSET UNITYSDK_OFFSET(0x17215C60)
#define DOFJIIEPDBB_IEHMHHMKPPD_1_OFFSET UNITYSDK_OFFSET(0x172150F0)
#define DOFJIIEPDBB_IEHMHHMKPPD_OFFSET UNITYSDK_OFFSET(0x17214690)
#define DOFJIIEPDBB_MPPCLOFOKHI_OFFSET UNITYSDK_OFFSET(0x17215DE0)
#define DOFJIIEPDBB__CTOR_OFFSET UNITYSDK_OFFSET(0x172142E0)

inline static constexpr unsigned int DOFJIIEPDBB_TypeDefinitionIndex = 51704;

class DOFJIIEPDBB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* ADFDKPABCPF; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* MCENCIIFEOJ; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* JCPKOMMGMNO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* IBFDKIJKCIP; // 0x28
	::System::Collections::Generic::List_1<::BKDIHAIJPHI*>* BFACPDJMJMO; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* CIBJOELPGMP; // 0x38
	::System::Collections::Generic::List_1<::JLJIMJMCGOB*>* EGFCIJCKGHC; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GOBOBDICPHC; // 0x48
	::System::Collections::Generic::List_1<::GIAOADHEMIJ*>* JNCJPJMDOAJ; // 0x50
	::System::Collections::Generic::List_1<::PIEPJMAKDFJ*>* KOMGKGLJMPE; // 0x58
	::System::Collections::Generic::List_1<::JGPGPIFEMCI*>* DKGGMIHMCBC; // 0x60
	::System::Collections::Generic::List_1<::MFMNHELPIMP*>* EDBJJNLMMLN; // 0x68
	::System::Boolean ICEJDLLMDCE; // 0x70
	::System::Byte _padding0[0x3];
	::System::UInt32 CMKEBCGHEJD; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFJIIEPDBB__CTOR_OFFSET))(this);
	}

	::System::Void IEHMHHMKPPD(::KCIIJAFOOBL* GKLHGOKMJFB)
	{
		return ((::System::Void(*)(::PVOID, ::KCIIJAFOOBL*))((::PBYTE)hIl2Cpp + DOFJIIEPDBB_IEHMHHMKPPD_OFFSET))(this, GKLHGOKMJFB);
	}

	::System::Void IEHMHHMKPPD_1(::GCDPDMAOBHG* GKLHGOKMJFB)
	{
		return ((::System::Void(*)(::PVOID, ::GCDPDMAOBHG*))((::PBYTE)hIl2Cpp + DOFJIIEPDBB_IEHMHHMKPPD_1_OFFSET))(this, GKLHGOKMJFB);
	}

	::System::Void FMCFBEFDEBC(::System::UInt32 BBOLKIABJHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOFJIIEPDBB_FMCFBEFDEBC_OFFSET))(this, BBOLKIABJHA);
	}

	::System::Void MPPCLOFOKHI(::JGPGPIFEMCI* IELCOBHMNLB)
	{
		return ((::System::Void(*)(::PVOID, ::JGPGPIFEMCI*))((::PBYTE)hIl2Cpp + DOFJIIEPDBB_MPPCLOFOKHI_OFFSET))(this, IELCOBHMNLB);
	}
};
