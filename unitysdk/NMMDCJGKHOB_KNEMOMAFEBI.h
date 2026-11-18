#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMMDCJGKHOB_KNEMOMAFEBI_GHFKNNFHMDP_OFFSET UNITYSDK_OFFSET(0xE76A190)
#define NMMDCJGKHOB_KNEMOMAFEBI__CTOR_OFFSET UNITYSDK_OFFSET(0xE76A180)

inline static constexpr unsigned int NMMDCJGKHOB_KNEMOMAFEBI_TypeDefinitionIndex = 54808;

class NMMDCJGKHOB_KNEMOMAFEBI : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BPGPPMDMKEK; // 0x18
	::System::String* NFLDEIEOEOB; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OEGEAFMAFBI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_KNEMOMAFEBI__CTOR_OFFSET))(this);
	}

	::System::Void GHFKNNFHMDP(::OAEFGCLEHHO* DLJPLHKELCO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_KNEMOMAFEBI_GHFKNNFHMDP_OFFSET))(this, DLJPLHKELCO);
	}
};
