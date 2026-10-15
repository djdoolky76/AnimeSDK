#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AnimationCurve; }

#define MGKNCBCKBLL_BEFGEKDEAIF_OFFSET UNITYSDK_OFFSET(0xB9274B0)
#define MGKNCBCKBLL_CAKOPAPLCAL_OFFSET UNITYSDK_OFFSET(0xB927BC0)
#define MGKNCBCKBLL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB927D00)
#define MGKNCBCKBLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB927CF0)
#define MGKNCBCKBLL_JGCPMOINECB_OFFSET UNITYSDK_OFFSET(0xB9271E0)
#define MGKNCBCKBLL_MALDFAKHOCF_OFFSET UNITYSDK_OFFSET(0xB927740)
#define MGKNCBCKBLL_MHOBLCGLHOH_OFFSET UNITYSDK_OFFSET(0xB9275C0)
#define MGKNCBCKBLL_MMPMNIDIDNG_OFFSET UNITYSDK_OFFSET(0xB927920)
#define MGKNCBCKBLL_NDKMNLDEKNM_OFFSET UNITYSDK_OFFSET(0xB927C70)
#define MGKNCBCKBLL_NFCCENENJNP_OFFSET UNITYSDK_OFFSET(0xB927620)

inline static constexpr unsigned int MGKNCBCKBLL_TypeDefinitionIndex = 49263;

	class MGKNCBCKBLL : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FALPBECEDDN()
		{
			return (::System::String**)UnitySDK::FromName("", "MGKNCBCKBLL")->GetStaticField(0x6FA10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKNCBCKBLL_CCTOR_OFFSET))();
		}

		static ::System::Boolean JGCPMOINECB(::UnityEngine::AnimationCurve* a1, ::Il2CppArray<::UnityEngine::Keyframe>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_JGCPMOINECB_OFFSET))(a1, a2);
		}

		static ::System::Boolean BEFGEKDEAIF(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_BEFGEKDEAIF_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MHOBLCGLHOH(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_MHOBLCGLHOH_OFFSET))(a1);
		}

		static ::System::String* NFCCENENJNP(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_NFCCENENJNP_OFFSET))(a1);
		}

		static ::System::String* MALDFAKHOCF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_MALDFAKHOCF_OFFSET))(a1);
		}

		static ::System::String* MMPMNIDIDNG(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_MMPMNIDIDNG_OFFSET))(a1);
		}

		static ::System::Void CAKOPAPLCAL(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_CAKOPAPLCAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NDKMNLDEKNM(::System::Type* a1, ::System::String* a2, ::System::Reflection::BindingFlags a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + MGKNCBCKBLL_NDKMNLDEKNM_OFFSET))(a1, a2, a3);
		}

	};
