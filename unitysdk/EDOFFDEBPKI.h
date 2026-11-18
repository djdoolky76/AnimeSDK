#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EDOFFDEBPKI_DBBFOPKHPMK_OFFSET UNITYSDK_OFFSET(0x19F46810)

inline static constexpr unsigned int EDOFFDEBPKI_TypeDefinitionIndex = 15924;

class EDOFFDEBPKI : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>** StaticGet_MFGBDGHHKOB()
	{
		return (::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(EDOFFDEBPKI_TypeDefinitionIndex)->GetStaticField(0x7A30);
	}

	static ::System::Void DBBFOPKHPMK(::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>* ABACDNMGMIE)
	{
		return ((::System::Void(*)(::System::Func_2<::System::String*, ::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + EDOFFDEBPKI_DBBFOPKHPMK_OFFSET))(ABACDNMGMIE);
	}
};
