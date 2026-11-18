#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLBGBCAMCH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/PLGEFGFNJAD.h"

namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FGHCKKKFHHE_ADDCIJEFODI_OFFSET UNITYSDK_OFFSET(0x14AC8430)
#define FGHCKKKFHHE_BHNNGBIGLJP_OFFSET UNITYSDK_OFFSET(0x14AC7870)
#define FGHCKKKFHHE_BJJKBGHHLKN_OFFSET UNITYSDK_OFFSET(0x14AC8B00)
#define FGHCKKKFHHE_DAIGAHOHNAP_OFFSET UNITYSDK_OFFSET(0x14AC8950)
#define FGHCKKKFHHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AC7610)
#define FGHCKKKFHHE_EICNKPECNDB_OFFSET UNITYSDK_OFFSET(0x14AC9230)
#define FGHCKKKFHHE_EOBKEHJGJMG_OFFSET UNITYSDK_OFFSET(0x14AC7DF0)
#define FGHCKKKFHHE_FBJCGBGPNAK_OFFSET UNITYSDK_OFFSET(0x14AC8960)
#define FGHCKKKFHHE_FOHNGADIGOO_OFFSET UNITYSDK_OFFSET(0x14AC84E0)
#define FGHCKKKFHHE_GANHEEJOMIL_OFFSET UNITYSDK_OFFSET(0x14AC8420)
#define FGHCKKKFHHE_GBJPFOFLHGC_OFFSET UNITYSDK_OFFSET(0x14AC8B50)
#define FGHCKKKFHHE_IGAONMFCCMP_OFFSET UNITYSDK_OFFSET(0x14AC7F50)
#define FGHCKKKFHHE_IGIKLIKDDCA_OFFSET UNITYSDK_OFFSET(0x14AC8B10)
#define FGHCKKKFHHE_IMICILLPHPM_OFFSET UNITYSDK_OFFSET(0x14AC88B0)
#define FGHCKKKFHHE_IPPGGAELCJI_OFFSET UNITYSDK_OFFSET(0x14AC83C0)
#define FGHCKKKFHHE_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x14AC88D0)
#define FGHCKKKFHHE_KDILNDANEPD_OFFSET UNITYSDK_OFFSET(0x14AC8530)
#define FGHCKKKFHHE_LLEHEPDHNAO_OFFSET UNITYSDK_OFFSET(0x14AC8EA0)
#define FGHCKKKFHHE_LPCKDAPGOLL_OFFSET UNITYSDK_OFFSET(0x14AC8470)
#define FGHCKKKFHHE_MENENECHAKM_OFFSET UNITYSDK_OFFSET(0x14AC7B20)
#define FGHCKKKFHHE_OOEGNIOFGMP_OFFSET UNITYSDK_OFFSET(0x14AC8220)
#define FGHCKKKFHHE__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC7910)

inline static constexpr unsigned int FGHCKKKFHHE_TypeDefinitionIndex = 52114;

class FGHCKKKFHHE : public ::System::Object
{
public:
	static ::FGHCKKKFHHE** StaticGet_JDBJBPFFNMP()
	{
		return (::FGHCKKKFHHE**)Il2CppClass::FromTypeDefinitionIndex(FGHCKKKFHHE_TypeDefinitionIndex)->GetStaticField(0x4E410);
	}
	// static const ::System::Int32 GDMPCFNIHGN = 0x40; // 0x0
	::System::Collections::Generic::HashSet_1<::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* MDKMLFDLKKH; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* CADDJDLMJBD; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::System::Int32>>* OJBIEPHBBOG; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* IJCCAFAIIPA; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* MBGHDILGHOD; // 0x30
	::Unity::Collections::NativeList_1<::HLLBGBCAMCH> CGJGAJEFAOH; // 0x38
	::System::Byte _padding0[0x8];
	::UnityEngine::Jobs::TransformAccessArray HIDGFCDLNGM; // 0x48
	::System::Boolean EMDLMMBECMA; // 0x50
	::System::Byte _padding1[0x7];
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> KALJMDCIABB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_DISPOSE_OFFSET))(this);
	}

	::System::Void MENENECHAKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_MENENECHAKM_OFFSET))(this);
	}

	::System::Void EOBKEHJGJMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_EOBKEHJGJMG_OFFSET))(this);
	}

	::System::Boolean IPPGGAELCJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_IPPGGAELCJI_OFFSET))(this);
	}

	::Unity::Collections::NativeList_1<::HLLBGBCAMCH> GANHEEJOMIL()
	{
		return ((::Unity::Collections::NativeList_1<::HLLBGBCAMCH>(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_GANHEEJOMIL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* ADDCIJEFODI()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_ADDCIJEFODI_OFFSET))(this);
	}

	::System::Void LPCKDAPGOLL(::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_LPCKDAPGOLL_OFFSET))(this, OLAIAPANMKD);
	}

	::System::Int32 FOHNGADIGOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_FOHNGADIGOO_OFFSET))(this);
	}

	::System::Void KDILNDANEPD(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* FHIOPFNMGDF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_KDILNDANEPD_OFFSET))(this, FHIOPFNMGDF);
	}

	::PLGEFGFNJAD IMICILLPHPM()
	{
		return ((::PLGEFGFNJAD(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_IMICILLPHPM_OFFSET))(this);
	}

	static ::FGHCKKKFHHE* KCKBIOBGKBH()
	{
		return ((::FGHCKKKFHHE*(*)())((::PBYTE)hIl2Cpp + FGHCKKKFHHE_KCKBIOBGKBH_OFFSET))();
	}

	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> DAIGAHOHNAP()
	{
		return ((::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_DAIGAHOHNAP_OFFSET))(this);
	}

	::System::Void BHNNGBIGLJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_BHNNGBIGLJP_OFFSET))(this);
	}

	::System::Void FBJCGBGPNAK(::UnityEngine::Transform* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_FBJCGBGPNAK_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Void OOEGNIOFGMP(::System::Int32 KKIIJGFNHOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_OOEGNIOFGMP_OFFSET))(this, KKIIJGFNHOD);
	}

	::UnityEngine::Jobs::TransformAccessArray BJJKBGHHLKN()
	{
		return ((::UnityEngine::Jobs::TransformAccessArray(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_BJJKBGHHLKN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* IGIKLIKDDCA()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_IGIKLIKDDCA_OFFSET))(this);
	}

	::System::Void GBJPFOFLHGC(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* FHIOPFNMGDF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_GBJPFOFLHGC_OFFSET))(this, FHIOPFNMGDF);
	}

	::System::Void LLEHEPDHNAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_LLEHEPDHNAO_OFFSET))(this);
	}

	static ::System::Void EICNKPECNDB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGHCKKKFHHE_EICNKPECNDB_OFFSET))();
	}

	::System::Int32 IGAONMFCCMP(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + FGHCKKKFHHE_IGAONMFCCMP_OFFSET))(this, GKBJOPJKCLB, OLAIAPANMKD);
	}
};
