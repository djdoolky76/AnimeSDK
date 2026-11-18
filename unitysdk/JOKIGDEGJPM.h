#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOKIGDEGJPM_ACOMNAPHCNJ_OFFSET UNITYSDK_OFFSET(0x1E5F6960)
#define JOKIGDEGJPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DCDC0)

inline static constexpr unsigned int JOKIGDEGJPM_TypeDefinitionIndex = 34077;

class JOKIGDEGJPM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKIGDEGJPM__CTOR_OFFSET))(this);
	}

	::System::Boolean ACOMNAPHCNJ(::Il2CppArray<::System::Byte>* OLKHDAAGGAA, ::System::Int32 BMAJBHKIONN, ::System::Int32 NNAPKPKMFHG, ::Il2CppArray<::System::Byte>* NJLNJCLGLNO, ::System::Int32 CJAMHOJFPMI, ::System::Int32& LLDKBEMNOFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JOKIGDEGJPM_ACOMNAPHCNJ_OFFSET))(this, OLKHDAAGGAA, BMAJBHKIONN, NNAPKPKMFHG, NJLNJCLGLNO, CJAMHOJFPMI, LLDKBEMNOFM);
	}
};
