#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E785594F92C0DECC__CTOR_OFFSET UNITYSDK_OFFSET(0x3CA9780)

inline static constexpr unsigned int E785594F92C0DECC_TypeDefinitionIndex = 10560;

class E785594F92C0DECC : public ::System::Object
{
public:
	::System::Int32 F15DED49F43372B1; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Char>* B71DB94CCECA26C4; // 0x18
	::System::String* E879AACB19F8B8EF; // 0x20
	::Il2CppArray<::System::Byte>* FF9476F3D687E5AD; // 0x28

	::System::Void _ctor(::System::Int32 B48C66E5FB2449C6, ::Il2CppArray<::System::Char>* AFE8F10692F5139F, ::System::String* E92BD78D19B1A85C, ::Il2CppArray<::System::Byte>* F65CC5ED62954347)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + E785594F92C0DECC__CTOR_OFFSET))(this, B48C66E5FB2449C6, AFE8F10692F5139F, E92BD78D19B1A85C, F65CC5ED62954347);
	}
};
