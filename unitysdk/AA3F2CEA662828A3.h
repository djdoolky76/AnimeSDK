#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define AA3F2CEA662828A3_EAE51B7D44956873_OFFSET UNITYSDK_OFFSET(0x3E55FF0)
#define AA3F2CEA662828A3_EF1254BB83916179_OFFSET UNITYSDK_OFFSET(0x3E55EB0)
#define AA3F2CEA662828A3_F6FD3CB536231B3C_OFFSET UNITYSDK_OFFSET(0x3E55E40)
#define AA3F2CEA662828A3__CTOR_OFFSET UNITYSDK_OFFSET(0x3E56380)

inline static constexpr unsigned int AA3F2CEA662828A3_TypeDefinitionIndex = 14838;

class AA3F2CEA662828A3 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* FFED8373ACBE5D6D; // 0x10
	::Il2CppArray<::System::Int32>* BEA5AB3156243CB3; // 0x18
	::Il2CppArray<::Il2CppArray<::System::Int32>*>* A7464B1708A96D62; // 0x20
	::System::String* E14AE066FB1FD139; // 0x28
	::System::Int32 BC4D3CD03F660FB2; // 0x30
	::System::Int32 A011DA0F77F5443C; // 0x34
	::System::Boolean A93F8F9AFC0F7FBD; // 0x38
	::System::Boolean BBE171D677A8A4F8; // 0x39
	::System::Byte _padding0[0x6];
	::System::Globalization::CultureInfo* B2AEBD2A54D57438; // 0x40

	::System::Int32 EAE51B7D44956873(::System::String* E97E8D008427A296, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A2484A01DB92A850, ::System::Int32 A2A0AE1050F41394)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AA3F2CEA662828A3_EAE51B7D44956873_OFFSET))(this, E97E8D008427A296, B48C66E5FB2449C6, A2484A01DB92A850, A2A0AE1050F41394);
	}

	::System::Void _ctor(::System::String* AC3ED6E7B8544859, ::System::Boolean EBBB3BEFA4ED0884, ::System::Boolean E2971D06496D0B52, ::System::Globalization::CultureInfo* B639ACA4E77C2506)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + AA3F2CEA662828A3__CTOR_OFFSET))(this, AC3ED6E7B8544859, EBBB3BEFA4ED0884, E2971D06496D0B52, B639ACA4E77C2506);
	}

	::System::Boolean F6FD3CB536231B3C(::System::String* E97E8D008427A296, ::System::Int32 B48C66E5FB2449C6, ::System::Int32 A2484A01DB92A850, ::System::Int32 A2A0AE1050F41394)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AA3F2CEA662828A3_F6FD3CB536231B3C_OFFSET))(this, E97E8D008427A296, B48C66E5FB2449C6, A2484A01DB92A850, A2A0AE1050F41394);
	}

	::System::Boolean EF1254BB83916179(::System::String* E97E8D008427A296, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + AA3F2CEA662828A3_EF1254BB83916179_OFFSET))(this, E97E8D008427A296, B48C66E5FB2449C6);
	}
};
