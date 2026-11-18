#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGPBNANFAPC_BHJCALBJBGL.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/EGPBNANFAPC_GOHGJMKMHBI.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
namespace MoleMole { class MonoEffectPluginFollow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGPBNANFAPC_ADBCPMNONCP_OFFSET UNITYSDK_OFFSET(0x14A8A240)
#define EGPBNANFAPC_CJCEMDLBIFO_OFFSET UNITYSDK_OFFSET(0x14A8A5C0)
#define EGPBNANFAPC_DPHCGIIGEHI_1_OFFSET UNITYSDK_OFFSET(0x14A8A9E0)
#define EGPBNANFAPC_DPHCGIIGEHI_2_OFFSET UNITYSDK_OFFSET(0x14A8B150)
#define EGPBNANFAPC_DPHCGIIGEHI_OFFSET UNITYSDK_OFFSET(0x14A8A7B0)
#define EGPBNANFAPC_ECENFCLOCBN_OFFSET UNITYSDK_OFFSET(0x14A89EB0)
#define EGPBNANFAPC_EDCHNBALDBE_OFFSET UNITYSDK_OFFSET(0x14A8A5D0)
#define EGPBNANFAPC_EPONNLDPPND_OFFSET UNITYSDK_OFFSET(0x14A8ABA0)
#define EGPBNANFAPC_FOFJGCOFDKJ_OFFSET UNITYSDK_OFFSET(0x14A8B140)
#define EGPBNANFAPC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14A8A330)
#define EGPBNANFAPC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14A8B0B0)
#define EGPBNANFAPC_JMCBDFDFLMC_OFFSET UNITYSDK_OFFSET(0x14A8A7A0)
#define EGPBNANFAPC_KPJKBCDDBEA_OFFSET UNITYSDK_OFFSET(0x14A8B0A0)
#define EGPBNANFAPC_MAHEPJHOIGG_OFFSET UNITYSDK_OFFSET(0x14A8B130)
#define EGPBNANFAPC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14A8A530)
#define EGPBNANFAPC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14A89D20)
#define EGPBNANFAPC_PBFCJEGBPPL_OFFSET UNITYSDK_OFFSET(0x14A8A430)
#define EGPBNANFAPC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A8A380)
#define EGPBNANFAPC__CTOR_OFFSET UNITYSDK_OFFSET(0x14A8A420)

inline static constexpr unsigned int EGPBNANFAPC_TypeDefinitionIndex = 88219;

class EGPBNANFAPC : public ::MJHDNMKGLBJ
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_HIELMAAJFJO()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(EGPBNANFAPC_TypeDefinitionIndex)->GetStaticField(0x48260);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x6E; // 0x0
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Object*>*>* CGFKGCGBFDE; // 0x48
	::System::Collections::Generic::List_1<::System::Object*>* KIGFHEHAIFH; // 0x50
	::MoleMole::MonoEffectPluginFollow* CNDONKBFMON; // 0x58
	::UnityEngine::Vector3 FFPKCOGCNGL; // 0x60
	::System::Boolean GMMJNKNFJHP; // 0x6C
	::System::Boolean NFEAABAFDOL; // 0x6D
	::System::Boolean _CHGIMKNDOON_k__BackingField; // 0x6E
	::System::Byte _padding0[0x1];
	::UnityEngine::Quaternion FLNKHGPJAJJ; // 0x70
	::System::Nullable_1<::UnityEngine::RaycastHit> DCMOEHDBBEI; // 0x80
	::System::Byte _padding1[0x30];
	::System::UInt16 JEGDLELMEDL; // 0xB8
	::System::Byte _padding2[0x2];
	::EGPBNANFAPC_BHJCALBJBGL BLLHIAKLBPD; // 0xBC
	::UnityEngine::Vector3 IAMPCLGJICP; // 0xC0
	::System::Int32 PMMBBOOBFBP; // 0xCC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGPBNANFAPC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBNANFAPC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBNANFAPC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBNANFAPC_GETCLASSID_OFFSET))(this);
	}

	::System::Void PBFCJEGBPPL(::System::UInt16 FKDONKGGAIF, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + EGPBNANFAPC_PBFCJEGBPPL_OFFSET))(this, FKDONKGGAIF, EGEGIMGMJHN);
	}

	::System::Void ECENFCLOCBN(::MoleMole::MonoEffectPluginFollow* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + EGPBNANFAPC_ECENFCLOCBN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBNANFAPC_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean CJCEMDLBIFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBNANFAPC_CJCEMDLBIFO_OFFSET))(this);
	}

	::System::Void EDCHNBALDBE(::EGPBNANFAPC_BHJCALBJBGL EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EGPBNANFAPC_BHJCALBJBGL))((::PBYTE)hIl2Cpp + EGPBNANFAPC_EDCHNBALDBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::EGPBNANFAPC_BHJCALBJBGL JMCBDFDFLMC()
	{
		return ((::EGPBNANFAPC_BHJCALBJBGL(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBNANFAPC_JMCBDFDFLMC_OFFSET))(this);
	}

	::System::Void DPHCGIIGEHI(::System::Object* OBCPEDFNOKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGPBNANFAPC_DPHCGIIGEHI_OFFSET))(this, OBCPEDFNOKI);
	}

	::System::Void DPHCGIIGEHI_1(::System::Object* OBCPEDFNOKI, ::System::Object* IDOOICIANJA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + EGPBNANFAPC_DPHCGIIGEHI_1_OFFSET))(this, OBCPEDFNOKI, IDOOICIANJA);
	}

	::System::Void EPONNLDPPND(::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::EHKKPCGAJHO*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + EGPBNANFAPC_EPONNLDPPND_OFFSET))(this, POBADKEDFOE, OHPJHPEOFLD);
	}

	::System::Boolean KPJKBCDDBEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBNANFAPC_KPJKBCDDBEA_OFFSET))(this);
	}

	static ::EGPBNANFAPC* JFDOOELFAOA()
	{
		return ((::EGPBNANFAPC*(*)())((::PBYTE)hIl2Cpp + EGPBNANFAPC_JFDOOELFAOA_OFFSET))();
	}

	::System::Void ADBCPMNONCP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGPBNANFAPC_ADBCPMNONCP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MAHEPJHOIGG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGPBNANFAPC_MAHEPJHOIGG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MonoEffectPluginFollow* FOFJGCOFDKJ()
	{
		return ((::MoleMole::MonoEffectPluginFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBNANFAPC_FOFJGCOFDKJ_OFFSET))(this);
	}

	::System::Void DPHCGIIGEHI_2(::EGPBNANFAPC_GOHGJMKMHBI EFNLOGBCNBG)
	{
		return ((::System::Void(*)(::PVOID, ::EGPBNANFAPC_GOHGJMKMHBI))((::PBYTE)hIl2Cpp + EGPBNANFAPC_DPHCGIIGEHI_2_OFFSET))(this, EFNLOGBCNBG);
	}
};
