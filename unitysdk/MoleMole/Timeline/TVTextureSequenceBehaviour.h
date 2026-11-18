#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOAAOFFKMOM.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Timeline/PreloadPlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class BCMOBJBBANP;
class FHGEAFNBGMH;
namespace MoleMole { class TextureSheetData; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_CCMFGJHBHGI_OFFSET UNITYSDK_OFFSET(0x14BD7AE0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0x14BD78A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_DAFNJHMKMEJ_OFFSET UNITYSDK_OFFSET(0x14BD8670)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x14BD88A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x14BD83B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_LHNMKFLJMMK_OFFSET UNITYSDK_OFFSET(0x14BD7E70)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_MLNMBHANDCK_OFFSET UNITYSDK_OFFSET(0x14BD8360)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_OFMFPDACPLH_OFFSET UNITYSDK_OFFSET(0x14BD88B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x14BD8080)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14BD8140)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x14BD76C0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14BD7EC0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x14BD83C0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_PPJABBMGENP_OFFSET UNITYSDK_OFFSET(0x14BD83D0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD82F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSequenceBehaviour_TypeDefinitionIndex = 57099;

	class TVTextureSequenceBehaviour : public ::UnityEngine::Timeline::PreloadPlayableBehaviour
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x18
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x20
		::DOAAOFFKMOM TextureAssetType; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* textureSheetFolder; // 0x30
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* texturePath; // 0x38
		::System::Boolean loop; // 0x40
		::System::Boolean selectMaterialIndex; // 0x41
		::System::Byte _padding1[0x2];
		::System::Int32 MaterialIndex; // 0x44
		::System::Int32 fps; // 0x48
		::System::Int32 startFrameIndex; // 0x4C
		::MoleMole::TextureSheetType TextureSheetType; // 0x50
		::System::Byte _padding2[0x4];
		::System::String* textureSheetKey; // 0x58
		::BCMOBJBBANP* textureSheetPlayer; // 0x60
		::FHGEAFNBGMH* player; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable BBAPGLCBDOF, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC, ::System::Single IECOJPMPJMP, ::System::Int32 DFDHKJHBBAD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPROCESSFRAME_OFFSET))(this, BBAPGLCBDOF, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC, IECOJPMPJMP, DFDHKJHBBAD);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* MLNMBHANDCK()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_MLNMBHANDCK_OFFSET))(this);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_JEINNALOJDE_OFFSET))(this);
		}

		::System::Boolean CGADIPLIANC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_CGADIPLIANC_OFFSET))(this);
		}

		::MoleMole::TextureSheetData* LHNMKFLJMMK()
		{
			return ((::MoleMole::TextureSheetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_LHNMKFLJMMK_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* PPJABBMGENP()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_PPJABBMGENP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* DAFNJHMKMEJ()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_DAFNJHMKMEJ_OFFSET))(this);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void OFMFPDACPLH(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::Playable KMGKAIDEIBA, ::UnityEngine::Playables::FrameData FDHMCIFPNCK, ::System::Object* MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_OFMFPDACPLH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void CCMFGJHBHGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_CCMFGJHBHGI_OFFSET))(this);
		}
	};
}
