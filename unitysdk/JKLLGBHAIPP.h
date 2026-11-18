#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CBHALHKAKLC_OMCMPLFMCAM;
class DJKHNKJFMJO;
class FGECBJCAGBC;
class IFBGJJPIDLA;
class JKLLGBHAIPP_LEFHGJHAAIN;
class NPCBBDGEGPM;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define JKLLGBHAIPP_DJEJPLNNHBN_OFFSET UNITYSDK_OFFSET(0x1385F580)
#define JKLLGBHAIPP_FLNCLDMGCNA_OFFSET UNITYSDK_OFFSET(0x1385FD20)
#define JKLLGBHAIPP_IENKBMEHEHC_OFFSET UNITYSDK_OFFSET(0x1385F8A0)
#define JKLLGBHAIPP_LMLOBCAKKAD_OFFSET UNITYSDK_OFFSET(0x1385F460)
#define JKLLGBHAIPP_LOINMHNJAEF_OFFSET UNITYSDK_OFFSET(0x1385F690)
#define JKLLGBHAIPP_PJOKKDKGMDF_OFFSET UNITYSDK_OFFSET(0x1385F350)

inline static constexpr unsigned int JKLLGBHAIPP_TypeDefinitionIndex = 56642;

class JKLLGBHAIPP : public ::System::Object
{
public:
	static ::System::Void PJOKKDKGMDF(::IFBGJJPIDLA* MMHFNHKAGDF, ::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::IFBGJJPIDLA*, ::CBHALHKAKLC_OMCMPLFMCAM*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_PJOKKDKGMDF_OFFSET))(MMHFNHKAGDF, LJBPECKCCEA);
	}

	static ::System::Void LMLOBCAKKAD(::NPCBBDGEGPM* DPAJPOCJOGN, ::System::Action* EJKDBGGKDDD, ::System::Action* ELNJNJAIFGE)
	{
		return ((::System::Void(*)(::NPCBBDGEGPM*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_LMLOBCAKKAD_OFFSET))(DPAJPOCJOGN, EJKDBGGKDDD, ELNJNJAIFGE);
	}

	static ::System::Void DJEJPLNNHBN(::NPCBBDGEGPM* DPAJPOCJOGN, ::System::Action* KPFKDDMENIP)
	{
		return ((::System::Void(*)(::NPCBBDGEGPM*, ::System::Action*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_DJEJPLNNHBN_OFFSET))(DPAJPOCJOGN, KPFKDDMENIP);
	}

	static ::System::Void LOINMHNJAEF(::System::String* HIAIKHDFCLN, ::System::Func_1<::System::Boolean>* JKFPGOFECAM, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FCCFGMANMKM)
	{
		return ((::System::Void(*)(::System::String*, ::System::Func_1<::System::Boolean>*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_LOINMHNJAEF_OFFSET))(HIAIKHDFCLN, JKFPGOFECAM, FCCFGMANMKM);
	}

	static ::System::Void IENKBMEHEHC(::DJKHNKJFMJO* LBDJHIALDLB, ::System::Action* BGDFKKEIGJL, ::System::Action* IAGNANEMODA)
	{
		return ((::System::Void(*)(::DJKHNKJFMJO*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_IENKBMEHEHC_OFFSET))(LBDJHIALDLB, BGDFKKEIGJL, IAGNANEMODA);
	}

	static ::IFBGJJPIDLA* FLNCLDMGCNA(::DJKHNKJFMJO* LBDJHIALDLB, ::FGECBJCAGBC* BJIFIDJHECF, ::JKLLGBHAIPP_LEFHGJHAAIN* EIJCAHMHAHH)
	{
		return ((::IFBGJJPIDLA*(*)(::DJKHNKJFMJO*, ::FGECBJCAGBC*, ::JKLLGBHAIPP_LEFHGJHAAIN*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_FLNCLDMGCNA_OFFSET))(LBDJHIALDLB, BJIFIDJHECF, EIJCAHMHAHH);
	}
};
