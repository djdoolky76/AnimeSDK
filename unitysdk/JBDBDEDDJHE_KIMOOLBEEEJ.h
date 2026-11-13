#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPCJPPDKFJL;
class GAJOCNCABJL;
class OEIKFPLBOMH;
class PHMHMHLCFMG;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JBDBDEDDJHE_KIMOOLBEEEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19A68D60)
#define JBDBDEDDJHE_KIMOOLBEEEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A68FB0)
#define JBDBDEDDJHE_KIMOOLBEEEJ_FEANJCAHLOL_OFFSET UNITYSDK_OFFSET(0x19A69100)
#define JBDBDEDDJHE_KIMOOLBEEEJ_GOJJHEGEJIH_OFFSET UNITYSDK_OFFSET(0x19A68E80)
#define JBDBDEDDJHE_KIMOOLBEEEJ_ICNLMKMGGBG_OFFSET UNITYSDK_OFFSET(0x19A68DF0)
#define JBDBDEDDJHE_KIMOOLBEEEJ_IKHJMENJMHJ_OFFSET UNITYSDK_OFFSET(0x19A691A0)
#define JBDBDEDDJHE_KIMOOLBEEEJ_LLOFKNAKJJA_OFFSET UNITYSDK_OFFSET(0x19A69090)

inline static constexpr unsigned int JBDBDEDDJHE_KIMOOLBEEEJ_TypeDefinitionIndex = 50976;

	class JBDBDEDDJHE_KIMOOLBEEEJ : public ::System::Object
	{
	public:
		::System::String* GEJIJFFILEB; // 0x10
		::UnityEngine::GameObject* FLMODBLFAGD; // 0x18
		::UnityEngine::Transform* KJMDDAHEODL; // 0x20
		::OEIKFPLBOMH* JKCNFDEAMDJ; // 0x28
		::GAJOCNCABJL* MEHIJLKGKOI; // 0x30
		::BPCJPPDKFJL* JINMBJAHPJG; // 0x38
		::PHMHMHLCFMG* DLALHGJDNNO; // 0x40
		::UnityEngine::GameObject* PGKENBMKDKA; // 0x48
		::System::Boolean OOPAIHBMNKM; // 0x50
		::System::Boolean GFAMGLFOMGI; // 0x51
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2, ::PHMHMHLCFMG* a3, ::OEIKFPLBOMH* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::PHMHMHLCFMG*, ::OEIKFPLBOMH*))((::PBYTE)hIl2Cpp + JBDBDEDDJHE_KIMOOLBEEEJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ICNLMKMGGBG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBDBDEDDJHE_KIMOOLBEEEJ_ICNLMKMGGBG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBDEDDJHE_KIMOOLBEEEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void GOJJHEGEJIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBDEDDJHE_KIMOOLBEEEJ_GOJJHEGEJIH_OFFSET))(this);
		}

		::System::Void IKHJMENJMHJ(::GAJOCNCABJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJOCNCABJL*))((::PBYTE)hIl2Cpp + JBDBDEDDJHE_KIMOOLBEEEJ_IKHJMENJMHJ_OFFSET))(this, a1);
		}

		::System::Void LLOFKNAKJJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBDEDDJHE_KIMOOLBEEEJ_LLOFKNAKJJA_OFFSET))(this);
		}

		::System::Void FEANJCAHLOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBDEDDJHE_KIMOOLBEEEJ_FEANJCAHLOL_OFFSET))(this);
		}

	};
