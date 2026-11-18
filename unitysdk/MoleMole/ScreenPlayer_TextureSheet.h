#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/NFLPDCBEDLI.h"
#include "unitysdk/ODGEKDEOPAI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class AOHKJOHACPG;
class FALOGAMNAJC;
class FNEKMFHHCOI;
class FNLBCCCENMF;
class GPKCIBEIPKF;
class LKCKNHGFJLD;
class NKLMFIGCIPL;
class ScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x162F2D30)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_BHECJBOAMGK_OFFSET UNITYSDK_OFFSET(0x162F1860)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CDLMGGELDED_OFFSET UNITYSDK_OFFSET(0x162F10F0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CKHBHNINEDJ_OFFSET UNITYSDK_OFFSET(0x162EF140)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_DGHEKAMFKHF_OFFSET UNITYSDK_OFFSET(0x162F2490)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_EEDKBPCLKFE_OFFSET UNITYSDK_OFFSET(0x162EFE10)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_EHGFBLANIIJ_OFFSET UNITYSDK_OFFSET(0x162F3040)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_FAJPBLHNOAD_OFFSET UNITYSDK_OFFSET(0x162F3BB0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_FGBLLFBLCIG_OFFSET UNITYSDK_OFFSET(0x162F10A0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_FIOEOMDIFJO_OFFSET UNITYSDK_OFFSET(0x162EFB50)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_FKFOCECFBMD_OFFSET UNITYSDK_OFFSET(0x162F0100)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_ASYNCREADYREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x162EEC70)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_PREASYNCREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x162EEC50)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_STATE_OFFSET UNITYSDK_OFFSET(0x162EEC20)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_TEXTUREREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x162EEC30)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GMLFJIDEKBA_OFFSET UNITYSDK_OFFSET(0x162F2560)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_IBECKGECOLB_OFFSET UNITYSDK_OFFSET(0x162EEF60)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_IHPGFNPJPDO_OFFSET UNITYSDK_OFFSET(0x162F3AF0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_IIDODLLMFJH_OFFSET UNITYSDK_OFFSET(0x162F1C60)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_IOJCNGBIBGF_OFFSET UNITYSDK_OFFSET(0x162F38B0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_KALEMCHBBHI_OFFSET UNITYSDK_OFFSET(0x162F3AB0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x162F1E10)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_MFEIHHBLFBJ_OFFSET UNITYSDK_OFFSET(0x162F36A0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_NHNEDNEJNGN_OFFSET UNITYSDK_OFFSET(0x162EF990)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_OHKLOFOFECF_OFFSET UNITYSDK_OFFSET(0x162EF7F0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x162F2750)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x162F2440)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x162F0860)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_PIJDOJAKFGK_OFFSET UNITYSDK_OFFSET(0x162F2A60)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_PIJOPHAAEBG_OFFSET UNITYSDK_OFFSET(0x162F3B50)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_ASYNCREADYREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x162EEC80)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_PREASYNCREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x162EEC60)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_TEXTUREREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x162EEC40)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CCTOR_OFFSET UNITYSDK_OFFSET(0x162EEF50)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x162EEC90)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TextureSheet_TypeDefinitionIndex = 46481;

	class ScreenPlayer_TextureSheet : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PoolCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TextureSheet_TypeDefinitionIndex)->GetStaticField(0x105E0);
		}
		::System::Collections::Generic::List_1<::AOHKJOHACPG*>* floats; // 0x10
		::System::Collections::Generic::List_1<::NKLMFIGCIPL*>* vectors; // 0x18
		::System::Collections::Generic::List_1<::FALOGAMNAJC*>* matricies; // 0x20
		::System::Collections::Generic::List_1<::FNEKMFHHCOI*>* textures; // 0x28
		::System::Collections::Generic::List_1<::GPKCIBEIPKF*>* constantBuffers; // 0x30
		::System::Collections::Generic::List_1<::GPKCIBEIPKF*>* computeBuffers; // 0x38
		::System::Boolean mpbFullCopy; // 0x40
		::System::Byte _padding0[0x3];
		::ODGEKDEOPAI _state; // 0x44
		::MoleMole::StaticSceneObjectListLoopType _staticSceneObjectListLoopType; // 0x48
		::UnityEngine::Vector4 defaultOffset; // 0x4C
		::System::Int32 LogicRenderIndex; // 0x5C
		::System::Int32 LogicMaterialIndex; // 0x60
		::System::Int32 Current_PropertyID_Offset; // 0x64
		::System::Single cacheForceWrapRepeat; // 0x68
		::System::Boolean _isAsyncInitSuccess; // 0x6C
		::System::Byte _padding1[0x3];
		::System::Int32 _initToken; // 0x70
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* _TextureRequestHandleDic_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* initSyncRequestHandleDic; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* _PreAsyncRequestHandleDic_k__BackingField; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _AsyncReadyRequestHandleDic_k__BackingField; // 0x90
		::LKCKNHGFJLD* logic; // 0x98
		::ScreenPlayData* data; // 0xA0
		::UnityEngine::Texture2D* transparentTexture; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* _startTimeLoopFrames; // 0xB0
		::MoleMole::TextureSheetLoopFrame* _startTimeLoopFrame; // 0xB8
		::System::Action_1<::System::Boolean>* result; // 0xC0
		::System::Int32 runingFrameIndex; // 0xC8
		::System::Byte _padding3[0x4];
		::FNLBCCCENMF* screenRenderModifyer; // 0xD0
		::UnityEngine::LODGroup* _lODGroup; // 0xD8
		::UnityEngine::MaterialPropertyBlock* renderBlock; // 0xE0
		::NFLPDCBEDLI lodType; // 0xE8
		::System::Byte _padding4[0x4];
		::UnityEngine::Renderer* render; // 0xF0
		::UnityEngine::GameObject* ScreenObject; // 0xF8
		::UnityEngine::Texture2D* currentTexture; // 0x100
		::System::Boolean useInstanceMat; // 0x108
		::System::Byte _padding5[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* renderMaterials; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CCTOR_OFFSET))();
		}

		::ODGEKDEOPAI get_State()
		{
			return ((::ODGEKDEOPAI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_STATE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* get_TextureRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_TEXTUREREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_TextureRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_TEXTUREREQUESTHANDLEDIC_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* get_PreAsyncRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_PREASYNCREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_PreAsyncRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_PREASYNCREQUESTHANDLEDIC_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* get_AsyncReadyRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_ASYNCREADYREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_AsyncReadyRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_ASYNCREADYREQUESTHANDLEDIC_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Int32 IBECKGECOLB(::UnityEngine::Shader* KICIMMINFAF)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_IBECKGECOLB_OFFSET))(this, KICIMMINFAF);
		}

		::System::Void CKHBHNINEDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CKHBHNINEDJ_OFFSET))(this);
		}

		::System::Void NHNEDNEJNGN(::UnityEngine::GameObject* GICCBCNFPOL, ::NFLPDCBEDLI JOEFEIGHKPF, ::ScreenPlayData* LJBPECKCCEA, ::System::Action_1<::System::Boolean>* JHLALDNCBGP, ::System::Action_1<::System::Boolean>* KMNMHEFDOOF, ::System::String* JJLGFJNLNNG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::NFLPDCBEDLI, ::ScreenPlayData*, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_NHNEDNEJNGN_OFFSET))(this, GICCBCNFPOL, JOEFEIGHKPF, LJBPECKCCEA, JHLALDNCBGP, KMNMHEFDOOF, JJLGFJNLNNG);
		}

		::System::Void FKFOCECFBMD(::System::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_FKFOCECFBMD_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
		}

		::System::Void PHOADBJGFBE(::System::Boolean IOKNPLAMIKB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_PHOADBJGFBE_OFFSET))(this, IOKNPLAMIKB);
		}

		::System::Boolean CDLMGGELDED(::NFLPDCBEDLI JOEFEIGHKPF)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFLPDCBEDLI))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CDLMGGELDED_OFFSET))(this, JOEFEIGHKPF);
		}

		::System::Void FGBLLFBLCIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_FGBLLFBLCIG_OFFSET))(this);
		}

		::System::Void LCJEELHBNHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_LCJEELHBNHG_OFFSET))(this);
		}

		::System::Boolean OHKLOFOFECF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_OHKLOFOFECF_OFFSET))(this);
		}

		::System::Void PGHAJOMNDDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_PGHAJOMNDDJ_OFFSET))(this);
		}

		::System::Boolean DGHEKAMFKHF(::System::Single IAKPGBCAAKM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_DGHEKAMFKHF_OFFSET))(this, IAKPGBCAAKM);
		}

		::System::Void FIOEOMDIFJO(::System::String* OLOMNNBBHPJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_FIOEOMDIFJO_OFFSET))(this, OLOMNNBBHPJ);
		}

		::System::Int32 BHECJBOAMGK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_BHECJBOAMGK_OFFSET))(this);
		}

		::System::Boolean GMLFJIDEKBA(::ScreenPlayData* MHOGDJBBNAD)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GMLFJIDEKBA_OFFSET))(this, MHOGDJBBNAD);
		}

		::System::Void OKJCHFGIKBH(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_OKJCHFGIKBH_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void EEDKBPCLKFE(::System::String* MCOHLHMKLIP, ::System::Action_2<::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle>* IBNICCGMILF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_2<::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_EEDKBPCLKFE_OFFSET))(this, MCOHLHMKLIP, IBNICCGMILF);
		}

		::System::Void BBOMJDBNHIC(::UnityEngine::GameObject* GICCBCNFPOL, ::NFLPDCBEDLI JOEFEIGHKPF, ::ScreenPlayData* LJBPECKCCEA, ::System::Action_1<::System::Boolean>* IGAAKDOIPNN, ::System::String* JJLGFJNLNNG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::NFLPDCBEDLI, ::ScreenPlayData*, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_BBOMJDBNHIC_OFFSET))(this, GICCBCNFPOL, JOEFEIGHKPF, LJBPECKCCEA, IGAAKDOIPNN, JJLGFJNLNNG);
		}

		::System::Void IIDODLLMFJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_IIDODLLMFJH_OFFSET))(this);
		}

		::System::Void EHGFBLANIIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_EHGFBLANIIJ_OFFSET))(this);
		}

		::System::Void MFEIHHBLFBJ(::System::Boolean ACPFCHBCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_MFEIHHBLFBJ_OFFSET))(this, ACPFCHBCOIG);
		}

		::System::Void IOJCNGBIBGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_IOJCNGBIBGF_OFFSET))(this);
		}

		::System::Void KALEMCHBBHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_KALEMCHBBHI_OFFSET))(this);
		}

		::System::Boolean PIJDOJAKFGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_PIJDOJAKFGK_OFFSET))(this);
		}

		::System::Void IHPGFNPJPDO(::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* FHGKPKNDGBL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_IHPGFNPJPDO_OFFSET))(this, FHGKPKNDGBL);
		}

		::System::Void PIJOPHAAEBG(::MoleMole::ScreenPlayer* ECKMPOAABAL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScreenPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_PIJOPHAAEBG_OFFSET))(this, ECKMPOAABAL);
		}

		static ::System::Void FAJPBLHNOAD(::System::Int32 JHFKDGBCOBA)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_FAJPBLHNOAD_OFFSET))(JHFKDGBCOBA);
		}
	};
}
