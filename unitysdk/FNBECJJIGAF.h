#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FNBECJJIGAF;
class JBACCAGFHON;
namespace System { class String; }

#define FNBECJJIGAF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x167DC040)
#define FNBECJJIGAF_CTOR_OFFSET UNITYSDK_OFFSET(0x167DC360)
#define FNBECJJIGAF_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x167DC2E0)
#define FNBECJJIGAF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x167DC100)
#define FNBECJJIGAF__ONEXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0x167DC370)

inline static constexpr unsigned int FNBECJJIGAF_TypeDefinitionIndex = 80911;

	class FNBECJJIGAF : public ::AJHHFMBOCEN
	{
	public:
		::System::String* NNIOCPHFNNG; // 0x20
		::JBACCAGFHON* PDENFEFCAGN; // 0x28
		::System::Single MAEAFKDAOMA; // 0x30
		::UnityEngine::Vector3 FAIBBJPMAIG; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBECJJIGAF_CTOR_OFFSET))(this);
		}

		static ::FNBECJJIGAF* BPLPBPMEODA(::JBACCAGFHON* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::FNBECJJIGAF*(*)(::JBACCAGFHON*, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FNBECJJIGAF_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBECJJIGAF_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBECJJIGAF_ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnExecute_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBECJJIGAF__ONEXECUTE_B__5_0_OFFSET))(this);
		}

	};
