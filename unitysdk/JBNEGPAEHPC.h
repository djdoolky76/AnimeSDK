#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DACDFPKGELK.h"
class MNNMECAGEJG;
namespace System { class String; }

#define JBNEGPAEHPC_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x16566A40)
#define JBNEGPAEHPC_CTOR_OFFSET UNITYSDK_OFFSET(0x16566870)
#define JBNEGPAEHPC_OOPJCBAIKMA_OFFSET UNITYSDK_OFFSET(0x16566B80)

inline static constexpr unsigned int JBNEGPAEHPC_TypeDefinitionIndex = 80648;

	class JBNEGPAEHPC : public ::System::Object
	{
	public:
		::System::String* IOOAAMGICKC; // 0x10
		::System::String* IOABPJAFBOJ; // 0x18
		::MNNMECAGEJG* KMJDIEJMGLI; // 0x20
		::MNNMECAGEJG* EAFNFCALNPF; // 0x28
		::UnityEngine::Vector3 AGDMFOBNDLG; // 0x30
		::System::Single NDKKKNKFAPH; // 0x3C
		::System::Single JCDKACJFACD; // 0x40
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JBNEGPAEHPC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::DACDFPKGELK AKJABINEGDJ()
		{
			return ((::DACDFPKGELK(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNEGPAEHPC_AKJABINEGDJ_OFFSET))(this);
		}

		::DACDFPKGELK OOPJCBAIKMA(::System::Single a1)
		{
			return ((::DACDFPKGELK(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBNEGPAEHPC_OOPJCBAIKMA_OFFSET))(this, a1);
		}

	};
