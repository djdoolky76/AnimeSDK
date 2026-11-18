#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PFCPBBAJFPP_ACOMNAPHCNJ_OFFSET UNITYSDK_OFFSET(0x1E5F8BE0)
#define PFCPBBAJFPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DCDD0)

inline static constexpr unsigned int PFCPBBAJFPP_TypeDefinitionIndex = 34072;

class PFCPBBAJFPP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCPBBAJFPP__CTOR_OFFSET))(this);
	}

	::System::Boolean ACOMNAPHCNJ(::Il2CppArray<::System::Byte>* OLKHDAAGGAA, ::System::Int32 BMAJBHKIONN, ::System::Int32 NNAPKPKMFHG, ::Il2CppArray<::System::Byte>* NJLNJCLGLNO, ::System::Int32 CJAMHOJFPMI, ::System::Int32& LLDKBEMNOFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PFCPBBAJFPP_ACOMNAPHCNJ_OFFSET))(this, OLKHDAAGGAA, BMAJBHKIONN, NNAPKPKMFHG, NJLNJCLGLNO, CJAMHOJFPMI, LLDKBEMNOFM);
	}
};
