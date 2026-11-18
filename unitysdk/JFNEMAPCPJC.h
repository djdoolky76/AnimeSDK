#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFNEMAPCPJC_BAGLBOCJJPD_OFFSET UNITYSDK_OFFSET(0x1E5E5A20)
#define JFNEMAPCPJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F6950)

inline static constexpr unsigned int JFNEMAPCPJC_TypeDefinitionIndex = 34078;

class JFNEMAPCPJC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNEMAPCPJC__CTOR_OFFSET))(this);
	}

	::System::Boolean BAGLBOCJJPD(::Il2CppArray<::System::Byte>*& LJBPECKCCEA, ::System::Int32 BOGPAHGJOJK, ::System::Int32 BEPMDFENBMH, ::Il2CppArray<::System::Byte>* MCOHLHMKLIP, ::System::UInt32 CMJLFAIMHLE)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + JFNEMAPCPJC_BAGLBOCJJPD_OFFSET))(this, LJBPECKCCEA, BOGPAHGJOJK, BEPMDFENBMH, MCOHLHMKLIP, CMJLFAIMHLE);
	}
};
