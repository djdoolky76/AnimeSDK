#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKKJIPHOOBK.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupSuiteChangeData.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class GEKNEEMAHBC;
class HGGBGKKEBCC;
class HHNIOENFMAG;
class HIAOHJOJBEH_AJBHFHHDPNN;
class JCKLKIENABP;
namespace MoleMole { class SceneSoundData; }
namespace MoleMole { class SceneSoundEmitterSpaceShapeParam; }
namespace MoleMole { class SceneSoundPolygonData; }
namespace MoleMole { class SceneSoundPortalData; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HIAOHJOJBEH_AAJJDOMFFBG_OFFSET UNITYSDK_OFFSET(0x13D910E0)
#define HIAOHJOJBEH_ADFAKCJMHDO_OFFSET UNITYSDK_OFFSET(0x13D99D30)
#define HIAOHJOJBEH_AMAIBDCJIHD_OFFSET UNITYSDK_OFFSET(0x13D9C990)
#define HIAOHJOJBEH_ANCEODPJNED_OFFSET UNITYSDK_OFFSET(0x13D9C900)
#define HIAOHJOJBEH_BACMAJKGBMI_OFFSET UNITYSDK_OFFSET(0x13D8F880)
#define HIAOHJOJBEH_BDCOJJIIIJI_OFFSET UNITYSDK_OFFSET(0x13D96F50)
#define HIAOHJOJBEH_BIDEGAMFKBB_OFFSET UNITYSDK_OFFSET(0x13D9BED0)
#define HIAOHJOJBEH_BIIPAMDBDLD_OFFSET UNITYSDK_OFFSET(0x13D9DF50)
#define HIAOHJOJBEH_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x13D9CF30)
#define HIAOHJOJBEH_BOCDAHGKKCE_OFFSET UNITYSDK_OFFSET(0x13D9DDE0)
#define HIAOHJOJBEH_BONDLLNFHFC_OFFSET UNITYSDK_OFFSET(0x13D93C30)
#define HIAOHJOJBEH_CLEFNGDCFOC_OFFSET UNITYSDK_OFFSET(0x13D9D060)
#define HIAOHJOJBEH_CMPOJDFNEOB_OFFSET UNITYSDK_OFFSET(0x13D94A30)
#define HIAOHJOJBEH_CNMJIMBHCAE_OFFSET UNITYSDK_OFFSET(0x13D8EC60)
#define HIAOHJOJBEH_DADEFBGCADD_OFFSET UNITYSDK_OFFSET(0x13D993F0)
#define HIAOHJOJBEH_DBAALCCLBBA_OFFSET UNITYSDK_OFFSET(0x13D99900)
#define HIAOHJOJBEH_DGODJHPGPDP_OFFSET UNITYSDK_OFFSET(0x13D94EC0)
#define HIAOHJOJBEH_DIPKNMJGBNH_OFFSET UNITYSDK_OFFSET(0x13D9A330)
#define HIAOHJOJBEH_DJAKPKMCJCL_OFFSET UNITYSDK_OFFSET(0x13D924F0)
#define HIAOHJOJBEH_DNENJLAOLNG_OFFSET UNITYSDK_OFFSET(0x13D99B40)
#define HIAOHJOJBEH_EBDFPAFIFOI_OFFSET UNITYSDK_OFFSET(0x13D93FC0)
#define HIAOHJOJBEH_FDECDBAPJIM_OFFSET UNITYSDK_OFFSET(0x13D91BF0)
#define HIAOHJOJBEH_FDEHJLDDEFM_OFFSET UNITYSDK_OFFSET(0x13D9BE40)
#define HIAOHJOJBEH_FDINEALPBLB_OFFSET UNITYSDK_OFFSET(0x13D93690)
#define HIAOHJOJBEH_FJEKIPNBNLJ_OFFSET UNITYSDK_OFFSET(0x13D9D8D0)
#define HIAOHJOJBEH_GAIPCIFKMCC_OFFSET UNITYSDK_OFFSET(0x13D9B620)
#define HIAOHJOJBEH_GANGCIOMJPG_OFFSET UNITYSDK_OFFSET(0x13D99EA0)
#define HIAOHJOJBEH_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x13D8DCD0)
#define HIAOHJOJBEH_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x13D8DCC0)
#define HIAOHJOJBEH_GKIHPDJEPGD_OFFSET UNITYSDK_OFFSET(0x13D9B000)
#define HIAOHJOJBEH_GKOPKGOFEHE_OFFSET UNITYSDK_OFFSET(0x13D91CE0)
#define HIAOHJOJBEH_GLJLKGMCHGG_OFFSET UNITYSDK_OFFSET(0x13D93A50)
#define HIAOHJOJBEH_GLKACALKAGP_OFFSET UNITYSDK_OFFSET(0x13D9DFB0)
#define HIAOHJOJBEH_HIJCABAJLEH_OFFSET UNITYSDK_OFFSET(0x13D912F0)
#define HIAOHJOJBEH_HLBCIMGEODH_OFFSET UNITYSDK_OFFSET(0x13D91F80)
#define HIAOHJOJBEH_HNJIOHIHOBL_OFFSET UNITYSDK_OFFSET(0x13D9D880)
#define HIAOHJOJBEH_HPBPJMGFKFE_OFFSET UNITYSDK_OFFSET(0x13D9A390)
#define HIAOHJOJBEH_ILLIIKKPFMC_OFFSET UNITYSDK_OFFSET(0x13D960A0)
#define HIAOHJOJBEH_IMDDEGJICBP_OFFSET UNITYSDK_OFFSET(0x13D959B0)
#define HIAOHJOJBEH_JAKEBBBPDNG_OFFSET UNITYSDK_OFFSET(0x13D9BA80)
#define HIAOHJOJBEH_JDEINFIACPI_OFFSET UNITYSDK_OFFSET(0x13D8FE90)
#define HIAOHJOJBEH_JLCBJPKBKHD_OFFSET UNITYSDK_OFFSET(0x13D9B9F0)
#define HIAOHJOJBEH_JMJDKAHFGDH_OFFSET UNITYSDK_OFFSET(0x13D8E8F0)
#define HIAOHJOJBEH_JOEMCOANBFC_OFFSET UNITYSDK_OFFSET(0x13D95A70)
#define HIAOHJOJBEH_KCMEJOMDDAD_OFFSET UNITYSDK_OFFSET(0x13D99D40)
#define HIAOHJOJBEH_KIJHFFNKKFJ_OFFSET UNITYSDK_OFFSET(0x13D98C70)
#define HIAOHJOJBEH_LILDCMPNICF_OFFSET UNITYSDK_OFFSET(0x13D9D960)
#define HIAOHJOJBEH_LLMPLNJFOME_OFFSET UNITYSDK_OFFSET(0x13D9C860)
#define HIAOHJOJBEH_MLOBLGLPBEA_OFFSET UNITYSDK_OFFSET(0x13D9DA50)
#define HIAOHJOJBEH_MOIECKNONAN_OFFSET UNITYSDK_OFFSET(0x13D95B20)
#define HIAOHJOJBEH_MPBMHFIABBE_OFFSET UNITYSDK_OFFSET(0x13D95F10)
#define HIAOHJOJBEH_NDMCFPENFDK_OFFSET UNITYSDK_OFFSET(0x13D99190)
#define HIAOHJOJBEH_NIKGFJOMGKI_OFFSET UNITYSDK_OFFSET(0x13D9D9F0)
#define HIAOHJOJBEH_NJABDIIOCGL_OFFSET UNITYSDK_OFFSET(0x13D8FDF0)
#define HIAOHJOJBEH_NMCBBNAJHKM_OFFSET UNITYSDK_OFFSET(0x13D9C870)
#define HIAOHJOJBEH_OFABGMBJEJH_OFFSET UNITYSDK_OFFSET(0x13D98D00)
#define HIAOHJOJBEH_OFABNKGAPPE_OFFSET UNITYSDK_OFFSET(0x13D92A80)
#define HIAOHJOJBEH_OIECDMAAILE_OFFSET UNITYSDK_OFFSET(0x13D9AD70)
#define HIAOHJOJBEH_OIPMDEABPHM_OFFSET UNITYSDK_OFFSET(0x13D9AE00)
#define HIAOHJOJBEH_OKFKFPKKLLB_OFFSET UNITYSDK_OFFSET(0x13D9CFD0)
#define HIAOHJOJBEH_OLFGFGJGDKM_OFFSET UNITYSDK_OFFSET(0x13D947C0)
#define HIAOHJOJBEH_ONGROUPSUITECHANGED_OFFSET UNITYSDK_OFFSET(0x13D94480)
#define HIAOHJOJBEH_ONKBMLPBNAP_OFFSET UNITYSDK_OFFSET(0x13D908F0)
#define HIAOHJOJBEH_OPBDOOENBMD_OFFSET UNITYSDK_OFFSET(0x13D8F0C0)
#define HIAOHJOJBEH_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x13D948B0)
#define HIAOHJOJBEH_PHPAFBPNENN_OFFSET UNITYSDK_OFFSET(0x13D95F50)
#define HIAOHJOJBEH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13D92E20)
#define HIAOHJOJBEH_PPEGINIKHHD_OFFSET UNITYSDK_OFFSET(0x13D98310)
#define HIAOHJOJBEH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D94810)
#define HIAOHJOJBEH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8DD10)

inline static constexpr unsigned int HIAOHJOJBEH_TypeDefinitionIndex = 72954;

class HIAOHJOJBEH : public ::KKKJIPHOOBK
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::MoleMole::SceneSoundPolygonData*>>** StaticGet_GOAFFFOPEAM()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::MoleMole::SceneSoundPolygonData*>>**)Il2CppClass::FromTypeDefinitionIndex(HIAOHJOJBEH_TypeDefinitionIndex)->GetStaticField(0x4D080);
	}
	static ::System::UInt64* StaticGet_DGBEFLAEDIL()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(HIAOHJOJBEH_TypeDefinitionIndex)->GetStaticField(0x120E0);
	}
	// static const ::System::Int32 NBCEPJAHODI = 0x5; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* LMHMDCECLNG; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::MoleMole::SceneSoundPolygonData*>>* GNFHDNGAMPK; // 0x20
	::System::String* EIIIAEFMBNC; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* GJPCPCBIFNF; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* BDKLLFOOIIJ; // 0x38
	::UnityEngine::GameObject* JHLDFDIFPOA; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* ILCADBMDOHB; // 0x48
	::MoleMole::SceneSoundPolygonData* HBINDELGFGL; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* KDNCIMANPEL; // 0x58
	::System::Collections::Generic::HashSet_1<::System::String*>* PNAFMFCKDJL; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* FCDEAHHGHAH; // 0x68
	::MoleMole::SceneSoundData* IMHGDMCGPCF; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* GJIJAGBIHHM; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* FMPKCFNJMMK; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneSoundPolygonData*>* OKFPMCGCFPG; // 0x88
	::System::Collections::Generic::HashSet_1<::System::String*>* LDLAHHCMOMM; // 0x90
	::HHNIOENFMAG* KKCGJHGCDHD; // 0x98
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* AHHINHMFNLA; // 0xA0
	::System::String* LIAGMGMAGJN; // 0xA8
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>* HKDELOAEBGD; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::String*>* FKCCCNNHKPD; // 0xB8
	::System::Collections::Generic::List_1<::System::String*>* NOCJDLNLDGC; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* FJFGIFFJKDH; // 0xC8
	::System::Collections::Generic::HashSet_1<::System::String*>* KKDJILKBJAP; // 0xD0
	::System::Collections::Generic::HashSet_1<::System::String*>* CEMBHDOGOAO; // 0xD8
	::System::Collections::Generic::HashSet_1<::System::String*>* OLFJACIFIHG; // 0xE0
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* HMLENKNHBBF; // 0xE8
	::System::Collections::Generic::HashSet_1<::System::String*>* FHEFKBMHEJP; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* EJEEPMPPOMN; // 0xF8
	::System::Collections::Generic::HashSet_1<::System::String*>* AMMJGNEDAGG; // 0x100
	::MoleMole::Config::TimePeriodType KKKGDDPPIHP; // 0x108
	::System::Single IBAAILONCHD; // 0x10C
	::System::Int32 DFJKCLKJAKK; // 0x110
	::System::UInt32 NDFKBCHOHIF; // 0x114
	::System::Int32 OHAMAGNEMIG; // 0x118
	::System::Boolean PCFGEKANBGP; // 0x11C
	::System::Boolean AEPPJHCBBNB; // 0x11D
	::System::Byte _padding0[0x2];
	::System::Int32 ADFFKEGADMI; // 0x120
	::System::Boolean GJDGKJGNOBP; // 0x124
	::System::Boolean AIGKJPJKKOL; // 0x125
	::System::Boolean OJDHKKOODPN; // 0x126
	::System::Boolean DHIEEJEJPJN; // 0x127
	::System::Int32 KIALMFOENDI; // 0x128
	::System::Int32 AECJMMCFJDF; // 0x12C
	::System::Int32 KMKLIKBCKPA; // 0x130
	::System::UInt32 IIFMJFJOOCK; // 0x134
	::System::Int32 NOMCHONEIIB; // 0x138

	::System::Void _ctor(::JCKLKIENABP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JCKLKIENABP*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAOHJOJBEH__CCTOR_OFFSET))();
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void JMJDKAHFGDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_JMJDKAHFGDH_OFFSET))(this);
	}

	::System::Void CNMJIMBHCAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_CNMJIMBHCAE_OFFSET))(this);
	}

	::System::Void OPBDOOENBMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_OPBDOOENBMD_OFFSET))(this);
	}

	::System::Void ONKBMLPBNAP(::System::String* JNEPCCIHBMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_ONKBMLPBNAP_OFFSET))(this, JNEPCCIHBMB);
	}

	::System::Void HIJCABAJLEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_HIJCABAJLEH_OFFSET))(this);
	}

	::System::Void DJAKPKMCJCL(::GEKNEEMAHBC* NALHCEONDDN)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_DJAKPKMCJCL_OFFSET))(this, NALHCEONDDN);
	}

	::System::Void OFABNKGAPPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_OFABNKGAPPE_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OnGroupSuiteChanged(::Foundation::ViewObject::Subsystem::GroupSuiteChangeData LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupSuiteChangeData))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_ONGROUPSUITECHANGED_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void PGHAJOMNDDJ(::System::Int32 MCOHLHMKLIP, ::System::UInt32 GFOPLDDFDIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_PGHAJOMNDDJ_OFFSET))(this, MCOHLHMKLIP, GFOPLDDFDIA);
	}

	::System::Void CMPOJDFNEOB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_CMPOJDFNEOB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void DGODJHPGPDP(::System::Int32 KLJNHMGMDNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_DGODJHPGPDP_OFFSET))(this, KLJNHMGMDNP);
	}

	::System::Void IMDDEGJICBP(::MoleMole::SceneSoundPolygonData* MEIMPOIMAIH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_IMDDEGJICBP_OFFSET))(this, MEIMPOIMAIH);
	}

	::System::Void BACMAJKGBMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_BACMAJKGBMI_OFFSET))(this);
	}

	::UnityEngine::Vector3 JOEMCOANBFC(::System::Collections::Generic::List_1<::System::Single>* DJLOKMMLFJC)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_JOEMCOANBFC_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void MOIECKNONAN(::HGGBGKKEBCC* HMMMOCJAEOA, ::GEIHCPAOKKK* LHPFMGBDFPN)
	{
		return ((::System::Void(*)(::PVOID, ::HGGBGKKEBCC*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_MOIECKNONAN_OFFSET))(this, HMMMOCJAEOA, LHPFMGBDFPN);
	}

	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* MPBMHFIABBE()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_MPBMHFIABBE_OFFSET))(this);
	}

	::System::Void PHPAFBPNENN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_PHPAFBPNENN_OFFSET))(this);
	}

	::System::Void BDCOJJIIIJI(::System::Int32 JPFLPHECEBO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_BDCOJJIIIJI_OFFSET))(this, JPFLPHECEBO);
	}

	::System::Void AAJJDOMFFBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_AAJJDOMFFBG_OFFSET))(this);
	}

	::System::Void KIJHFFNKKFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_KIJHFFNKKFJ_OFFSET))(this);
	}

	::System::Void OFABGMBJEJH(::UnityEngine::GameObject* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_OFABGMBJEJH_OFFSET))(this, IAPKABMDJNF);
	}

	::System::Void NDMCFPENFDK(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_NDMCFPENFDK_OFFSET))(this, NJOAJLDJCCJ);
	}

	::System::Void DADEFBGCADD(::System::Int32 MCOHLHMKLIP, ::HIAOHJOJBEH_AJBHFHHDPNN* LJBPECKCCEA, ::UnityEngine::Vector3 LLBLNEJLFIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::HIAOHJOJBEH_AJBHFHHDPNN*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_DADEFBGCADD_OFFSET))(this, MCOHLHMKLIP, LJBPECKCCEA, LLBLNEJLFIE);
	}

	::HHNIOENFMAG* ADFAKCJMHDO()
	{
		return ((::HHNIOENFMAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_ADFAKCJMHDO_OFFSET))(this);
	}

	::System::Void KCMEJOMDDAD(::MoleMole::Config::WeatherType GHPGIDAMMOP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_KCMEJOMDDAD_OFFSET))(this, GHPGIDAMMOP);
	}

	::System::Void GANGCIOMJPG(::UnityEngine::GameObject* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_GANGCIOMJPG_OFFSET))(this, IAPKABMDJNF);
	}

	::System::Boolean BONDLLNFHFC(::MoleMole::SceneSoundPolygonData* MEIMPOIMAIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_BONDLLNFHFC_OFFSET))(this, MEIMPOIMAIH);
	}

	::System::Boolean DIPKNMJGBNH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_DIPKNMJGBNH_OFFSET))(this);
	}

	::System::Void DNENJLAOLNG(::HIAOHJOJBEH_AJBHFHHDPNN* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::HIAOHJOJBEH_AJBHFHHDPNN*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_DNENJLAOLNG_OFFSET))(this, LJBPECKCCEA);
	}

	::UnityEngine::Vector3 HPBPJMGFKFE(::UnityEngine::Vector3 LLBLNEJLFIE, ::UnityEngine::Transform* BHJMFDHPPLG, ::MoleMole::SceneSoundEmitterSpaceShapeParam* HNOPAJLDCFB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::MoleMole::SceneSoundEmitterSpaceShapeParam*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_HPBPJMGFKFE_OFFSET))(this, LLBLNEJLFIE, BHJMFDHPPLG, HNOPAJLDCFB);
	}

	::System::Void JDEINFIACPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_JDEINFIACPI_OFFSET))(this);
	}

	::System::Void OIECDMAAILE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_OIECDMAAILE_OFFSET))(this);
	}

	::System::Single OIPMDEABPHM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_OIPMDEABPHM_OFFSET))(this);
	}

	::System::Void GKIHPDJEPGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_GKIHPDJEPGD_OFFSET))(this);
	}

	::System::Void HLBCIMGEODH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_HLBCIMGEODH_OFFSET))(this);
	}

	::System::Void GAIPCIFKMCC(::UnityEngine::GameObject* NJOAJLDJCCJ, ::UnityEngine::Vector3 BOGPAHGJOJK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_GAIPCIFKMCC_OFFSET))(this, NJOAJLDJCCJ, BOGPAHGJOJK);
	}

	::System::Void EBDFPAFIFOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_EBDFPAFIFOI_OFFSET))(this);
	}

	::System::Void JLCBJPKBKHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_JLCBJPKBKHD_OFFSET))(this);
	}

	::System::Boolean JAKEBBBPDNG(::System::String* MCOHLHMKLIP, ::System::Boolean DECIDLELLCP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_JAKEBBBPDNG_OFFSET))(this, MCOHLHMKLIP, DECIDLELLCP);
	}

	::System::Void FDEHJLDDEFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_FDEHJLDDEFM_OFFSET))(this);
	}

	::System::Void ILLIIKKPFMC(::System::Collections::Generic::List_1<::System::String*>* HMJNHIGPLCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_ILLIIKKPFMC_OFFSET))(this, HMJNHIGPLCD);
	}

	::System::Void BIDEGAMFKBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_BIDEGAMFKBB_OFFSET))(this);
	}

	::MoleMole::SceneSoundData* LLMPLNJFOME()
	{
		return ((::MoleMole::SceneSoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_LLMPLNJFOME_OFFSET))(this);
	}

	static ::System::UInt32 OLFGFGJGDKM(::Foundation::ViewObject::SuiteInfo DOJFEJPBANP)
	{
		return ((::System::UInt32(*)(::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_OLFGFGJGDKM_OFFSET))(DOJFEJPBANP);
	}

	::System::Void NMCBBNAJHKM(::GEKNEEMAHBC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_NMCBBNAJHKM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GKOPKGOFEHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_GKOPKGOFEHE_OFFSET))(this);
	}

	::System::Void ANCEODPJNED(::System::String* MIHBPMANGOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_ANCEODPJNED_OFFSET))(this, MIHBPMANGOH);
	}

	::System::Single AMAIBDCJIHD(::MoleMole::SceneSoundPolygonData* AGMOENAACOC, ::MoleMole::SceneSoundPolygonData* GKIFPJDINCG, ::System::Collections::Generic::List_1<::MoleMole::SceneSoundPortalData*>* DIGLCPGHBOC)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*, ::MoleMole::SceneSoundPolygonData*, ::System::Collections::Generic::List_1<::MoleMole::SceneSoundPortalData*>*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_AMAIBDCJIHD_OFFSET))(this, AGMOENAACOC, GKIFPJDINCG, DIGLCPGHBOC);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PPEGINIKHHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_PPEGINIKHHD_OFFSET))(this);
	}

	::System::Void OKFKFPKKLLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_OKFKFPKKLLB_OFFSET))(this);
	}

	::System::Void CLEFNGDCFOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_CLEFNGDCFOC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* HNJIOHIHOBL()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_HNJIOHIHOBL_OFFSET))(this);
	}

	::System::Void FDINEALPBLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_FDINEALPBLB_OFFSET))(this);
	}

	::System::Void FDECDBAPJIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_FDECDBAPJIM_OFFSET))(this);
	}

	::System::Void FJEKIPNBNLJ(::System::String* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_FJEKIPNBNLJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NJABDIIOCGL(::System::Int32 JPFLPHECEBO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_NJABDIIOCGL_OFFSET))(this, JPFLPHECEBO);
	}

	::System::Void DBAALCCLBBA(::HIAOHJOJBEH_AJBHFHHDPNN* LJBPECKCCEA, ::UnityEngine::Vector3 LLBLNEJLFIE)
	{
		return ((::System::Void(*)(::PVOID, ::HIAOHJOJBEH_AJBHFHHDPNN*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_DBAALCCLBBA_OFFSET))(this, LJBPECKCCEA, LLBLNEJLFIE);
	}

	::System::Void LILDCMPNICF(::System::String* ELBNLFIIIFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_LILDCMPNICF_OFFSET))(this, ELBNLFIIIFF);
	}

	::System::Void NIKGFJOMGKI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_NIKGFJOMGKI_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void MLOBLGLPBEA(::System::Int32 BBOLKIABJHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_MLOBLGLPBEA_OFFSET))(this, BBOLKIABJHA);
	}

	::System::Void GLJLKGMCHGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_GLJLKGMCHGG_OFFSET))(this);
	}

	::System::Void BOCDAHGKKCE(::System::Collections::Generic::List_1<::System::String*>* HMJNHIGPLCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_BOCDAHGKKCE_OFFSET))(this, HMJNHIGPLCD);
	}

	::System::Void BIIPAMDBDLD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_BIIPAMDBDLD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GLKACALKAGP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_GLKACALKAGP_OFFSET))(this, KOIBHLHLMFC);
	}
};
