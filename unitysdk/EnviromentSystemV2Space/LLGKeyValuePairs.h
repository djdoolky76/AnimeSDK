#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/BlendingValBase.h"
class CCFBPCBMINH;
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0x15654450)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x156540A0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_CTOR_OFFSET UNITYSDK_OFFSET(0x15654060)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0x15654400)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0x15654FA0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0x156545F0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15654280)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LLGKeyValuePairs_TypeDefinitionIndex = 49321;

	class LLGKeyValuePairs : public ::EnviromentSystemV2Space::BlendingValBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* values; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_CTOR_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_TOSTRING_OFFSET))(this);
		}

		::System::Void DGPLBNAIIGN(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_DGPLBNAIIGN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHKNODHIDI(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_BIHKNODHIDI_OFFSET))(this, a1, a2);
		}

		::System::Void KBFDFOGDILL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_KBFDFOGDILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMFKFFBMACL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRS_GMFKFFBMACL_OFFSET))(this, a1, a2);
		}

	};
}
