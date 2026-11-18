#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCLHEDDHMAI.h"

class HEIKBAAJAGG;
class LIODJIGGJEK;
class OCLLKJMICKK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EONDIFJCDND_DEBOJHDBNKE_OFFSET UNITYSDK_OFFSET(0x1E8B3650)
#define EONDIFJCDND_EFEEHPDIICC_OFFSET UNITYSDK_OFFSET(0x1E8B3C90)
#define EONDIFJCDND_FJMOMCNKOAH_OFFSET UNITYSDK_OFFSET(0x1E8B2440)
#define EONDIFJCDND_JCNPALLCOBG_OFFSET UNITYSDK_OFFSET(0x1E8B33A0)
#define EONDIFJCDND_LDLMPMEKLNO_OFFSET UNITYSDK_OFFSET(0x1E8B3CE0)
#define EONDIFJCDND_MJPCBLMFKNE_OFFSET UNITYSDK_OFFSET(0x1E8B28E0)
#define EONDIFJCDND_PLCHMBPPLNF_OFFSET UNITYSDK_OFFSET(0x1E8B2520)
#define EONDIFJCDND__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3AF0)

inline static constexpr unsigned int EONDIFJCDND_TypeDefinitionIndex = 94789;

class EONDIFJCDND : public ::PCLHEDDHMAI
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::LIODJIGGJEK*>* JLCNBGAIEMN; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::List_1<::OCLLKJMICKK*>*>* BCLJNDBBEJE; // 0x40
	::System::UInt64 BDDABKCNNKD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONDIFJCDND__CTOR_OFFSET))(this);
	}

	::System::Void FJMOMCNKOAH(::HEIKBAAJAGG* FNKNKLOINAI)
	{
		return ((::System::Void(*)(::PVOID, ::HEIKBAAJAGG*))((::PBYTE)hIl2Cpp + EONDIFJCDND_FJMOMCNKOAH_OFFSET))(this, FNKNKLOINAI);
	}

	::System::Void DEBOJHDBNKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONDIFJCDND_DEBOJHDBNKE_OFFSET))(this);
	}

	::System::Void PLCHMBPPLNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONDIFJCDND_PLCHMBPPLNF_OFFSET))(this);
	}

	::System::Void EFEEHPDIICC(::HEIKBAAJAGG* FNKNKLOINAI)
	{
		return ((::System::Void(*)(::PVOID, ::HEIKBAAJAGG*))((::PBYTE)hIl2Cpp + EONDIFJCDND_EFEEHPDIICC_OFFSET))(this, FNKNKLOINAI);
	}

	::System::Void MJPCBLMFKNE(::HEIKBAAJAGG* FNKNKLOINAI)
	{
		return ((::System::Void(*)(::PVOID, ::HEIKBAAJAGG*))((::PBYTE)hIl2Cpp + EONDIFJCDND_MJPCBLMFKNE_OFFSET))(this, FNKNKLOINAI);
	}

	::System::Void LDLMPMEKLNO(::HEIKBAAJAGG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HEIKBAAJAGG*))((::PBYTE)hIl2Cpp + EONDIFJCDND_LDLMPMEKLNO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JCNPALLCOBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONDIFJCDND_JCNPALLCOBG_OFFSET))(this);
	}
};
