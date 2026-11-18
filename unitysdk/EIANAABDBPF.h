#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class KHLJFPECEGH;
namespace System { class Object; }

#define EIANAABDBPF_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x14150200)
#define EIANAABDBPF_KKFIHHCHHGE_OFFSET UNITYSDK_OFFSET(0x14150A60)
#define EIANAABDBPF__CTOR_OFFSET UNITYSDK_OFFSET(0x14150B60)

inline static constexpr unsigned int EIANAABDBPF_TypeDefinitionIndex = 53608;

class EIANAABDBPF : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIANAABDBPF__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + EIANAABDBPF_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	::UnityEngine::Vector3 KKFIHHCHHGE(::UnityEngine::Vector3 AJJPDHGGDOH, ::System::Single DAINJDMFLKE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EIANAABDBPF_KKFIHHCHHGE_OFFSET))(this, AJJPDHGGDOH, DAINJDMFLKE);
	}
};
