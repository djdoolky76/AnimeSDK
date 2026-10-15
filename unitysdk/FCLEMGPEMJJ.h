#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOJOBHMEEIH;
class CCEIJBFAOAI;
class CEEGMMCFCBG;
class CHGHIALKMFM;
class DBPFECFIKOM;
class FCLEMGPEMJJ_BLBIIBDHFNF;
class FCLEMGPEMJJ_CALHOBNPLPJ;
class ILOOAAOHIIG;
class JNBEDKMHFMN;
class LJHCJGNNMJD;
class LOLCJIIIHIM;
class PKJHLEOADGL;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define FCLEMGPEMJJ_ADD_HANDLESCROLLTOMOLD_OFFSET UNITYSDK_OFFSET(0x156CB170)
#define FCLEMGPEMJJ_ADD_ONISEXTRAFILTEREDCHANGED_OFFSET UNITYSDK_OFFSET(0x156CB400)
#define FCLEMGPEMJJ_ADD_ONMOLDSCHANGED_OFFSET UNITYSDK_OFFSET(0x156CB070)
#define FCLEMGPEMJJ_BMNAPGDGJAO_OFFSET UNITYSDK_OFFSET(0x156CD0C0)
#define FCLEMGPEMJJ_BNEKJKKAOPC_OFFSET UNITYSDK_OFFSET(0x156CB350)
#define FCLEMGPEMJJ_CDAKNOCPKAH_OFFSET UNITYSDK_OFFSET(0x156CB780)
#define FCLEMGPEMJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156CB4C0)
#define FCLEMGPEMJJ_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x156CB560)
#define FCLEMGPEMJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156CC090)
#define FCLEMGPEMJJ_EECANDIIGGM_OFFSET UNITYSDK_OFFSET(0x156CD2B0)
#define FCLEMGPEMJJ_FJPPBHJMGOC_OFFSET UNITYSDK_OFFSET(0x156CB290)
#define FCLEMGPEMJJ_FNDDFECHAMP_OFFSET UNITYSDK_OFFSET(0x156CD650)
#define FCLEMGPEMJJ_GET_ALLMOLDS_OFFSET UNITYSDK_OFFSET(0x156CB010)
#define FCLEMGPEMJJ_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0x156CB270)
#define FCLEMGPEMJJ_GKIMOCMNAMJ_OFFSET UNITYSDK_OFFSET(0x156CB030)
#define FCLEMGPEMJJ_IJLCGGEOLHK_OFFSET UNITYSDK_OFFSET(0x156CC260)
#define FCLEMGPEMJJ_JJPPIKGOFAB_OFFSET UNITYSDK_OFFSET(0x156CCEC0)
#define FCLEMGPEMJJ_KPLADHPLFAO_OFFSET UNITYSDK_OFFSET(0x156CD110)
#define FCLEMGPEMJJ_MCGLIOEMLIP_OFFSET UNITYSDK_OFFSET(0x156CC800)
#define FCLEMGPEMJJ_MILABDEJOMO_OFFSET UNITYSDK_OFFSET(0x156CB9F0)
#define FCLEMGPEMJJ_NCDHCJNLICG_OFFSET UNITYSDK_OFFSET(0x156CB390)
#define FCLEMGPEMJJ_REMOVE_HANDLESCROLLTOMOLD_OFFSET UNITYSDK_OFFSET(0x156CB1F0)
#define FCLEMGPEMJJ_REMOVE_ONISEXTRAFILTEREDCHANGED_OFFSET UNITYSDK_OFFSET(0x156CB460)
#define FCLEMGPEMJJ_REMOVE_ONMOLDSCHANGED_OFFSET UNITYSDK_OFFSET(0x156CB0F0)
#define FCLEMGPEMJJ_SET_ALLMOLDS_OFFSET UNITYSDK_OFFSET(0x156CB020)
#define FCLEMGPEMJJ_SET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0x156CB280)
#define FCLEMGPEMJJ__GET_OPENEXTRAFILTERCOMMAND_B__27_0_OFFSET UNITYSDK_OFFSET(0x156CD6D0)
#define FCLEMGPEMJJ___REFRESHMOLDSFULLY_B__46_0_OFFSET UNITYSDK_OFFSET(0x156CD700)

inline static constexpr unsigned int FCLEMGPEMJJ_TypeDefinitionIndex = 79461;

	class FCLEMGPEMJJ : public ::System::Object
	{
	public:
		::System::Action* HandleScrollToMold; // 0x10
		::LJHCJGNNMJD* JNIEKIAFNBA; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::ILOOAAOHIIG*>* _AllMolds_k__BackingField; // 0x20
		::CEEGMMCFCBG* OLFOEPECHIB; // 0x28
		::LOLCJIIIHIM* MPFFGNPIDOA; // 0x30
		::FCLEMGPEMJJ_CALHOBNPLPJ* OnMoldsChanged; // 0x38
		::BOJOBHMEEIH* GJALMBBNNOF; // 0x40
		::DBPFECFIKOM* FGBCFKOFOCB; // 0x48
		::CCEIJBFAOAI* JOKBAPFCJFM; // 0x50
		::System::Action* OnIsExtraFilteredChanged; // 0x58
		::JNBEDKMHFMN* IDCBCICOEJE; // 0x60
		::System::Collections::Generic::List_1<::ILOOAAOHIIG*>* AOHJGLJIFKI; // 0x68
		::PKJHLEOADGL* _FilterTabs_k__BackingField; // 0x70
		::System::Boolean DKMFINHBKHA; // 0x78
		::System::Boolean LINNHMPNCJG; // 0x79
		::System::Void _ctor(::BOJOBHMEEIH* a1, ::LOLCJIIIHIM* a2, ::CCEIJBFAOAI* a3, ::LJHCJGNNMJD* a4, ::JNBEDKMHFMN* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BOJOBHMEEIH*, ::LOLCJIIIHIM*, ::CCEIJBFAOAI*, ::LJHCJGNNMJD*, ::JNBEDKMHFMN*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::IReadOnlyList_1<::ILOOAAOHIIG*>* get_AllMolds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::ILOOAAOHIIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_GET_ALLMOLDS_OFFSET))(this);
		}

		::System::Void set_AllMolds(::System::Collections::Generic::IReadOnlyList_1<::ILOOAAOHIIG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::ILOOAAOHIIG*>*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_SET_ALLMOLDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::ILOOAAOHIIG*>* GKIMOCMNAMJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::ILOOAAOHIIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_GKIMOCMNAMJ_OFFSET))(this);
		}

		::System::Void add_OnMoldsChanged(::FCLEMGPEMJJ_CALHOBNPLPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCLEMGPEMJJ_CALHOBNPLPJ*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_ADD_ONMOLDSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMoldsChanged(::FCLEMGPEMJJ_CALHOBNPLPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCLEMGPEMJJ_CALHOBNPLPJ*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_REMOVE_ONMOLDSCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_HandleScrollToMold(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_ADD_HANDLESCROLLTOMOLD_OFFSET))(this, a1);
		}

		::System::Void remove_HandleScrollToMold(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_REMOVE_HANDLESCROLLTOMOLD_OFFSET))(this, a1);
		}

		::PKJHLEOADGL* get_FilterTabs()
		{
			return ((::PKJHLEOADGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_GET_FILTERTABS_OFFSET))(this);
		}

		::System::Void set_FilterTabs(::PKJHLEOADGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKJHLEOADGL*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_SET_FILTERTABS_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* FJPPBHJMGOC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_FJPPBHJMGOC_OFFSET))(this);
		}

		::System::Boolean BNEKJKKAOPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_BNEKJKKAOPC_OFFSET))(this);
		}

		::System::Void NCDHCJNLICG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_NCDHCJNLICG_OFFSET))(this, a1);
		}

		::System::Void add_OnIsExtraFilteredChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_ADD_ONISEXTRAFILTEREDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsExtraFilteredChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_REMOVE_ONISEXTRAFILTEREDCHANGED_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void IJLCGGEOLHK(::CHGHIALKMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_IJLCGGEOLHK_OFFSET))(this, a1);
		}

		::System::Void MCGLIOEMLIP(::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_MCGLIOEMLIP_OFFSET))(this, a1);
		}

		::System::Void JJPPIKGOFAB(::System::Object* a1, ::FCLEMGPEMJJ_BLBIIBDHFNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::FCLEMGPEMJJ_BLBIIBDHFNF*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_JJPPIKGOFAB_OFFSET))(this, a1, a2);
		}

		::System::Void BMNAPGDGJAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_BMNAPGDGJAO_OFFSET))(this);
		}

		::System::Void EECANDIIGGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_EECANDIIGGM_OFFSET))(this);
		}

		::System::Void KPLADHPLFAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_KPLADHPLFAO_OFFSET))(this);
		}

		::System::Void CDAKNOCPKAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_CDAKNOCPKAH_OFFSET))(this);
		}

		::System::Void MILABDEJOMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_MILABDEJOMO_OFFSET))(this);
		}

		::System::Int32 FNDDFECHAMP(::ILOOAAOHIIG* a1, ::ILOOAAOHIIG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::ILOOAAOHIIG*, ::ILOOAAOHIIG*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_FNDDFECHAMP_OFFSET))(this, a1, a2);
		}

		::System::Void _get_OpenExtraFilterCommand_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ__GET_OPENEXTRAFILTERCOMMAND_B__27_0_OFFSET))(this);
		}

		::System::Boolean __RefreshMoldsFully_b__46_0(::ILOOAAOHIIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILOOAAOHIIG*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ___REFRESHMOLDSFULLY_B__46_0_OFFSET))(this, a1);
		}

	};
