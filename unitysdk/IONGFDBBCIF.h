#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICIMFKPDDMD;
class ICIMFKPDDMD_CEHBLMGKHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define IONGFDBBCIF_CTOR_OFFSET UNITYSDK_OFFSET(0x165067F0)
#define IONGFDBBCIF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16506550)
#define IONGFDBBCIF_IHOIDNEEMKC_OFFSET UNITYSDK_OFFSET(0x16506430)
#define IONGFDBBCIF_INIJCJJLPKM_1_OFFSET UNITYSDK_OFFSET(0x16506140)
#define IONGFDBBCIF_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0x165062F0)

inline static constexpr unsigned int IONGFDBBCIF_TypeDefinitionIndex = 71178;

	class IONGFDBBCIF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::ICIMFKPDDMD*>* KEKLDOLJKBF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ICIMFKPDDMD*>* EDOMPLHAILA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONGFDBBCIF_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* INIJCJJLPKM_1(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IONGFDBBCIF_INIJCJJLPKM_1_OFFSET))(this, a1);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + IONGFDBBCIF_MPFKCHHCIMO_OFFSET))(this, a1);
		}

		::System::Void IHOIDNEEMKC(::System::String* a1, ::ICIMFKPDDMD_CEHBLMGKHHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ICIMFKPDDMD_CEHBLMGKHHN*))((::PBYTE)hIl2Cpp + IONGFDBBCIF_IHOIDNEEMKC_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONGFDBBCIF_HADOHLNHHGB_OFFSET))(this);
		}

	};
