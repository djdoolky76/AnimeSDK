#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPJFIPNGENE_WorkProcessResult.h"
#include "unitysdk/RPG/Work/WorkFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MPJFIPNGENE_LPDMNOBJLJP.h"
class FGCKOPDAIIN;
class HFOBONNBKON;
class MPJFIPNGENE_BINIMIDHMOP;
class MPJFIPNGENE_EMMJOPKIKOL;
class MPJFIPNGENE_FKPNCJBNGOH;
class MPJFIPNGENE_JLNLFPGEHKD;
class MPJFIPNGENE_LLFKBBOJKOE;
class NNDAJDLAHNC;
class OIJOKMHJKLJ;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Text { class StringBuilder; }

#define MPJFIPNGENE_ADD__WORKSTEPBEGINEVENT_OFFSET UNITYSDK_OFFSET(0x208C8820)
#define MPJFIPNGENE_ADD__WORKSTEPENDEVENT_OFFSET UNITYSDK_OFFSET(0x208C8920)
#define MPJFIPNGENE_AOAALBINIOA_OFFSET UNITYSDK_OFFSET(0x208C8B80)
#define MPJFIPNGENE_AOLPHFCHNEC_OFFSET UNITYSDK_OFFSET(0x208C7220)
#define MPJFIPNGENE_APCFMKJMGDG_OFFSET UNITYSDK_OFFSET(0x208C7BC0)
#define MPJFIPNGENE_BDCDCNBGMBB_OFFSET UNITYSDK_OFFSET(0x208C7AA0)
#define MPJFIPNGENE_BFFGDHKCOLH_OFFSET UNITYSDK_OFFSET(0x208C6AC0)
#define MPJFIPNGENE_CIDDNNNPBOH_OFFSET UNITYSDK_OFFSET(0x208C6700)
#define MPJFIPNGENE_CNFAHEPDICA_OFFSET UNITYSDK_OFFSET(0x208C6D20)
#define MPJFIPNGENE_CTOR_OFFSET UNITYSDK_OFFSET(0x208C7830)
#define MPJFIPNGENE_DBCNHOEDJKO_OFFSET UNITYSDK_OFFSET(0x208C60A0)
#define MPJFIPNGENE_DFMOIGFNEFO_OFFSET UNITYSDK_OFFSET(0x208C7300)
#define MPJFIPNGENE_DHKAONPIAHK_1_OFFSET UNITYSDK_OFFSET(0x208C9440)
#define MPJFIPNGENE_DHKAONPIAHK_OFFSET UNITYSDK_OFFSET(0x208C8D20)
#define MPJFIPNGENE_ENBEFICBGAO_OFFSET UNITYSDK_OFFSET(0x208C9990)
#define MPJFIPNGENE_GAAEJFABIHD_OFFSET UNITYSDK_OFFSET(0x208C8F00)
#define MPJFIPNGENE_GAHAOCGKHDJ_OFFSET UNITYSDK_OFFSET(0x208C7B10)
#define MPJFIPNGENE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x208C9F10)
#define MPJFIPNGENE_GPGAJMMJBHJ_OFFSET UNITYSDK_OFFSET(0x208C7060)
#define MPJFIPNGENE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x208C7380)
#define MPJFIPNGENE_HJHIOGEBGIJ_OFFSET UNITYSDK_OFFSET(0x208C8FF0)
#define MPJFIPNGENE_HJLBIJBHGLB_OFFSET UNITYSDK_OFFSET(0x208C6DC0)
#define MPJFIPNGENE_HLMIFBAAJHI_OFFSET UNITYSDK_OFFSET(0x208C8310)
#define MPJFIPNGENE_HNHEEADMDEI_OFFSET UNITYSDK_OFFSET(0x208C8320)
#define MPJFIPNGENE_IJNPCNICKCO_OFFSET UNITYSDK_OFFSET(0x208C9EF0)
#define MPJFIPNGENE_IKJLOOEKEND_OFFSET UNITYSDK_OFFSET(0x208C7BE0)
#define MPJFIPNGENE_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x208C7550)
#define MPJFIPNGENE_JCGBKPLJFCF_OFFSET UNITYSDK_OFFSET(0x208C9380)
#define MPJFIPNGENE_JDBFNGPEOMN_OFFSET UNITYSDK_OFFSET(0x208C9330)
#define MPJFIPNGENE_JLPCPPADNKA_OFFSET UNITYSDK_OFFSET(0x208C6300)
#define MPJFIPNGENE_KJKNCBIAGPG_OFFSET UNITYSDK_OFFSET(0x208C6BB0)
#define MPJFIPNGENE_KOJEEFFDLEN_OFFSET UNITYSDK_OFFSET(0x208C6F30)
#define MPJFIPNGENE_LIACJEIDNCN_OFFSET UNITYSDK_OFFSET(0x208C9D60)
#define MPJFIPNGENE_MMGOEEPPKBA_OFFSET UNITYSDK_OFFSET(0x208C7B40)
#define MPJFIPNGENE_MOHGOCDDBDH_OFFSET UNITYSDK_OFFSET(0x208C7B60)
#define MPJFIPNGENE_NLHNIDBNBBP_OFFSET UNITYSDK_OFFSET(0x208C9B20)
#define MPJFIPNGENE_OBIMGIBANFL_OFFSET UNITYSDK_OFFSET(0x208C8460)
#define MPJFIPNGENE_OECHPFBMPKK_OFFSET UNITYSDK_OFFSET(0x208C7140)
#define MPJFIPNGENE_OMAPLMBJEGE_OFFSET UNITYSDK_OFFSET(0x208C7AD0)
#define MPJFIPNGENE_ONMFMKECIPD_OFFSET UNITYSDK_OFFSET(0x208C89B0)
#define MPJFIPNGENE_PGMHKOODANE_OFFSET UNITYSDK_OFFSET(0x208C6890)
#define MPJFIPNGENE_PHBNJKGBPMK_OFFSET UNITYSDK_OFFSET(0x208C8AF0)
#define MPJFIPNGENE_PIJOFBIDOAJ_1_OFFSET UNITYSDK_OFFSET(0x208C6260)
#define MPJFIPNGENE_PIJOFBIDOAJ_OFFSET UNITYSDK_OFFSET(0x208C6150)
#define MPJFIPNGENE_PIMJNHFAHOC_OFFSET UNITYSDK_OFFSET(0x208C89A0)
#define MPJFIPNGENE_REMOVE__WORKSTEPBEGINEVENT_OFFSET UNITYSDK_OFFSET(0x208C87A0)
#define MPJFIPNGENE_REMOVE__WORKSTEPENDEVENT_OFFSET UNITYSDK_OFFSET(0x208C88A0)
#define MPJFIPNGENE_SET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x208C9F20)

inline static constexpr unsigned int MPJFIPNGENE_TypeDefinitionIndex = 45096;

	class MPJFIPNGENE : public ::System::Object
	{
	public:
		::MPJFIPNGENE_JLNLFPGEHKD* LMOGHCBPEML; // 0x10
		::System::Collections::Generic::Queue_1<::System::Object*>* JAHEEAOPJBG; // 0x18
		::MPJFIPNGENE_EMMJOPKIKOL* EEPHNOEOCIO; // 0x20
		::HFOBONNBKON* GFOIGAAIKBE; // 0x28
		::System::Text::StringBuilder* KJBBKIGHEDD; // 0x30
		::System::Collections::Generic::Queue_1<::System::Object*>* CMJGPOILMHG; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* EKNCBEKIBMK; // 0x40
		::MPJFIPNGENE_BINIMIDHMOP* _WorkStepBeginEvent; // 0x48
		::MPJFIPNGENE_BINIMIDHMOP* _WorkStepEndEvent; // 0x50
		::System::Collections::Generic::List_1<::System::Object*>* JIEIINNJOCP; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* LDPBKCPLAMF; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* MNDMNPCGEGM; // 0x68
		::System::Single HFEGJAAACNF; // 0x70
		::System::Single NFDABFPBILG; // 0x74
		::System::Boolean DDNNINBEOLO; // 0x78
		::System::Boolean KELPMMLCMMN; // 0x79
		::System::Byte _padding0[0x2];
		::System::Single OKBNPLJKIGF; // 0x7C
		::System::UInt32 _FrameCount_k__BackingField; // 0x80
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MPJFIPNGENE_CTOR_OFFSET))(this, a1);
		}

		::OIJOKMHJKLJ* PIJOFBIDOAJ(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* a2, ::Il2CppArray<::FGCKOPDAIIN*>* a3)
		{
			return ((::OIJOKMHJKLJ*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*, ::Il2CppArray<::FGCKOPDAIIN*>*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PIJOFBIDOAJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OMAPLMBJEGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MPJFIPNGENE_OMAPLMBJEGE_OFFSET))(this, a1);
		}

		::OIJOKMHJKLJ* PIJOFBIDOAJ_1(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* a2, ::RPG::Work::WorkFlags a3, ::Il2CppArray<::FGCKOPDAIIN*>* a4)
		{
			return ((::OIJOKMHJKLJ*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*, ::RPG::Work::WorkFlags, ::Il2CppArray<::FGCKOPDAIIN*>*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PIJOFBIDOAJ_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>* CIDDNNNPBOH(::System::Collections::Generic::List_1<::System::Action*>* a1, ::RPG::Work::WorkFlags a2)
		{
			return ((::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Action*>*, ::RPG::Work::WorkFlags))((::PBYTE)hIl2Cpp + MPJFIPNGENE_CIDDNNNPBOH_OFFSET))(this, a1, a2);
		}

		::OIJOKMHJKLJ* JLPCPPADNKA(::System::Action* a1, ::RPG::Work::WorkFlags a2, ::Il2CppArray<::FGCKOPDAIIN*>* a3)
		{
			return ((::OIJOKMHJKLJ*(*)(::PVOID, ::System::Action*, ::RPG::Work::WorkFlags, ::Il2CppArray<::FGCKOPDAIIN*>*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_JLPCPPADNKA_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>* PGMHKOODANE()
		{
			return ((::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PGMHKOODANE_OFFSET))(this);
		}

		::System::Void JBGIFBGMLMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_JBGIFBGMLMF_OFFSET))(this);
		}

		::System::Void BFFGDHKCOLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BFFGDHKCOLH_OFFSET))(this, a1);
		}

		::System::Void KJKNCBIAGPG(::MPJFIPNGENE_BINIMIDHMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_BINIMIDHMOP*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_KJKNCBIAGPG_OFFSET))(this, a1);
		}

		::System::Void CNFAHEPDICA(::MPJFIPNGENE_BINIMIDHMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_BINIMIDHMOP*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_CNFAHEPDICA_OFFSET))(this, a1);
		}

		::System::Void HJLBIJBHGLB(::MPJFIPNGENE_BINIMIDHMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_BINIMIDHMOP*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_HJLBIJBHGLB_OFFSET))(this, a1);
		}

		::System::Void KOJEEFFDLEN(::MPJFIPNGENE_BINIMIDHMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_BINIMIDHMOP*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_KOJEEFFDLEN_OFFSET))(this, a1);
		}

		::System::Void GPGAJMMJBHJ(::MPJFIPNGENE_LLFKBBOJKOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_LLFKBBOJKOE*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_GPGAJMMJBHJ_OFFSET))(this, a1);
		}

		::System::Void OECHPFBMPKK(::MPJFIPNGENE_LLFKBBOJKOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_LLFKBBOJKOE*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_OECHPFBMPKK_OFFSET))(this, a1);
		}

		::System::Void AOLPHFCHNEC(::MPJFIPNGENE_FKPNCJBNGOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_FKPNCJBNGOH*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_AOLPHFCHNEC_OFFSET))(this, a1);
		}

		::System::Void DFMOIGFNEFO(::MPJFIPNGENE_FKPNCJBNGOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_FKPNCJBNGOH*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_DFMOIGFNEFO_OFFSET))(this, a1);
		}

		::System::Void PIMJNHFAHOC(::HFOBONNBKON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFOBONNBKON*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PIMJNHFAHOC_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean BDCDCNBGMBB(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BDCDCNBGMBB_OFFSET))(this, a1);
		}

		::System::Boolean ONMFMKECIPD(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_ONMFMKECIPD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* GAHAOCGKHDJ(::System::Action* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_GAHAOCGKHDJ_OFFSET))(this, a1);
		}

		::MPJFIPNGENE_EMMJOPKIKOL* AOAALBINIOA()
		{
			return ((::MPJFIPNGENE_EMMJOPKIKOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_AOAALBINIOA_OFFSET))(this);
		}

		::MPJFIPNGENE_WorkProcessResult IKJLOOEKEND(::MPJFIPNGENE_EMMJOPKIKOL* a1)
		{
			return ((::MPJFIPNGENE_WorkProcessResult(*)(::PVOID, ::MPJFIPNGENE_EMMJOPKIKOL*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_IKJLOOEKEND_OFFSET))(this, a1);
		}

		::System::Boolean GAAEJFABIHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_GAAEJFABIHD_OFFSET))(this);
		}

		::MPJFIPNGENE_WorkProcessResult DHKAONPIAHK(::MPJFIPNGENE_EMMJOPKIKOL* a1, ::MPJFIPNGENE_LPDMNOBJLJP a2)
		{
			return ((::MPJFIPNGENE_WorkProcessResult(*)(::PVOID, ::MPJFIPNGENE_EMMJOPKIKOL*, ::MPJFIPNGENE_LPDMNOBJLJP))((::PBYTE)hIl2Cpp + MPJFIPNGENE_DHKAONPIAHK_OFFSET))(this, a1, a2);
		}

		::MPJFIPNGENE_WorkProcessResult DHKAONPIAHK_1(::MPJFIPNGENE_EMMJOPKIKOL* a1, ::NNDAJDLAHNC* a2)
		{
			return ((::MPJFIPNGENE_WorkProcessResult(*)(::PVOID, ::MPJFIPNGENE_EMMJOPKIKOL*, ::NNDAJDLAHNC*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_DHKAONPIAHK_1_OFFSET))(this, a1, a2);
		}

		::System::Void HNHEEADMDEI(::MPJFIPNGENE_EMMJOPKIKOL* a1, ::MPJFIPNGENE_WorkProcessResult a2)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_EMMJOPKIKOL*, ::MPJFIPNGENE_WorkProcessResult))((::PBYTE)hIl2Cpp + MPJFIPNGENE_HNHEEADMDEI_OFFSET))(this, a1, a2);
		}

		::System::Void ENBEFICBGAO(::MPJFIPNGENE_EMMJOPKIKOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_EMMJOPKIKOL*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_ENBEFICBGAO_OFFSET))(this, a1);
		}

		::System::Void HJHIOGEBGIJ(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_HJHIOGEBGIJ_OFFSET))(this, a1);
		}

		::System::Void JDBFNGPEOMN(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_JDBFNGPEOMN_OFFSET))(this, a1);
		}

		::System::Void PHBNJKGBPMK(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PHBNJKGBPMK_OFFSET))(this, a1);
		}

		::System::Void JCGBKPLJFCF(::OIJOKMHJKLJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPJFIPNGENE_JCGBKPLJFCF_OFFSET))(this, a1, a2);
		}

		::System::Void NLHNIDBNBBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_NLHNIDBNBBP_OFFSET))(this);
		}

		::System::Void MOHGOCDDBDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_MOHGOCDDBDH_OFFSET))(this);
		}

		::System::Void APCFMKJMGDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_APCFMKJMGDG_OFFSET))(this);
		}

		::System::Void LIACJEIDNCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_LIACJEIDNCN_OFFSET))(this);
		}

		::System::Void OBIMGIBANFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_OBIMGIBANFL_OFFSET))(this);
		}

		::System::Boolean IJNPCNICKCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_IJNPCNICKCO_OFFSET))(this);
		}

		::System::Int32 DBCNHOEDJKO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_DBCNHOEDJKO_OFFSET))(this);
		}

		::System::UInt32 get_FrameCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Void set_FrameCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPJFIPNGENE_SET_FRAMECOUNT_OFFSET))(this, a1);
		}

		::System::Boolean HLMIFBAAJHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_HLMIFBAAJHI_OFFSET))(this);
		}

		::System::Void add__WorkStepBeginEvent(::MPJFIPNGENE_BINIMIDHMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_BINIMIDHMOP*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_ADD__WORKSTEPBEGINEVENT_OFFSET))(this, a1);
		}

		::System::Void remove__WorkStepBeginEvent(::MPJFIPNGENE_BINIMIDHMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_BINIMIDHMOP*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_REMOVE__WORKSTEPBEGINEVENT_OFFSET))(this, a1);
		}

		::System::Void add__WorkStepEndEvent(::MPJFIPNGENE_BINIMIDHMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_BINIMIDHMOP*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_ADD__WORKSTEPENDEVENT_OFFSET))(this, a1);
		}

		::System::Void remove__WorkStepEndEvent(::MPJFIPNGENE_BINIMIDHMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_BINIMIDHMOP*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_REMOVE__WORKSTEPENDEVENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Queue_1<::System::Object*>* MMGOEEPPKBA()
		{
			return ((::System::Collections::Generic::Queue_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJFIPNGENE_MMGOEEPPKBA_OFFSET))(this);
		}

	};
