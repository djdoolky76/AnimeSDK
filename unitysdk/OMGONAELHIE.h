#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/HJCOLMNPKBK.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KFELGAIGHAP;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class RogueDLC1Dot3Dice; }
namespace RPG::GameCore { class RogueDLC1Dot3DiceInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }

#define OMGONAELHIE_AJPCPEDAFNI_OFFSET UNITYSDK_OFFSET(0xC827190)
#define OMGONAELHIE_BMNPFJPOHNM_OFFSET UNITYSDK_OFFSET(0xC827850)
#define OMGONAELHIE_CCTOR_OFFSET UNITYSDK_OFFSET(0xC828C60)
#define OMGONAELHIE_CGNEIFEONJF_OFFSET UNITYSDK_OFFSET(0xC827BF0)
#define OMGONAELHIE_CTOR_OFFSET UNITYSDK_OFFSET(0xC825510)
#define OMGONAELHIE_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xC825ED0)
#define OMGONAELHIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8255F0)
#define OMGONAELHIE_EGHHGKKMJBM_OFFSET UNITYSDK_OFFSET(0xC826180)
#define OMGONAELHIE_EKBFCOPAGLI_OFFSET UNITYSDK_OFFSET(0xC8280A0)
#define OMGONAELHIE_FLIFFHJAOCI_OFFSET UNITYSDK_OFFSET(0xC8278A0)
#define OMGONAELHIE_GNLKDLEHDGI_OFFSET UNITYSDK_OFFSET(0xC828990)
#define OMGONAELHIE_HICAEMAKHOD_OFFSET UNITYSDK_OFFSET(0xC825D80)
#define OMGONAELHIE_HPBMHBPFJOM_OFFSET UNITYSDK_OFFSET(0xC826F90)
#define OMGONAELHIE_JHNAHAIJGDI_OFFSET UNITYSDK_OFFSET(0xC827390)
#define OMGONAELHIE_JKMIFOEOIMO_OFFSET UNITYSDK_OFFSET(0xC826560)
#define OMGONAELHIE_KJABHMKCCEF_OFFSET UNITYSDK_OFFSET(0xC8262C0)
#define OMGONAELHIE_MEODJHNNLOG_OFFSET UNITYSDK_OFFSET(0xC8282A0)
#define OMGONAELHIE_NCFKOCFCBEK_OFFSET UNITYSDK_OFFSET(0xC8283D0)
#define OMGONAELHIE_OGCJAMHPDBB_OFFSET UNITYSDK_OFFSET(0xC827700)
#define OMGONAELHIE_ONKJMAJMDNP_OFFSET UNITYSDK_OFFSET(0xC826790)
#define OMGONAELHIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC8260E0)
#define OMGONAELHIE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC826130)
#define OMGONAELHIE_PCECDHMCNMP_OFFSET UNITYSDK_OFFSET(0xC828860)
#define OMGONAELHIE_PFNKDMPBJNK_OFFSET UNITYSDK_OFFSET(0xC827F60)
#define OMGONAELHIE_TICK_OFFSET UNITYSDK_OFFSET(0xC825E60)
#define OMGONAELHIE___DICEAPPEAR_B__10_0_OFFSET UNITYSDK_OFFSET(0xC828CA0)

inline static constexpr unsigned int OMGONAELHIE_TypeDefinitionIndex = 59710;

	class OMGONAELHIE : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NGKOAMMKPIC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Sprite*>* IHIDCIDLKKM; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::String* PJCKPBIPEDM; // 0x30
		::UnityEngine::GameObject* IBAFEMKMDKL; // 0x38
		::RPG::GameCore::RogueDLC1Dot3DiceInteract* OFKGLJOAMLD; // 0x40
		::KFELGAIGHAP* LPGMOLOFLOP; // 0x48
		::System::UInt32 EILMPFEEIJH; // 0x50
		::System::UInt32 FMGKEGFGDNA; // 0x54
		::HJCOLMNPKBK NNLFFOCINPG; // 0x58
		::System::UInt32 FLNGBDLPFAC; // 0x5C
		::System::Boolean HDJOGGDMCIO; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 MEPMDNDKGBP; // 0x64
		::System::UInt32 PFMIPOPPCCL; // 0x68
		static ::System::String** StaticGet_DKNEIAONKPB()
		{
			return (::System::String**)UnitySDK::FromName("", "OMGONAELHIE")->GetStaticField(0x56450);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3DiceInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3DiceInteract*))((::PBYTE)hIl2Cpp + OMGONAELHIE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMGONAELHIE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMGONAELHIE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void EGHHGKKMJBM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_EGHHGKKMJBM_OFFSET))(this, a1, a2);
		}

		::System::Void HPBMHBPFJOM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_HPBMHBPFJOM_OFFSET))(this, a1, a2);
		}

		::System::Void AJPCPEDAFNI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_AJPCPEDAFNI_OFFSET))(this, a1, a2);
		}

		::System::Void JHNAHAIJGDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_JHNAHAIJGDI_OFFSET))(this, a1);
		}

		::System::Void ONKJMAJMDNP(::HJCOLMNPKBK a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJCOLMNPKBK))((::PBYTE)hIl2Cpp + OMGONAELHIE_ONKJMAJMDNP_OFFSET))(this, a1);
		}

		::System::Void BMNPFJPOHNM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_BMNPFJPOHNM_OFFSET))(this, a1);
		}

		::System::Void FLIFFHJAOCI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_FLIFFHJAOCI_OFFSET))(this, a1);
		}

		::System::Void CGNEIFEONJF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_CGNEIFEONJF_OFFSET))(this, a1);
		}

		::System::Void PFNKDMPBJNK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_PFNKDMPBJNK_OFFSET))(this, a1);
		}

		::System::Void MEODJHNNLOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMGONAELHIE_MEODJHNNLOG_OFFSET))(this, a1);
		}

		::System::Void NCFKOCFCBEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_NCFKOCFCBEK_OFFSET))(this);
		}

		::System::Void KJABHMKCCEF(::HJCOLMNPKBK a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::HJCOLMNPKBK, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OMGONAELHIE_KJABHMKCCEF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JKMIFOEOIMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMGONAELHIE_JKMIFOEOIMO_OFFSET))(this, a1);
		}

		::System::Void EKBFCOPAGLI(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OMGONAELHIE_EKBFCOPAGLI_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GNLKDLEHDGI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_GNLKDLEHDGI_OFFSET))(this);
		}

		::System::Void PCECDHMCNMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_PCECDHMCNMP_OFFSET))(this);
		}

		::System::Void HICAEMAKHOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_HICAEMAKHOD_OFFSET))(this);
		}

		::RPG::Client::Prop::RogueDLC1Dot3Dice* OGCJAMHPDBB()
		{
			return ((::RPG::Client::Prop::RogueDLC1Dot3Dice*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE_OGCJAMHPDBB_OFFSET))(this);
		}

		::System::Void __DiceAppear_b__10_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + OMGONAELHIE___DICEAPPEAR_B__10_0_OFFSET))(this, a1, a2);
		}

	};
