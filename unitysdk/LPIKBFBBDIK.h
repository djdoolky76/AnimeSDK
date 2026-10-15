#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class HJECPHGDJPJ;
namespace System { class String; }

#define LPIKBFBBDIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB8197C0)
#define LPIKBFBBDIK_DMLEMLJPLPB_OFFSET UNITYSDK_OFFSET(0xB819D70)
#define LPIKBFBBDIK_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0xB819830)
#define LPIKBFBBDIK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB819D10)
#define LPIKBFBBDIK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB8197D0)

inline static constexpr unsigned int LPIKBFBBDIK_TypeDefinitionIndex = 78242;

	class LPIKBFBBDIK : public ::KNFCEJEJINK
	{
	public:
		::HJECPHGDJPJ* MKKLHFCCCNF; // 0x18
		::System::Void _ctor(::HJECPHGDJPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJECPHGDJPJ*))((::PBYTE)hIl2Cpp + LPIKBFBBDIK_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIKBFBBDIK_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPIKBFBBDIK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IJEPAJIMDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIKBFBBDIK_IJEPAJIMDPA_OFFSET))(this);
		}

		::System::String* DMLEMLJPLPB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIKBFBBDIK_DMLEMLJPLPB_OFFSET))(this);
		}

	};
