#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"

class ABCGMHDCNML;
class GDGBPCOGIEN;
class GEAHMLADDEM;
class GEDGIJFKFKM;
class PJOHPBGHNHK;
class PJPHJINFMEH;
namespace Foundation { class IEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBNBJBECDBP_ADFKBMKMNOG_OFFSET UNITYSDK_OFFSET(0x1EDF96F0)
#define IBNBJBECDBP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1EDF9A00)
#define IBNBJBECDBP_BEMEDEABJKM_OFFSET UNITYSDK_OFFSET(0x1EDFA110)
#define IBNBJBECDBP_CBDIBBHAGIF_OFFSET UNITYSDK_OFFSET(0x1EDF8F10)
#define IBNBJBECDBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EDF86F0)
#define IBNBJBECDBP_GCDEEHPNMJP_OFFSET UNITYSDK_OFFSET(0x1EDF8EB0)
#define IBNBJBECDBP_IMJJOEEGEKK_OFFSET UNITYSDK_OFFSET(0x1EDF11B0)
#define IBNBJBECDBP_JHAEJOIGFEH_OFFSET UNITYSDK_OFFSET(0x1EDF9B00)
#define IBNBJBECDBP_LIIOOKAHFOP_OFFSET UNITYSDK_OFFSET(0x1EDF8A30)
#define IBNBJBECDBP_LJEDMOEDLFC_OFFSET UNITYSDK_OFFSET(0x1EDF84B0)
#define IBNBJBECDBP_MANJPKJGMNA_OFFSET UNITYSDK_OFFSET(0x1EDF8230)
#define IBNBJBECDBP_NLMDEJKGNKE_OFFSET UNITYSDK_OFFSET(0x1EDFA720)
#define IBNBJBECDBP_ODKKBMNGKCA_OFFSET UNITYSDK_OFFSET(0x1EDF9470)
#define IBNBJBECDBP_OPCCLAPFGLN_OFFSET UNITYSDK_OFFSET(0x1EDF8360)
#define IBNBJBECDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF8120)

inline static constexpr unsigned int IBNBJBECDBP_TypeDefinitionIndex = 18771;

class IBNBJBECDBP : public ::System::Object
{
public:
	::PJOHPBGHNHK* PAADOMBPAFM; // 0x10
	::Foundation::IEntity* FEFFFPGCIIO; // 0x18
	::GEDGIJFKFKM* CJMBPLLIFIF; // 0x20
	::System::Action_3<::PJOHPBGHNHK*, ::System::Single, ::System::Single>* FDFPBFCHCOK; // 0x28
	::ABCGMHDCNML* IBCLHEKMPIL; // 0x30
	::System::Action* CLEKKJPGCKM; // 0x38
	::System::Action_2<::System::Single, ::System::Single>* FIDDIMEHAOM; // 0x40
	::System::Collections::Generic::List_1<::PJPHJINFMEH*>* MHOILJACDME; // 0x48
	::System::Collections::Generic::List_1<::GEAHMLADDEM*>* MPCICPIAKOD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBJBECDBP__CTOR_OFFSET))(this);
	}

	::System::Void MANJPKJGMNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBJBECDBP_MANJPKJGMNA_OFFSET))(this);
	}

	::System::Void OPCCLAPFGLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBJBECDBP_OPCCLAPFGLN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBJBECDBP_DISPOSE_OFFSET))(this);
	}

	::System::Void LIIOOKAHFOP(::GDGBPCOGIEN* JIJFBNLHFGK, ::Foundation::Buff::GameplayEffectModifier AOBNJBCBHAK)
	{
		return ((::System::Void(*)(::PVOID, ::GDGBPCOGIEN*, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + IBNBJBECDBP_LIIOOKAHFOP_OFFSET))(this, JIJFBNLHFGK, AOBNJBCBHAK);
	}

	::System::Void GCDEEHPNMJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBJBECDBP_GCDEEHPNMJP_OFFSET))(this);
	}

	::System::Void ODKKBMNGKCA(::System::Single KGGJCGPMAIH, ::System::Single BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IBNBJBECDBP_ODKKBMNGKCA_OFFSET))(this, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	static ::IBNBJBECDBP* ADFKBMKMNOG(::PJOHPBGHNHK* GCLAAACKEFN, ::Foundation::IEntity* AMNIHACKELI, ::ABCGMHDCNML* JDKMIKBBDDO, ::GEDGIJFKFKM* NIOPLIMAKAM)
	{
		return ((::IBNBJBECDBP*(*)(::PJOHPBGHNHK*, ::Foundation::IEntity*, ::ABCGMHDCNML*, ::GEDGIJFKFKM*))((::PBYTE)hIl2Cpp + IBNBJBECDBP_ADFKBMKMNOG_OFFSET))(GCLAAACKEFN, AMNIHACKELI, JDKMIKBBDDO, NIOPLIMAKAM);
	}

	static ::System::Single JHAEJOIGFEH(::PJOHPBGHNHK* GCLAAACKEFN, ::System::Collections::Generic::IReadOnlyList_1<::GEAHMLADDEM*>* GPBCIGBIKJE)
	{
		return ((::System::Single(*)(::PJOHPBGHNHK*, ::System::Collections::Generic::IReadOnlyList_1<::GEAHMLADDEM*>*))((::PBYTE)hIl2Cpp + IBNBJBECDBP_JHAEJOIGFEH_OFFSET))(GCLAAACKEFN, GPBCIGBIKJE);
	}

	::System::Void BBOMJDBNHIC(::PJOHPBGHNHK* GCLAAACKEFN, ::Foundation::IEntity* AMNIHACKELI, ::ABCGMHDCNML* JDKMIKBBDDO, ::GEDGIJFKFKM* NIOPLIMAKAM)
	{
		return ((::System::Void(*)(::PVOID, ::PJOHPBGHNHK*, ::Foundation::IEntity*, ::ABCGMHDCNML*, ::GEDGIJFKFKM*))((::PBYTE)hIl2Cpp + IBNBJBECDBP_BBOMJDBNHIC_OFFSET))(this, GCLAAACKEFN, AMNIHACKELI, JDKMIKBBDDO, NIOPLIMAKAM);
	}

	::System::Void LJEDMOEDLFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBJBECDBP_LJEDMOEDLFC_OFFSET))(this);
	}

	static ::System::Void IMJJOEEGEKK(::Foundation::IEntity* KECKGDFIALJ, ::System::Collections::Generic::IReadOnlyList_1<::GEAHMLADDEM*>* GPBCIGBIKJE, ::ABCGMHDCNML* KBPFBOGDMAD)
	{
		return ((::System::Void(*)(::Foundation::IEntity*, ::System::Collections::Generic::IReadOnlyList_1<::GEAHMLADDEM*>*, ::ABCGMHDCNML*))((::PBYTE)hIl2Cpp + IBNBJBECDBP_IMJJOEEGEKK_OFFSET))(KECKGDFIALJ, GPBCIGBIKJE, KBPFBOGDMAD);
	}

	::System::Single CBDIBBHAGIF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBJBECDBP_CBDIBBHAGIF_OFFSET))(this);
	}

	::System::Void BEMEDEABJKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBJBECDBP_BEMEDEABJKM_OFFSET))(this);
	}

	::System::Void NLMDEJKGNKE(::PJOHPBGHNHK* GCLAAACKEFN, ::System::Single GBMKKMDEGOC, ::System::Single JKMMJNGEONJ)
	{
		return ((::System::Void(*)(::PVOID, ::PJOHPBGHNHK*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IBNBJBECDBP_NLMDEJKGNKE_OFFSET))(this, GCLAAACKEFN, GBMKKMDEGOC, JKMMJNGEONJ);
	}
};
