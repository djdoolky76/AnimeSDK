#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACKABEKCMOH;
class ACKABEKCMOH_NHGPPEFMBMD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define IGIHJMJPCAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16402830)
#define IGIHJMJPCAJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16402560)
#define IGIHJMJPCAJ_IHOIDNEEMKC_OFFSET UNITYSDK_OFFSET(0x16402400)
#define IGIHJMJPCAJ_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0x164022C0)

inline static constexpr unsigned int IGIHJMJPCAJ_TypeDefinitionIndex = 65958;

	class IGIHJMJPCAJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ACKABEKCMOH*>* EDOMPLHAILA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::ACKABEKCMOH*>* KEKLDOLJKBF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIHJMJPCAJ_CTOR_OFFSET))(this);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + IGIHJMJPCAJ_MPFKCHHCIMO_OFFSET))(this, a1);
		}

		::System::Void IHOIDNEEMKC(::System::String* a1, ::ACKABEKCMOH_NHGPPEFMBMD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ACKABEKCMOH_NHGPPEFMBMD*))((::PBYTE)hIl2Cpp + IGIHJMJPCAJ_IHOIDNEEMKC_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIHJMJPCAJ_HADOHLNHHGB_OFFSET))(this);
		}

	};
