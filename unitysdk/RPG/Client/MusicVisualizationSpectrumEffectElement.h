#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FLCCFFNAMLJ;
namespace RPG::Client { class MusicVisualization_SpectrumEffectElementVisualBase; }
namespace RPG::Client { class PerMusicParameterSpectrum; }
namespace RPG::Client { class PerStateParamSpectrum; }
namespace RPG::Client { class PolymerPropertyLinkMaterial; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_AJIOJOGFMDE_OFFSET UNITYSDK_OFFSET(0xD914430)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_AJMMOCGILOI_OFFSET UNITYSDK_OFFSET(0xD914B70)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_BKJBEJDEDJF_OFFSET UNITYSDK_OFFSET(0xD915930)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD915D80)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_DLBMGHCDGHL_OFFSET UNITYSDK_OFFSET(0xD913E10)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_EHLNBMBOING_OFFSET UNITYSDK_OFFSET(0xD914F70)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_EIANODOMHAA_OFFSET UNITYSDK_OFFSET(0xD914CC0)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_ELKMGLNHEJF_OFFSET UNITYSDK_OFFSET(0xD9155C0)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_GCGDNLAELIL_OFFSET UNITYSDK_OFFSET(0xD914270)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_HKLFPDJACPF_OFFSET UNITYSDK_OFFSET(0xD915600)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_IAMJGAHKMIB_OFFSET UNITYSDK_OFFSET(0xD915810)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_ILBEAOBBCPM_OFFSET UNITYSDK_OFFSET(0xD913BE0)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_INDIEDBMDGN_OFFSET UNITYSDK_OFFSET(0xD915640)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JEJEOEHBIPH_OFFSET UNITYSDK_OFFSET(0xD913B90)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JKDDIOEMDJK_OFFSET UNITYSDK_OFFSET(0xD915A10)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD9140C0)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JLIPBCCEOCH_OFFSET UNITYSDK_OFFSET(0xD914C60)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JLJNNDLDAIL_OFFSET UNITYSDK_OFFSET(0xD9142F0)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JLMMCJDFJCD_OFFSET UNITYSDK_OFFSET(0xD914C00)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JMECMAPPDNO_OFFSET UNITYSDK_OFFSET(0xD914600)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_KIBIFBBJAAG_OFFSET UNITYSDK_OFFSET(0xD914480)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD9136E0)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_LELGMGFNDIL_OFFSET UNITYSDK_OFFSET(0xD914740)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_MOKCCGGIFLH_OFFSET UNITYSDK_OFFSET(0xD913B50)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_OBPBIIOMKEC_OFFSET UNITYSDK_OFFSET(0xD913C40)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_PHMGIJCAGON_OFFSET UNITYSDK_OFFSET(0xD913FE0)
#define RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_PNABOKHHDKH_OFFSET UNITYSDK_OFFSET(0xD914E40)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualizationSpectrumEffectElement_TypeDefinitionIndex = 70828;

	class MusicVisualizationSpectrumEffectElement : public ::System::Object
	{
	public:
		::System::Single LerpTime; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::PerMusicParameterSpectrum*>* PerMusicParametersList_Spectrum; // 0x18
		::UnityEngine::Transform* MVTarget; // 0x20
		::RPG::Client::MusicVisualization_SpectrumEffectElementVisualBase* ElementVisual; // 0x28
		::RPG::Client::PolymerPropertyLinkMaterial* Linker; // 0x30
		::System::Int32 _TargetMusicBuffer; // 0x38
		::System::Int32 _TargetStateBuffer; // 0x3C
		::Il2CppArray<::System::Single>* SpectrumArray; // 0x40
		::RPG::Client::PerMusicParameterSpectrum* _OldMusic; // 0x48
		::RPG::Client::PerMusicParameterSpectrum* _NewMusic; // 0x50
		::RPG::Client::PerStateParamSpectrum* _OldStateParam; // 0x58
		::RPG::Client::PerStateParamSpectrum* _NewStateParam; // 0x60
		::FLCCFFNAMLJ* _DataForVisual; // 0x68
		::FLCCFFNAMLJ* _DataForVisualPause; // 0x70
		::System::Boolean _IsStateChanging; // 0x78
		::System::Byte _padding1[0x3];
		::System::Single _LerpTimer; // 0x7C
		::Il2CppArray<::System::Single>* _OldSpectrumArray; // 0x80
		::Il2CppArray<::System::Single>* _LastSpectrumArray; // 0x88
		::System::Int32 _CopiedMusicTarget; // 0x90
		::System::Int32 _CopiedStateTarget; // 0x94
		::System::Boolean _AllowCopySwapOnce; // 0x98
		::System::Boolean _IsMusicChange; // 0x99
		::System::Boolean _IsMusicStateChange; // 0x9A
		::System::Boolean _IsMusicStateChangeImmediate; // 0x9B
		::System::Byte _padding2[0x4];
		::Il2CppArray<::System::Single>* _LastFrameInArray; // 0xA0
		::System::Single _TempSpecVal; // 0xA8
		::System::Boolean _IsPlayingVisualEffect; // 0xAC
		// static const ::System::Object _InMinFrequency; // 0x0
		// static const ::System::Object _InMaxFrequency; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void MOKCCGGIFLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_MOKCCGGIFLH_OFFSET))(this);
		}

		::System::Void JEJEOEHBIPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JEJEOEHBIPH_OFFSET))(this);
		}

		::System::Void ILBEAOBBCPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_ILBEAOBBCPM_OFFSET))(this);
		}

		::System::Void OBPBIIOMKEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_OBPBIIOMKEC_OFFSET))(this);
		}

		::System::Void DLBMGHCDGHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_DLBMGHCDGHL_OFFSET))(this);
		}

		::System::Void PHMGIJCAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_PHMGIJCAGON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JLMMCJDFJCD(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JLMMCJDFJCD_OFFSET))(this, a1, a2);
		}

		::System::Void JLIPBCCEOCH(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JLIPBCCEOCH_OFFSET))(this, a1, a2);
		}

		::System::Void EIANODOMHAA(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_EIANODOMHAA_OFFSET))(this, a1, a2);
		}

		::System::Boolean GCGDNLAELIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_GCGDNLAELIL_OFFSET))(this);
		}

		::System::Void AJIOJOGFMDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_AJIOJOGFMDE_OFFSET))(this);
		}

		::System::Void KIBIFBBJAAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_KIBIFBBJAAG_OFFSET))(this);
		}

		::System::Void ELKMGLNHEJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_ELKMGLNHEJF_OFFSET))(this);
		}

		::System::Void HKLFPDJACPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_HKLFPDJACPF_OFFSET))(this);
		}

		::System::Void EHLNBMBOING(::System::Span_1_0C0D59FF8BC7380B<::System::Single> a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1_0C0D59FF8BC7380B<::System::Single>, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_EHLNBMBOING_OFFSET))(this, a1, a2);
		}

		::System::Span_1_0C0D59FF8BC7380B<::System::Single> PNABOKHHDKH(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Span_1_0C0D59FF8BC7380B<::System::Single>(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_PNABOKHHDKH_OFFSET))(this, a1, a2);
		}

		::System::Void INDIEDBMDGN(::Il2CppArray<::System::Single>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_INDIEDBMDGN_OFFSET))(this, a1, a2);
		}

		::System::Void IAMJGAHKMIB(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_IAMJGAHKMIB_OFFSET))(this, a1);
		}

		::System::Void BKJBEJDEDJF(::Il2CppArray<::System::Single>* a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_BKJBEJDEDJF_OFFSET))(this, a1, a2);
		}

		::System::Void JKDDIOEMDJK(::Il2CppArray<::System::Single>* a1, ::RPG::Client::PerStateParamSpectrum* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::RPG::Client::PerStateParamSpectrum*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JKDDIOEMDJK_OFFSET))(this, a1, a2);
		}

		::System::Void JLJNNDLDAIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JLJNNDLDAIL_OFFSET))(this);
		}

		::System::Void JMECMAPPDNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_JMECMAPPDNO_OFFSET))(this);
		}

		::System::Void LELGMGFNDIL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_LELGMGFNDIL_OFFSET))(this, a1);
		}

		::System::Void AJMMOCGILOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATIONSPECTRUMEFFECTELEMENT_AJMMOCGILOI_OFFSET))(this);
		}

	};
}
