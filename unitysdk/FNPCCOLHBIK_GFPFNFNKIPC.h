#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
class FNPCCOLHBIK_OLOCNNAHMPH;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNPCCOLHBIK_GFPFNFNKIPC_COIEFOLMLFO_OFFSET UNITYSDK_OFFSET(0x17F3F280)
#define FNPCCOLHBIK_GFPFNFNKIPC_CTOR_OFFSET UNITYSDK_OFFSET(0x17F3F4E0)
#define FNPCCOLHBIK_GFPFNFNKIPC_HJAALFKJHIM_OFFSET UNITYSDK_OFFSET(0x17F3F140)
#define FNPCCOLHBIK_GFPFNFNKIPC_LHGDIIHCJOF_OFFSET UNITYSDK_OFFSET(0x17F3F0C0)

inline static constexpr unsigned int FNPCCOLHBIK_GFPFNFNKIPC_TypeDefinitionIndex = 61551;

	class FNPCCOLHBIK_GFPFNFNKIPC : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropState>* FGFIJFAEIOB; // 0x10
		::System::UInt32 PCCCKLNCLHB; // 0x18
		::System::UInt32 IMNGBHHAKAN; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_GFPFNFNKIPC_CTOR_OFFSET))(this);
		}

		::System::Boolean LHGDIIHCJOF(::FNPCCOLHBIK_OLOCNNAHMPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNPCCOLHBIK_OLOCNNAHMPH*))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_GFPFNFNKIPC_LHGDIIHCJOF_OFFSET))(this, a1);
		}

		::System::Boolean HJAALFKJHIM(::FNPCCOLHBIK_OLOCNNAHMPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNPCCOLHBIK_OLOCNNAHMPH*))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_GFPFNFNKIPC_HJAALFKJHIM_OFFSET))(this, a1);
		}

		::System::Boolean COIEFOLMLFO(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_GFPFNFNKIPC_COIEFOLMLFO_OFFSET))(this, a1);
		}

	};
