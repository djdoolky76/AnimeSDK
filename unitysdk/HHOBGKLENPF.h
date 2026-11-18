#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Nullable_1.h"

class ANGMDKJFPNJ;
namespace System { class Action; }

#define HHOBGKLENPF_ANAFJIGDGOB_OFFSET UNITYSDK_OFFSET(0x14D2D010)
#define HHOBGKLENPF_GPOGODPCNOI_OFFSET UNITYSDK_OFFSET(0x14D2CF20)
#define HHOBGKLENPF_HLBOECDNBIC_OFFSET UNITYSDK_OFFSET(0x14D2D0A0)
#define HHOBGKLENPF_NCBKKBLABJI_OFFSET UNITYSDK_OFFSET(0x14D2D270)
#define HHOBGKLENPF_NJKIFCFOMHC_OFFSET UNITYSDK_OFFSET(0x14D2CF60)
#define HHOBGKLENPF_OPEGMDJPFCP_OFFSET UNITYSDK_OFFSET(0x14D2D1D0)

inline static constexpr unsigned int HHOBGKLENPF_TypeDefinitionIndex = 54305;

class HHOBGKLENPF : public ::System::Object
{
public:
	static ::System::Void GPOGODPCNOI(::System::Int32 PNPADCLNBJN)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HHOBGKLENPF_GPOGODPCNOI_OFFSET))(PNPADCLNBJN);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> NJKIFCFOMHC(::System::Int32 PNPADCLNBJN, ::System::Action* GOHDPILNKMO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + HHOBGKLENPF_NJKIFCFOMHC_OFFSET))(PNPADCLNBJN, GOHDPILNKMO);
	}

	static ::Cysharp::Threading::Tasks::UniTask ANAFJIGDGOB(::System::Int32 NACGJJKHEJE)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32))((::PBYTE)hIl2Cpp + HHOBGKLENPF_ANAFJIGDGOB_OFFSET))(NACGJJKHEJE);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> HLBOECDNBIC(::System::Int32 PNPADCLNBJN, ::System::Nullable_1<::System::Int32> CLHLJKKAAPO, ::System::Nullable_1<::System::Int32> NACGJJKHEJE, ::System::Action* ALJBOGDAHNF, ::System::Action* KKPCHLMMKDL)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Int32, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + HHOBGKLENPF_HLBOECDNBIC_OFFSET))(PNPADCLNBJN, CLHLJKKAAPO, NACGJJKHEJE, ALJBOGDAHNF, KKPCHLMMKDL);
	}

	static ::Cysharp::Threading::Tasks::UniTask OPEGMDJPFCP(::System::Int32 CLHLJKKAAPO, ::System::Action* KKPCHLMMKDL)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + HHOBGKLENPF_OPEGMDJPFCP_OFFSET))(CLHLJKKAAPO, KKPCHLMMKDL);
	}

	static ::System::Boolean NCBKKBLABJI(::ANGMDKJFPNJ* DEKJDEPKKLH, ::System::Action* PPJNFBGNCKC, ::System::Action* OADEFBCOOAF, ::System::Action* CMJBMJIKCMJ)
	{
		return ((::System::Boolean(*)(::ANGMDKJFPNJ*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + HHOBGKLENPF_NCBKKBLABJI_OFFSET))(DEKJDEPKKLH, PPJNFBGNCKC, OADEFBCOOAF, CMJBMJIKCMJ);
	}
};
