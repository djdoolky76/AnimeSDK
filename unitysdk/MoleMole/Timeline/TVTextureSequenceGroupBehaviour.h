#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOAAOFFKMOM.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Timeline/PreloadPlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class BCMOBJBBANP;
class FHGEAFNBGMH;
namespace MoleMole { class TextureSheetData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_CCMFGJHBHGI_OFFSET UNITYSDK_OFFSET(0x19B72720)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_CEKCKEGHLKJ_OFFSET UNITYSDK_OFFSET(0x19B735B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0x19B735D0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x19B73990)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_GKPPDNJOHOB_OFFSET UNITYSDK_OFFSET(0x19B739A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x19B73AB0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_LHNMKFLJMMK_OFFSET UNITYSDK_OFFSET(0x19B72B10)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x19B735C0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_MLNMBHANDCK_OFFSET UNITYSDK_OFFSET(0x19B736F0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x19B72EB0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19B724A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19B73340)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x19B735A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x19B72420)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19B72B60)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B73500)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B734F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSequenceGroupBehaviour_TypeDefinitionIndex = 78987;

	class TVTextureSequenceGroupBehaviour : public ::UnityEngine::Timeline::PreloadPlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>** StaticGet_texture2DsDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSequenceGroupBehaviour_TypeDefinitionIndex)->GetStaticField(0x52150);
		}
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x20
		::DOAAOFFKMOM TextureAssetType; // 0x28
		::System::Boolean SinglePlay; // 0x2C
		::System::Byte _padding0[0x3];
		::System::String* textureSheetFolder; // 0x30
		::System::Boolean loop; // 0x38
		::System::Byte _padding1[0x3];
		::System::Int32 fps; // 0x3C
		::System::Int32 startFrameIndex; // 0x40
		::MoleMole::TextureSheetType TextureSheetType; // 0x44
		::System::String* textureSheetKey; // 0x48
		::BCMOBJBBANP* textureSheetPlayer; // 0x50
		::FHGEAFNBGMH* player; // 0x58
		::System::Collections::Generic::List_1<::FHGEAFNBGMH*>* players; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void PrepareData(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PREPAREDATA_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void CEKCKEGHLKJ(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_CEKCKEGHLKJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::MoleMole::TextureSheetData* LHNMKFLJMMK()
		{
			return ((::MoleMole::TextureSheetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_LHNMKFLJMMK_OFFSET))(this);
		}

		::System::Boolean CGADIPLIANC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_CGADIPLIANC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* MLNMBHANDCK()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_MLNMBHANDCK_OFFSET))(this);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void GKPPDNJOHOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_GKPPDNJOHOB_OFFSET))(this);
		}

		::System::Void CCMFGJHBHGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_CCMFGJHBHGI_OFFSET))(this);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
