#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPENOMAIIOF;

#define ENACGLAODOO_GCLMKPBHLNI_OFFSET UNITYSDK_OFFSET(0x1E5EB360)
#define ENACGLAODOO_IEKGAMLDIEE_OFFSET UNITYSDK_OFFSET(0x1E5E7B20)
#define ENACGLAODOO_MJIPDLBCHNH_OFFSET UNITYSDK_OFFSET(0x1E5EAFE0)
#define ENACGLAODOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EB350)

inline static constexpr unsigned int ENACGLAODOO_TypeDefinitionIndex = 34105;

class ENACGLAODOO : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* AIJFEHJHFNG; // 0x10
	::System::UInt32 GDIDPEIICMF; // 0x18

	::System::Void _ctor(::System::UInt32 CMJLFAIMHLE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENACGLAODOO__CTOR_OFFSET))(this, CMJLFAIMHLE);
	}

	::System::Boolean MJIPDLBCHNH(::Il2CppArray<::System::Byte>*& MCOHLHMKLIP, ::System::UInt32& CMJLFAIMHLE)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ENACGLAODOO_MJIPDLBCHNH_OFFSET))(this, MCOHLHMKLIP, CMJLFAIMHLE);
	}

	static ::Il2CppArray<::System::Byte>* GCLMKPBHLNI(::System::UInt64 DGJHJJBDCHO, ::System::UInt64 BEPMDFENBMH)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + ENACGLAODOO_GCLMKPBHLNI_OFFSET))(DGJHJJBDCHO, BEPMDFENBMH);
	}

	::System::Boolean IEKGAMLDIEE(::CPENOMAIIOF* MOGKJOOCNGE)
	{
		return ((::System::Boolean(*)(::PVOID, ::CPENOMAIIOF*))((::PBYTE)hIl2Cpp + ENACGLAODOO_IEKGAMLDIEE_OFFSET))(this, MOGKJOOCNGE);
	}
};
