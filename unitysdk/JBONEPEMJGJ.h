#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFELNEMMKDF.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class JBONEPEMJGJ_EEHELOPGFKO;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace Nap::NapECS { template <typename T> class QuickList_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define JBONEPEMJGJ_BPDJJICMHHM_OFFSET UNITYSDK_OFFSET(0x14F9AA60)
#define JBONEPEMJGJ_EIFDOLGOHBM_OFFSET UNITYSDK_OFFSET(0x14F9A460)
#define JBONEPEMJGJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14F9A5D0)
#define JBONEPEMJGJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14F9A9E0)
#define JBONEPEMJGJ_LHCMPIAJMCO_OFFSET UNITYSDK_OFFSET(0x14F9A800)
#define JBONEPEMJGJ_MDODJMPOBBB_OFFSET UNITYSDK_OFFSET(0x14F9AB70)
#define JBONEPEMJGJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14F9ADB0)
#define JBONEPEMJGJ_MLMNMFNHCOK_OFFSET UNITYSDK_OFFSET(0x14F9AB00)
#define JBONEPEMJGJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14F9A0C0)
#define JBONEPEMJGJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F9A620)
#define JBONEPEMJGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14F9A6A0)

inline static constexpr unsigned int JBONEPEMJGJ_TypeDefinitionIndex = 40577;

class JBONEPEMJGJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::String* EKNPOPLLJAO; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x5F; // 0x0
	::Foundation::ObjectPool_1<::System::Object*>* BMGGBIPNACP; // 0x48
	::Nap::NapECS::QuickList_1<::LFELNEMMKDF>* IKLDLOEAMFK; // 0x50
	::System::Collections::Generic::List_1<::System::Object*>* ABMGEIMHCMB; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBONEPEMJGJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_GETCLASSID_OFFSET))(this);
	}

	::LFELNEMMKDF& LHCMPIAJMCO(::UnityEngine::Transform* OPNPCLDBNDG)
	{
		return ((::LFELNEMMKDF&(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_LHCMPIAJMCO_OFFSET))(this, OPNPCLDBNDG);
	}

	static ::JBONEPEMJGJ* JFDOOELFAOA()
	{
		return ((::JBONEPEMJGJ*(*)())((::PBYTE)hIl2Cpp + JBONEPEMJGJ_JFDOOELFAOA_OFFSET))();
	}

	::JBONEPEMJGJ_EEHELOPGFKO* BPDJJICMHHM()
	{
		return ((::JBONEPEMJGJ_EEHELOPGFKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_BPDJJICMHHM_OFFSET))(this);
	}

	static ::JBONEPEMJGJ_EEHELOPGFKO* MLMNMFNHCOK()
	{
		return ((::JBONEPEMJGJ_EEHELOPGFKO*(*)())((::PBYTE)hIl2Cpp + JBONEPEMJGJ_MLMNMFNHCOK_OFFSET))();
	}

	::System::Void MDODJMPOBBB(::JBONEPEMJGJ_EEHELOPGFKO* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JBONEPEMJGJ_EEHELOPGFKO*))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_MDODJMPOBBB_OFFSET))(this, HMMMOCJAEOA);
	}

	static ::System::Void EIFDOLGOHBM(::JBONEPEMJGJ_EEHELOPGFKO* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::JBONEPEMJGJ_EEHELOPGFKO*))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EIFDOLGOHBM_OFFSET))(EIFONLCJOPG);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_MEFBHFEOKGH_OFFSET))(this);
	}
};
