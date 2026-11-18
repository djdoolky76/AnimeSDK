#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOELDGPPDPM_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x16CABC90)
#define MOELDGPPDPM_BGGNKBFHOOL_OFFSET UNITYSDK_OFFSET(0x16CAC1E0)
#define MOELDGPPDPM_BIOPEDOKKLI_OFFSET UNITYSDK_OFFSET(0x16CAC6E0)
#define MOELDGPPDPM_CHNGCIIBBKN_OFFSET UNITYSDK_OFFSET(0x16CABF70)
#define MOELDGPPDPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CABAB0)
#define MOELDGPPDPM_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16CAC750)
#define MOELDGPPDPM_FCMCOMLAIPB_OFFSET UNITYSDK_OFFSET(0x16CABE20)
#define MOELDGPPDPM_FNBIJJOMGAH_OFFSET UNITYSDK_OFFSET(0x16CABF00)
#define MOELDGPPDPM_FOADMHCBMOF_OFFSET UNITYSDK_OFFSET(0x16CABCE0)
#define MOELDGPPDPM_GCGHCGEGBAK_OFFSET UNITYSDK_OFFSET(0x16CAC180)
#define MOELDGPPDPM_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x16CABC50)
#define MOELDGPPDPM_JDHJNDLJOHL_OFFSET UNITYSDK_OFFSET(0x16CAC360)
#define MOELDGPPDPM_KJKBCLEACLA_OFFSET UNITYSDK_OFFSET(0x16CABD30)
#define MOELDGPPDPM_LOPEGKLNANG_OFFSET UNITYSDK_OFFSET(0x16CABE80)
#define MOELDGPPDPM_NMMNOBAICFP_OFFSET UNITYSDK_OFFSET(0x16CAC620)
#define MOELDGPPDPM_OILJJGPAHGI_OFFSET UNITYSDK_OFFSET(0x16CABFB0)
#define MOELDGPPDPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CAC5C0)
#define MOELDGPPDPM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16CAC0C0)
#define MOELDGPPDPM_PJENHEDCDEB_OFFSET UNITYSDK_OFFSET(0x16CAC6D0)
#define MOELDGPPDPM_PLMOMAIIBAK_OFFSET UNITYSDK_OFFSET(0x16CAC130)
#define MOELDGPPDPM_PNDCNBNGIDC_OFFSET UNITYSDK_OFFSET(0x16CAC0B0)
#define MOELDGPPDPM_PNHCDEACELN_OFFSET UNITYSDK_OFFSET(0x16CAC680)
#define MOELDGPPDPM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CABD20)

inline static constexpr unsigned int MOELDGPPDPM_TypeDefinitionIndex = 78325;

class MOELDGPPDPM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* _COPJHKCGCBO_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* IILHLOILLDM; // 0x18
	::Il2CppArray<::UnityEngine::Material*>* FDKJHDFAFHL; // 0x20
	::MoleMole::MonoRenderHandler* AOKHOHCJNFJ; // 0x28
	::System::String* FKPPENALJKC; // 0x30
	::LGBIMGEFJCE MDLHJONGOPK; // 0x38
	::System::Boolean IODCONPOAFO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_DISPOSE_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_ABDLEONNPAJ_OFFSET))(this);
	}

	::System::Void FOADMHCBMOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_FOADMHCBMOF_OFFSET))(this);
	}

	::System::Void KJKBCLEACLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_KJKBCLEACLA_OFFSET))(this);
	}

	::System::Void LOPEGKLNANG(::Il2CppArray<::UnityEngine::Material*>* JFAJHLHHHPM, ::System::String* HOMMOPENBBM, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* NENNJMKPJDB)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOELDGPPDPM_LOPEGKLNANG_OFFSET))(this, JFAJHLHHHPM, HOMMOPENBBM, NENNJMKPJDB);
	}

	::System::Void CHNGCIIBBKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_CHNGCIIBBKN_OFFSET))(this);
	}

	::System::Void OILJJGPAHGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_OILJJGPAHGI_OFFSET))(this);
	}

	::System::Void PNDCNBNGIDC(::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*))((::PBYTE)hIl2Cpp + MOELDGPPDPM_PNDCNBNGIDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Boolean PLMOMAIIBAK(::System::Boolean DMFKNIBAJME)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOELDGPPDPM_PLMOMAIIBAK_OFFSET))(this, DMFKNIBAJME);
	}

	::System::Void FNBIJJOMGAH(::Il2CppArray<::UnityEngine::Material*>* JFAJHLHHHPM, ::System::String* HOMMOPENBBM, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* NENNJMKPJDB)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOELDGPPDPM_FNBIJJOMGAH_OFFSET))(this, JFAJHLHHHPM, HOMMOPENBBM, NENNJMKPJDB);
	}

	::Il2CppArray<::UnityEngine::Material*>* GCGHCGEGBAK()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_GCGHCGEGBAK_OFFSET))(this);
	}

	::System::Void BGGNKBFHOOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_BGGNKBFHOOL_OFFSET))(this);
	}

	::System::Void FCMCOMLAIPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_FCMCOMLAIPB_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOELDGPPDPM_OJENCMOGDKL_OFFSET))(this, MDLHJONGOPK, AOKHOHCJNFJ);
	}

	::System::Void NMMNOBAICFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_NMMNOBAICFP_OFFSET))(this);
	}

	::UnityEngine::Material* PNHCDEACELN(::UnityEngine::Material* EBFEPHNLNNG)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOELDGPPDPM_PNHCDEACELN_OFFSET))(this, EBFEPHNLNNG);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* PJENHEDCDEB()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_PJENHEDCDEB_OFFSET))(this);
	}

	::System::Void BIOPEDOKKLI(::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAHJHLFIFBG, ::System::String* HOMMOPENBBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOELDGPPDPM_BIOPEDOKKLI_OFFSET))(this, OAHJHLFIFBG, HOMMOPENBBM);
	}

	static ::System::Void JDHJNDLJOHL(::Il2CppArray<::UnityEngine::Material*>* JFAJHLHHHPM, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>*& NNJOMEFILCC)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>*&))((::PBYTE)hIl2Cpp + MOELDGPPDPM_JDHJNDLJOHL_OFFSET))(JFAJHLHHHPM, NNJOMEFILCC);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOELDGPPDPM_EDEFLFIKNFK_OFFSET))(this);
	}
};
