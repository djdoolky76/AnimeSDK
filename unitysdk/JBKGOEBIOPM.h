#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPBHMEAAODJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Renderer; }

#define JBKGOEBIOPM_KMKBKOKMJLP_1_OFFSET UNITYSDK_OFFSET(0x16AC13E0)
#define JBKGOEBIOPM_KMKBKOKMJLP_OFFSET UNITYSDK_OFFSET(0x16AC0E10)
#define JBKGOEBIOPM_OECHPMDBCHI_1_OFFSET UNITYSDK_OFFSET(0x16AC15A0)
#define JBKGOEBIOPM_OECHPMDBCHI_OFFSET UNITYSDK_OFFSET(0x16AC1070)
#define JBKGOEBIOPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AC0D70)
#define JBKGOEBIOPM__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC0D60)

inline static constexpr unsigned int JBKGOEBIOPM_TypeDefinitionIndex = 59577;

class JBKGOEBIOPM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::CPBHMEAAODJ*>** StaticGet_KMNNLKCEEPE()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::CPBHMEAAODJ*>**)Il2CppClass::FromTypeDefinitionIndex(JBKGOEBIOPM_TypeDefinitionIndex)->GetStaticField(0x4F6B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKGOEBIOPM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBKGOEBIOPM__CCTOR_OFFSET))();
	}

	static ::System::Void KMKBKOKMJLP(::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + JBKGOEBIOPM_KMKBKOKMJLP_OFFSET))(OCFHGOGFGPE);
	}

	static ::System::Void OECHPMDBCHI(::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + JBKGOEBIOPM_OECHPMDBCHI_OFFSET))(OCFHGOGFGPE);
	}

	static ::System::Void KMKBKOKMJLP_1(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + JBKGOEBIOPM_KMKBKOKMJLP_1_OFFSET))(AEPONOJONAA);
	}

	static ::System::Void OECHPMDBCHI_1(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + JBKGOEBIOPM_OECHPMDBCHI_1_OFFSET))(AEPONOJONAA);
	}
};
