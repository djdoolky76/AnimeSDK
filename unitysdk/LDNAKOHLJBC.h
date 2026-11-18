#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class KHLJFPECEGH;
namespace System { class Object; }

#define LDNAKOHLJBC_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x18658A30)
#define LDNAKOHLJBC_KKFIHHCHHGE_OFFSET UNITYSDK_OFFSET(0x18658F50)
#define LDNAKOHLJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x18658F40)

inline static constexpr unsigned int LDNAKOHLJBC_TypeDefinitionIndex = 49051;

class LDNAKOHLJBC : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNAKOHLJBC__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LDNAKOHLJBC_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	::UnityEngine::Vector3 KKFIHHCHHGE(::UnityEngine::Vector3 AJJPDHGGDOH, ::System::Single DAINJDMFLKE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LDNAKOHLJBC_KKFIHHCHHGE_OFFSET))(this, AJJPDHGGDOH, DAINJDMFLKE);
	}
};
