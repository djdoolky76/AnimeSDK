#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define PNGJBNLGLBK_ANACDGCAIMG_OFFSET UNITYSDK_OFFSET(0x150E1440)
#define PNGJBNLGLBK_CPDKDJHHCOB_OFFSET UNITYSDK_OFFSET(0x150E1670)
#define PNGJBNLGLBK_EBOFHIJLDOG_OFFSET UNITYSDK_OFFSET(0x150E1040)
#define PNGJBNLGLBK_FFKOOKIEBGM_OFFSET UNITYSDK_OFFSET(0x150E1700)
#define PNGJBNLGLBK_HDECJKIBMLI_OFFSET UNITYSDK_OFFSET(0x150E15B0)
#define PNGJBNLGLBK_IHMLJKNIDON_OFFSET UNITYSDK_OFFSET(0x150E1850)
#define PNGJBNLGLBK_IPCOIFBOEPA_OFFSET UNITYSDK_OFFSET(0x150E1280)
#define PNGJBNLGLBK_LEFCLHFKPMM_OFFSET UNITYSDK_OFFSET(0x150E16F0)
#define PNGJBNLGLBK_MFMKDEBONHB_OFFSET UNITYSDK_OFFSET(0x150E1750)
#define PNGJBNLGLBK_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x150E1100)
#define PNGJBNLGLBK_OFONIFLOHOA_OFFSET UNITYSDK_OFFSET(0x150E1860)
#define PNGJBNLGLBK_OGLLHJCFLHI_OFFSET UNITYSDK_OFFSET(0x150E1030)
#define PNGJBNLGLBK_OMMBNIMPKIF_OFFSET UNITYSDK_OFFSET(0x150E1910)
#define PNGJBNLGLBK_PFEIBAIFNEO_OFFSET UNITYSDK_OFFSET(0x150E1660)
#define PNGJBNLGLBK_PFKNDGAPELH_OFFSET UNITYSDK_OFFSET(0x150E1920)
#define PNGJBNLGLBK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x150E13F0)
#define PNGJBNLGLBK_PLIICGAEDPE_OFFSET UNITYSDK_OFFSET(0x150E10F0)
#define PNGJBNLGLBK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x150E1000)
#define PNGJBNLGLBK__CTOR_2_OFFSET UNITYSDK_OFFSET(0x150E1020)
#define PNGJBNLGLBK__CTOR_OFFSET UNITYSDK_OFFSET(0x150E0FD0)

inline static constexpr unsigned int PNGJBNLGLBK_TypeDefinitionIndex = 75717;

class PNGJBNLGLBK : public ::System::Object
{
public:
	// static const ::System::Byte IHCLBPPJBEB = 0x1; // 0x0
	// static const ::System::Byte BDCLCGGHLMM = 0x2; // 0x0
	::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask> OGFLBKKACCC; // 0x10
	::System::Byte _padding0[0x10];
	::System::String* _MOHAEFKEEML_k__BackingField; // 0x28
	::System::Action* ICOKPCIJEEL; // 0x30
	::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* PLIDBHDFCAN; // 0x38
	::System::String* _LDFBEDHECEH_k__BackingField; // 0x40
	::System::Action* OAKLAHAOFBP; // 0x48
	::System::Action* CFFDMNOKKHG; // 0x50
	::System::Byte JBAPDCHAMKK; // 0x58
	::System::Byte _padding1[0x3];
	::System::UInt32 _BMMOPMHJEPJ_k__BackingField; // 0x5C

	::System::Void _ctor(::System::UInt32 CFHFCPHNKEP, ::System::String* DIAOEGCDIGP, ::System::String* ICJPOAIPAEO, ::Cysharp::Threading::Tasks::UniTask PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + PNGJBNLGLBK__CTOR_OFFSET))(this, CFHFCPHNKEP, DIAOEGCDIGP, ICJPOAIPAEO, PLBEAIIJADM);
	}

	::System::Void _ctor_1(::System::UInt32 CFHFCPHNKEP, ::System::String* DIAOEGCDIGP, ::System::String* ICJPOAIPAEO, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* PDJHOEAONIF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + PNGJBNLGLBK__CTOR_1_OFFSET))(this, CFHFCPHNKEP, DIAOEGCDIGP, ICJPOAIPAEO, PDJHOEAONIF);
	}

	::System::Void _ctor_2(::System::UInt32 CFHFCPHNKEP, ::System::String* DIAOEGCDIGP, ::System::String* ICJPOAIPAEO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PNGJBNLGLBK__CTOR_2_OFFSET))(this, CFHFCPHNKEP, DIAOEGCDIGP, ICJPOAIPAEO);
	}

	::System::Void OGLLHJCFLHI(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_OGLLHJCFLHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EBOFHIJLDOG(::System::Action* OJCDHADFENK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_EBOFHIJLDOG_OFFSET))(this, OJCDHADFENK);
	}

	::System::String* PLIICGAEDPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_PLIICGAEDPE_OFFSET))(this);
	}

	::System::Void ODEEJCPBCMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_ODEEJCPBCMM_OFFSET))(this);
	}

	::System::Void IPCOIFBOEPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_IPCOIFBOEPA_OFFSET))(this);
	}

	::System::Void ANACDGCAIMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_ANACDGCAIMG_OFFSET))(this);
	}

	::System::Void HDECJKIBMLI(::System::Action* HKEBHFKHBCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_HDECJKIBMLI_OFFSET))(this, HKEBHFKHBCC);
	}

	::System::Boolean PFEIBAIFNEO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_PFEIBAIFNEO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_PHOADBJGFBE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CPDKDJHHCOB()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_CPDKDJHHCOB_OFFSET))(this);
	}

	::System::String* LEFCLHFKPMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_LEFCLHFKPMM_OFFSET))(this);
	}

	::System::Void FFKOOKIEBGM(::System::Action* NDHDHCANNKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_FFKOOKIEBGM_OFFSET))(this, NDHDHCANNKK);
	}

	::System::Void MFMKDEBONHB(::System::Action* OJCDHADFENK, ::System::Action* PEGBHJCNKJG, ::System::Action* NDHDHCANNKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_MFMKDEBONHB_OFFSET))(this, OJCDHADFENK, PEGBHJCNKJG, NDHDHCANNKK);
	}

	::System::Void IHMLJKNIDON(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_IHMLJKNIDON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OFONIFLOHOA(::Cysharp::Threading::Tasks::UniTask PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_OFONIFLOHOA_OFFSET))(this, PLBEAIIJADM);
	}

	::System::UInt32 OMMBNIMPKIF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_OMMBNIMPKIF_OFFSET))(this);
	}

	::System::Void PFKNDGAPELH(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PNGJBNLGLBK_PFKNDGAPELH_OFFSET))(this, EGEGIMGMJHN);
	}
};
