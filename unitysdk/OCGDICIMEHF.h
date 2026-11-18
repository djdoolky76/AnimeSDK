#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCGDICIMEHF_CGBKCGCKDFL.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class ReplayChangeEvent;
class ReplayCheckpoint;
class ReplayFullData;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T> class ILKGENIFMJI_1;

#define OCGDICIMEHF_ADPBBGGCCMM_OFFSET UNITYSDK_OFFSET(0x1CEAFD60)
#define OCGDICIMEHF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1CEB00B0)
#define OCGDICIMEHF_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1CEB0650)
#define OCGDICIMEHF_DFBBGKFNMNI_OFFSET UNITYSDK_OFFSET(0x1CEAFA60)
#define OCGDICIMEHF_DGPAODHNLAJ_OFFSET UNITYSDK_OFFSET(0x1CEB0590)
#define OCGDICIMEHF_EILHMJOANBA_OFFSET UNITYSDK_OFFSET(0x1CEB0640)
#define OCGDICIMEHF_LBHEMPPIKCL_OFFSET UNITYSDK_OFFSET(0x1CEAFD80)
#define OCGDICIMEHF_NCKHPPJNDBN_OFFSET UNITYSDK_OFFSET(0x1CEAFAE0)
#define OCGDICIMEHF_NJDMMOEEHHM_OFFSET UNITYSDK_OFFSET(0x1CEB0060)
#define OCGDICIMEHF_NLEPLKMDAMG_OFFSET UNITYSDK_OFFSET(0x1CEB0540)
#define OCGDICIMEHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAFA50)

inline static constexpr unsigned int OCGDICIMEHF_TypeDefinitionIndex = 34711;

class OCGDICIMEHF : public ::System::Object
{
public:
	::System::Action_2<::System::String*, ::System::Object*>* KJJHIENJHFJ; // 0x10
	::ILKGENIFMJI_1<::ReplayChangeEvent*>* MGKMEPPGKGA; // 0x18
	::System::String* BPOOIEBGBOI; // 0x20
	::System::Threading::CancellationToken FKKDPCPNMEI; // 0x28
	::System::Action_2<::System::String*, ::System::Object*>* KBHKNDCJNOC; // 0x30
	::System::Threading::CancellationTokenSource* EDFLBGKFEIN; // 0x38
	::ReplayFullData* BCIOIHPKAPK; // 0x40
	::System::Int32 BBHMKDCPNGN; // 0x48
	::System::Single DKMILCHJGJA; // 0x4C
	::System::Boolean EJPFJJHOGBI; // 0x50
	::System::Boolean ALGGGADCLHF; // 0x51
	::System::Byte _padding0[0x2];
	::OCGDICIMEHF_CGBKCGCKDFL LMHKIEIKFBL; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGDICIMEHF__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid DFBBGKFNMNI(::ReplayFullData* LJBPECKCCEA)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::ReplayFullData*))((::PBYTE)hIl2Cpp + OCGDICIMEHF_DFBBGKFNMNI_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NCKHPPJNDBN(::System::String* CJBJONJDOLI, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + OCGDICIMEHF_NCKHPPJNDBN_OFFSET))(this, CJBJONJDOLI, EGEGIMGMJHN);
	}

	::System::Void NJDMMOEEHHM(::System::Action_2<::System::String*, ::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + OCGDICIMEHF_NJDMMOEEHHM_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Boolean ADPBBGGCCMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGDICIMEHF_ADPBBGGCCMM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::ReplayCheckpoint* OECJIKMPHEE, ::System::String* ACONEGPDBIK)
	{
		return ((::System::Void(*)(::PVOID, ::ReplayCheckpoint*, ::System::String*))((::PBYTE)hIl2Cpp + OCGDICIMEHF_BBOMJDBNHIC_OFFSET))(this, OECJIKMPHEE, ACONEGPDBIK);
	}

	::System::Void NLEPLKMDAMG(::System::Action_2<::System::String*, ::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + OCGDICIMEHF_NLEPLKMDAMG_OFFSET))(this, EJGDHCIBCJH);
	}

	::ReplayFullData* DGPAODHNLAJ()
	{
		return ((::ReplayFullData*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGDICIMEHF_DGPAODHNLAJ_OFFSET))(this);
	}

	::System::String* LBHEMPPIKCL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGDICIMEHF_LBHEMPPIKCL_OFFSET))(this);
	}

	::System::String* EILHMJOANBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGDICIMEHF_EILHMJOANBA_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGDICIMEHF_BJANDJKKNCD_OFFSET))(this);
	}
};
