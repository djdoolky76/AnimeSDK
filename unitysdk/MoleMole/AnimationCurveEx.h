#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_ANIMATIONCURVEEX_DJIGEODMNOF_OFFSET UNITYSDK_OFFSET(0x177DD430)
#define MOLEMOLE_ANIMATIONCURVEEX_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x177DD230)
#define MOLEMOLE_ANIMATIONCURVEEX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x177DD150)
#define MOLEMOLE_ANIMATIONCURVEEX_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x177DD0B0)
#define MOLEMOLE_ANIMATIONCURVEEX_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x177DD1B0)
#define MOLEMOLE_ANIMATIONCURVEEX_GET_NOTNULLRUNTIMECURVE_OFFSET UNITYSDK_OFFSET(0x177DD090)
#define MOLEMOLE_ANIMATIONCURVEEX_GET__NOTNULLRUNTIMECURVE_OFFSET UNITYSDK_OFFSET(0x177DCF70)
#define MOLEMOLE_ANIMATIONCURVEEX_JFPPFJMIPKL_OFFSET UNITYSDK_OFFSET(0x177DD2B0)
#define MOLEMOLE_ANIMATIONCURVEEX_KBDDIGBLHCI_OFFSET UNITYSDK_OFFSET(0x177DCF90)
#define MOLEMOLE_ANIMATIONCURVEEX_NDNFDPPJKGJ_OFFSET UNITYSDK_OFFSET(0x177DD340)
#define MOLEMOLE_ANIMATIONCURVEEX_NPAJEAMAAJB_OFFSET UNITYSDK_OFFSET(0x177DD3B0)
#define MOLEMOLE_ANIMATIONCURVEEX_SET_KEYS_OFFSET UNITYSDK_OFFSET(0x177DD0E0)
#define MOLEMOLE_ANIMATIONCURVEEX_SET__NOTNULLRUNTIMECURVE_OFFSET UNITYSDK_OFFSET(0x177DD080)
#define MOLEMOLE_ANIMATIONCURVEEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x177DD1E0)
#define MOLEMOLE_ANIMATIONCURVEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x177DCF60)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationCurveEx_TypeDefinitionIndex = 54591;

	class AnimationCurveEx : public ::System::Object
	{
	public:
		static ::UnityEngine::AnimationCurve** StaticGet__defaultEmptyCurve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(AnimationCurveEx_TypeDefinitionIndex)->GetStaticField(0x419B0);
		}
		::System::String* _curveKey; // 0x10
		::UnityEngine::AnimationCurve* _curveInstance; // 0x18
		::UnityEngine::AnimationCurve* _runtimeCurve; // 0x20

		::System::Void _ctor(::System::String* CBMDJKGKBFF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX__CTOR_OFFSET))(this, CBMDJKGKBFF);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX__CCTOR_OFFSET))();
		}

		::UnityEngine::AnimationCurve* get__notNullRuntimeCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET__NOTNULLRUNTIMECURVE_OFFSET))(this);
		}

		::System::Void set__notNullRuntimeCurve(::UnityEngine::AnimationCurve* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_SET__NOTNULLRUNTIMECURVE_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::AnimationCurve* get_NotNullRuntimeCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET_NOTNULLRUNTIMECURVE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Keyframe>* get_keys()
		{
			return ((::Il2CppArray<::UnityEngine::Keyframe>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET_KEYS_OFFSET))(this);
		}

		::System::Void set_keys(::Il2CppArray<::UnityEngine::Keyframe>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_SET_KEYS_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Keyframe get_Item(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET_ITEM_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET_LENGTH_OFFSET))(this);
		}

		::System::Single FCFOEJGPDNO(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_FCFOEJGPDNO_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Int32 JFPPFJMIPKL(::System::Int32 ABHBKFJKINO, ::UnityEngine::Keyframe MCOHLHMKLIP)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_JFPPFJMIPKL_OFFSET))(this, ABHBKFJKINO, MCOHLHMKLIP);
		}

		::System::Void NDNFDPPJKGJ(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_NDNFDPPJKGJ_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void KBDDIGBLHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_KBDDIGBLHCI_OFFSET))(this);
		}

		::System::Void NPAJEAMAAJB(::System::Int32 ABHBKFJKINO, ::System::Single IECOJPMPJMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_NPAJEAMAAJB_OFFSET))(this, ABHBKFJKINO, IECOJPMPJMP);
		}

		::System::Int32 DJIGEODMNOF(::System::Single FNIOPKPHDEH, ::System::Single EGEGIMGMJHN)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_DJIGEODMNOF_OFFSET))(this, FNIOPKPHDEH, EGEGIMGMJHN);
		}
	};
}
