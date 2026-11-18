#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFNFPICEBLD_MJIPDLBCHNH_OFFSET UNITYSDK_OFFSET(0x1E5EEE90)
#define IFNFPICEBLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EEEF0)

inline static constexpr unsigned int IFNFPICEBLD_TypeDefinitionIndex = 34119;

class IFNFPICEBLD : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* AIJFEHJHFNG; // 0x10
	::System::UInt32 GDIDPEIICMF; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::Byte>* MCOHLHMKLIP, ::System::UInt32 CMJLFAIMHLE)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + IFNFPICEBLD__CTOR_OFFSET))(this, MCOHLHMKLIP, CMJLFAIMHLE);
	}

	::System::Boolean MJIPDLBCHNH(::Il2CppArray<::System::Byte>*& MCOHLHMKLIP, ::System::UInt32& CMJLFAIMHLE)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + IFNFPICEBLD_MJIPDLBCHNH_OFFSET))(this, MCOHLHMKLIP, CMJLFAIMHLE);
	}
};
