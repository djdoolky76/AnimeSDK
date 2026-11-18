#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"

class FCHOMFKACMB;
class JMHIOADBIPH;
class PhotoFrame;
namespace MoleMole { class PhotoFrameRender; }
namespace MoleMole { class UIBaseController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class RenderTexture; }

#define AGJIJABCGFD_DFBMGIKMGPG_OFFSET UNITYSDK_OFFSET(0x16D77100)
#define AGJIJABCGFD_EBLEKNPGJBG_OFFSET UNITYSDK_OFFSET(0x16D77740)
#define AGJIJABCGFD_GPNMIDEHKFJ_OFFSET UNITYSDK_OFFSET(0x16D771F0)
#define AGJIJABCGFD_IFLOGIDEAEM_OFFSET UNITYSDK_OFFSET(0x16D772D0)

inline static constexpr unsigned int AGJIJABCGFD_TypeDefinitionIndex = 59810;

class AGJIJABCGFD : public ::System::Object
{
public:
	// static const ::System::String* PIBJIIPCBNF; // 0x0

	static ::Cysharp::Threading::Tasks::UniTask_1<::JMHIOADBIPH*> DFBMGIKMGPG(::FCHOMFKACMB* HNOPAJLDCFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::JMHIOADBIPH*>(*)(::FCHOMFKACMB*))((::PBYTE)hIl2Cpp + AGJIJABCGFD_DFBMGIKMGPG_OFFSET))(HNOPAJLDCFB);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::PhotoFrameRender*> GPNMIDEHKFJ(::PhotoFrame* IJODCLJOCKA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::PhotoFrameRender*>(*)(::PhotoFrame*))((::PBYTE)hIl2Cpp + AGJIJABCGFD_GPNMIDEHKFJ_OFFSET))(IJODCLJOCKA);
	}

	static ::System::Void IFLOGIDEAEM(::FCHOMFKACMB*& HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::FCHOMFKACMB*&))((::PBYTE)hIl2Cpp + AGJIJABCGFD_IFLOGIDEAEM_OFFSET))(HNOPAJLDCFB);
	}

	static ::Cysharp::Threading::Tasks::UniTask EBLEKNPGJBG(::PhotoFrame* IJODCLJOCKA, ::System::Func_2<::UnityEngine::RenderTexture*, ::Cysharp::Threading::Tasks::UniTask>* IPJKGPFLHEB, ::MoleMole::UIBaseController* NCIMBHDKIJM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PhotoFrame*, ::System::Func_2<::UnityEngine::RenderTexture*, ::Cysharp::Threading::Tasks::UniTask>*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + AGJIJABCGFD_EBLEKNPGJBG_OFFSET))(IJODCLJOCKA, IPJKGPFLHEB, NCIMBHDKIJM);
	}
};
