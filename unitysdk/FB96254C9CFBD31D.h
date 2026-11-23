#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AF7290E01E012C43.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AB4BABFB400D6C39; }

#define FB96254C9CFBD31D_B2BBBE3ED9FD5CBB_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define FB96254C9CFBD31D_BC68F88057E2728C_OFFSET UNITYSDK_OFFSET(0x43FB140)
#define FB96254C9CFBD31D_F49E492BC95A10DA_OFFSET UNITYSDK_OFFSET(0x43FB1F0)
#define FB96254C9CFBD31D__CCTOR_OFFSET UNITYSDK_OFFSET(0x43FB550)
#define FB96254C9CFBD31D__CTOR_OFFSET UNITYSDK_OFFSET(0x43FB600)

inline static constexpr unsigned int FB96254C9CFBD31D_TypeDefinitionIndex = 19408;

class FB96254C9CFBD31D : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::AF7290E01E012C43>** StaticGet_F110F4F14BAB7B8F()
	{
		return (::Il2CppArray<::UnityEngine::AF7290E01E012C43>**)Il2CppClass::FromTypeDefinitionIndex(FB96254C9CFBD31D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::UnityEngine::AB4BABFB400D6C39*>* BF9FEC313BE8AC63; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::AB4BABFB400D6C39*>* EDBA4449F282C7D6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB96254C9CFBD31D__CTOR_OFFSET))(this);
	}

	::System::Void BC68F88057E2728C(::UnityEngine::AB4BABFB400D6C39* BAFBBB8691317753)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AB4BABFB400D6C39*))((::PBYTE)hIl2Cpp + FB96254C9CFBD31D_BC68F88057E2728C_OFFSET))(this, BAFBBB8691317753);
	}

	::System::Void F49E492BC95A10DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB96254C9CFBD31D_F49E492BC95A10DA_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FB96254C9CFBD31D__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::UnityEngine::AB4BABFB400D6C39*>* B2BBBE3ED9FD5CBB()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::AB4BABFB400D6C39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FB96254C9CFBD31D_B2BBBE3ED9FD5CBB_OFFSET))(this);
	}
};
