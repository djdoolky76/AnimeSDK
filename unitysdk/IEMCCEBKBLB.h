#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define IEMCCEBKBLB_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0x15EF8890)
#define IEMCCEBKBLB_CGIBGLLAKNO_OFFSET UNITYSDK_OFFSET(0x15EF8ED0)
#define IEMCCEBKBLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF8750)
#define IEMCCEBKBLB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EF88E0)
#define IEMCCEBKBLB_PLNLPJIFPLJ_OFFSET UNITYSDK_OFFSET(0x15EF8970)

inline static constexpr unsigned int IEMCCEBKBLB_TypeDefinitionIndex = 69340;

	class IEMCCEBKBLB : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* GJOCAPNAGJE; // 0x10
		::UnityEngine::AnimationCurve* LDDHEFEAABD; // 0x18
		::System::Single MGAANNGNDFJ; // 0x20
		::System::Single DFFJJAANLCE; // 0x24
		::System::Single ABKEJOMBJPO; // 0x28
		::System::Single AJEECMDPPMD; // 0x2C
		::System::Boolean GKIBGGINIOD; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single LEPFDNGLCKB; // 0x34
		::System::Single MNLKCLNDPEI; // 0x38
		::System::Single FANGHNBBPDA; // 0x3C
		::System::Void _ctor(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + IEMCCEBKBLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMCCEBKBLB_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEMCCEBKBLB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Single PLNLPJIFPLJ(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEMCCEBKBLB_PLNLPJIFPLJ_OFFSET))(this, a1, a2);
		}

		::System::Single CGIBGLLAKNO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMCCEBKBLB_CGIBGLLAKNO_OFFSET))(this);
		}

	};
