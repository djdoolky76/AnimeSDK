#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/System/Object.h"

class BHECBBCIMBF;
class DDHEGIHEKLH;
class PIOMHDMPINF;
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJCBEHKGAJP_DMNKFDIOFFF_OFFSET UNITYSDK_OFFSET(0x1691E150)
#define BJCBEHKGAJP_FNPFMJGJPAG_OFFSET UNITYSDK_OFFSET(0x1691E090)
#define BJCBEHKGAJP_INLDMDEHEEJ_OFFSET UNITYSDK_OFFSET(0x1691E040)
#define BJCBEHKGAJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1691DDD0)

inline static constexpr unsigned int BJCBEHKGAJP_TypeDefinitionIndex = 58637;

class BJCBEHKGAJP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::DDHEGIHEKLH*>* EMOLGNAGAIM; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* LPPAIDEMIOK; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::PIOMHDMPINF*>* NBCCAPDLMJO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt32>* EHFMILEOJHJ; // 0x28
	::MoleMole::UIWindowController* GHBLGLMKCEJ; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DDHEGIHEKLH*>* FADDEAAAAFG; // 0x38
	::System::UInt32 KHLOADGBNNA; // 0x40

	::System::Void _ctor(::MoleMole::UIWindowController* GHBLGLMKCEJ, ::System::Action_1<::BJCBEHKGAJP*>* MPELJKGDJCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Action_1<::BJCBEHKGAJP*>*))((::PBYTE)hIl2Cpp + BJCBEHKGAJP__CTOR_OFFSET))(this, GHBLGLMKCEJ, MPELJKGDJCI);
	}

	::System::Boolean INLDMDEHEEJ(::System::String* AEFBPLEGCJJ, ::CHNIDBLJFIJ OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CHNIDBLJFIJ))((::PBYTE)hIl2Cpp + BJCBEHKGAJP_INLDMDEHEEJ_OFFSET))(this, AEFBPLEGCJJ, OBNIAHNMHPF);
	}

	::System::Void FNPFMJGJPAG(::BHECBBCIMBF* OBGBFHGKILC, ::System::Collections::Generic::List_1<::System::String*>*& IDLCDOPMALL)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + BJCBEHKGAJP_FNPFMJGJPAG_OFFSET))(this, OBGBFHGKILC, IDLCDOPMALL);
	}

	::System::Boolean DMNKFDIOFFF(::BHECBBCIMBF* OBGBFHGKILC, ::CHNIDBLJFIJ OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BHECBBCIMBF*, ::CHNIDBLJFIJ))((::PBYTE)hIl2Cpp + BJCBEHKGAJP_DMNKFDIOFFF_OFFSET))(this, OBGBFHGKILC, OBNIAHNMHPF);
	}
};
