#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class ExtensionManagerTrack; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define APKDMFJPFAE_CDLGODFMMOP_OFFSET UNITYSDK_OFFSET(0x12D0FE80)
#define APKDMFJPFAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D0FC00)
#define APKDMFJPFAE_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x12D10AB0)
#define APKDMFJPFAE_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x12D10C40)
#define APKDMFJPFAE_FIBGOFMNMEB_OFFSET UNITYSDK_OFFSET(0x12D10000)
#define APKDMFJPFAE_HFDHHAFDCHO_1_OFFSET UNITYSDK_OFFSET(0x12D101B0)
#define APKDMFJPFAE_HFDHHAFDCHO_OFFSET UNITYSDK_OFFSET(0x12D103C0)
#define APKDMFJPFAE_ILMKHPLELDM_1_OFFSET UNITYSDK_OFFSET(0x12D104D0)
#define APKDMFJPFAE_ILMKHPLELDM_2_OFFSET UNITYSDK_OFFSET(0x12D10A40)
#define APKDMFJPFAE_ILMKHPLELDM_OFFSET UNITYSDK_OFFSET(0x12D0FCF0)
#define APKDMFJPFAE_JECCGGNBBFK_OFFSET UNITYSDK_OFFSET(0x12D109F0)
#define APKDMFJPFAE_KMMPIKCNEAA_1_OFFSET UNITYSDK_OFFSET(0x12D107F0)
#define APKDMFJPFAE_KMMPIKCNEAA_OFFSET UNITYSDK_OFFSET(0x12D10660)
#define APKDMFJPFAE_MOKCLLEDIMF_OFFSET UNITYSDK_OFFSET(0x12D109A0)
#define APKDMFJPFAE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12D0FBC0)
#define APKDMFJPFAE_PAPCCEPGNEO_OFFSET UNITYSDK_OFFSET(0x12D0FDA0)
#define APKDMFJPFAE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0FC70)

inline static constexpr unsigned int APKDMFJPFAE_TypeDefinitionIndex = 48939;

class APKDMFJPFAE
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableGraph>* NDHLDDPAFGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKDMFJPFAE__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKDMFJPFAE_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKDMFJPFAE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean ILMKHPLELDM(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + APKDMFJPFAE_ILMKHPLELDM_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Void PAPCCEPGNEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKDMFJPFAE_PAPCCEPGNEO_OFFSET))(this);
	}

	::System::Void FIBGOFMNMEB(::System::Boolean NOLBECKFLEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APKDMFJPFAE_FIBGOFMNMEB_OFFSET))(this, NOLBECKFLEK);
	}

	static ::System::Void HFDHHAFDCHO(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Boolean NOLBECKFLEK)
	{
		return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::System::Boolean))((::PBYTE)hIl2Cpp + APKDMFJPFAE_HFDHHAFDCHO_OFFSET))(MHPNGBGGMMN, NOLBECKFLEK);
	}

	::System::Boolean ILMKHPLELDM_1(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + APKDMFJPFAE_ILMKHPLELDM_1_OFFSET))(this, GALAOBFOBFA);
	}

	::System::Void KMMPIKCNEAA(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + APKDMFJPFAE_KMMPIKCNEAA_OFFSET))(this, GALAOBFOBFA);
	}

	::System::Void MOKCLLEDIMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKDMFJPFAE_MOKCLLEDIMF_OFFSET))(this);
	}

	static ::System::Void HFDHHAFDCHO_1(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Boolean NOLBECKFLEK, ::System::Collections::Generic::List_1<::MoleMole::Timeline::ExtensionManagerTrack*>* PEFCOFJPCCK)
	{
		return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::Timeline::ExtensionManagerTrack*>*))((::PBYTE)hIl2Cpp + APKDMFJPFAE_HFDHHAFDCHO_1_OFFSET))(MHPNGBGGMMN, NOLBECKFLEK, PEFCOFJPCCK);
	}

	::System::Void JECCGGNBBFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKDMFJPFAE_JECCGGNBBFK_OFFSET))(this);
	}

	::System::Boolean ILMKHPLELDM_2(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Timeline::TimelineAsset* JHLELCHBLNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + APKDMFJPFAE_ILMKHPLELDM_2_OFFSET))(this, MHPNGBGGMMN, JHLELCHBLNC);
	}

	::System::Void DNNJOOJBJNB(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + APKDMFJPFAE_DNNJOOJBJNB_OFFSET))(this, GALAOBFOBFA);
	}

	::System::Void ECEBDPJEKNN(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + APKDMFJPFAE_ECEBDPJEKNN_OFFSET))(this, GALAOBFOBFA);
	}

	::System::Void KMMPIKCNEAA_1(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + APKDMFJPFAE_KMMPIKCNEAA_1_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Boolean CDLGODFMMOP(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + APKDMFJPFAE_CDLGODFMMOP_OFFSET))(this, MHPNGBGGMMN);
	}
};
