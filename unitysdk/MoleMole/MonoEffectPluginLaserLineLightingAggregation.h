#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x180FD020)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_BBIMDOGONEH_OFFSET UNITYSDK_OFFSET(0x180FBD10)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_IHICLIOGNFJ_OFFSET UNITYSDK_OFFSET(0x180FC3A0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_INIT_OFFSET UNITYSDK_OFFSET(0x180FB760)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_KPNGPMOEDMH_OFFSET UNITYSDK_OFFSET(0x180FD190)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETBLOCKEFFECTS_OFFSET UNITYSDK_OFFSET(0x180FC740)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETENDEFFECTS_OFFSET UNITYSDK_OFFSET(0x180FC510)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETSTARTEFFECTS_OFFSET UNITYSDK_OFFSET(0x180FC170)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x180FBA40)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWBLOCKEFFECTS_OFFSET UNITYSDK_OFFSET(0x180FB9C0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWENDEFFECTS_OFFSET UNITYSDK_OFFSET(0x180FB940)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWSTARTEFFECTS_OFFSET UNITYSDK_OFFSET(0x180FB8C0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION__CTOR_OFFSET UNITYSDK_OFFSET(0x180FD3D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginLaserLineLightingAggregation_TypeDefinitionIndex = 68509;

	class MonoEffectPluginLaserLineLightingAggregation : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Transform* startTransform; // 0x18
		::UnityEngine::Transform* endTransform; // 0x20
		::System::Boolean useUnifiedStartEffect; // 0x28
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* startEffectList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BCMOGMPPKDP; // 0x38
		::System::Boolean DCKFCOHAKAO; // 0x40
		::System::Boolean useUnifiedEndEffect; // 0x41
		::System::Byte _padding1[0x6];
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* endEffectList; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EOMJDAGFAOL; // 0x50
		::System::Boolean ELCAPHIIOLF; // 0x58
		::System::Boolean useUnifiedBlockEffect; // 0x59
		::System::Byte _padding2[0x6];
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* blockEffectList; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KNIEGFLJDCB; // 0x68
		::System::Boolean BJEOIEEGALC; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_INIT_OFFSET))(this);
		}

		::System::Void SetTransformPosition(::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETTRANSFORMPOSITION_OFFSET))(this, AKAGDEFAGJA, KPLGFGLGLPD);
		}

		::System::Void ShowStartEffects(::System::Boolean AMGAAHMANDM, ::System::Boolean IOKNPLAMIKB, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWSTARTEFFECTS_OFFSET))(this, AMGAAHMANDM, IOKNPLAMIKB, NPPMJEIPMFC);
		}

		::System::Void ShowEndEffects(::System::Boolean AMGAAHMANDM, ::System::Boolean IOKNPLAMIKB, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWENDEFFECTS_OFFSET))(this, AMGAAHMANDM, IOKNPLAMIKB, NPPMJEIPMFC);
		}

		::System::Void ShowBlockEffects(::System::Boolean AMGAAHMANDM, ::System::Boolean IOKNPLAMIKB, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWBLOCKEFFECTS_OFFSET))(this, AMGAAHMANDM, IOKNPLAMIKB, NPPMJEIPMFC);
		}

		::System::Void SetStartEffects(::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 OHOGDOMNHNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETSTARTEFFECTS_OFFSET))(this, DAAEHEHLLLD, OHOGDOMNHNK);
		}

		::System::Void SetEndEffects(::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 OHOGDOMNHNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETENDEFFECTS_OFFSET))(this, DAAEHEHLLLD, OHOGDOMNHNK);
		}

		::System::Void SetBlockEffects(::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 KENJDIBJNIK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETBLOCKEFFECTS_OFFSET))(this, DAAEHEHLLLD, OHOGDOMNHNK, KENJDIBJNIK);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_AWAKE_OFFSET))(this);
		}

		::System::Void KPNGPMOEDMH(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& GAHFBNMJGHI, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& BIGHFBDIKDJ, ::UnityEngine::Vector3 ONDCOIKBNIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_KPNGPMOEDMH_OFFSET))(this, GAHFBNMJGHI, BIGHFBDIKDJ, ONDCOIKBNIO);
		}

		::System::Void BBIMDOGONEH(::System::Boolean AMGAAHMANDM, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GAHFBNMJGHI, ::System::Boolean IOKNPLAMIKB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_BBIMDOGONEH_OFFSET))(this, AMGAAHMANDM, GAHFBNMJGHI, IOKNPLAMIKB);
		}

		::System::Void IHICLIOGNFJ(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GAHFBNMJGHI, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BIGHFBDIKDJ, ::UnityEngine::Vector3 ONDCOIKBNIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_IHICLIOGNFJ_OFFSET))(this, GAHFBNMJGHI, BIGHFBDIKDJ, ONDCOIKBNIO);
		}
	};
}
