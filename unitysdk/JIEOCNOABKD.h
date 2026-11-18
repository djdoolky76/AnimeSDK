#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JIEOCNOABKD_FKFCHJDMNMO_OFFSET UNITYSDK_OFFSET(0x18A17970)
#define JIEOCNOABKD_METHOD_0_OFFSET UNITYSDK_OFFSET(0x18A17550)

inline static constexpr unsigned int JIEOCNOABKD_TypeDefinitionIndex = 91887;

class JIEOCNOABKD : public ::System::Object
{
public:
	static ::System::Void Method_0(::System::UInt64 GONODCOMIAA, ::Il2CppArray<::System::Byte>* KECGOGOKAPG)
	{
		return ((::System::Void(*)(::System::UInt64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JIEOCNOABKD_METHOD_0_OFFSET))(GONODCOMIAA, KECGOGOKAPG);
	}

	static ::System::Void FKFCHJDMNMO(::Il2CppArray<::System::Byte>* OBIFCNKAFCF, ::Il2CppArray<::System::Byte>* LIAJIEKIFJD, ::System::Int32 BOGPAHGJOJK, ::System::Int32 KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JIEOCNOABKD_FKFCHJDMNMO_OFFSET))(OBIFCNKAFCF, LIAJIEKIFJD, BOGPAHGJOJK, KMKBJKOEBMF);
	}
};
