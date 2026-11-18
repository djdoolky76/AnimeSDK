#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMHIOADBIPH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define FCHOMFKACMB_BEGCOAKAEHD_OFFSET UNITYSDK_OFFSET(0xBB380F0)
#define FCHOMFKACMB_CCKPIFNFFHH_OFFSET UNITYSDK_OFFSET(0xBB38100)
#define FCHOMFKACMB_JKCDIHJPEPB_OFFSET UNITYSDK_OFFSET(0xBB38110)
#define FCHOMFKACMB_KFOCKNEMJAN_OFFSET UNITYSDK_OFFSET(0xBB38120)
#define FCHOMFKACMB_NLMCEDCINFK_OFFSET UNITYSDK_OFFSET(0xBB38130)
#define FCHOMFKACMB_NPEIALODCCF_OFFSET UNITYSDK_OFFSET(0xBB380E0)
#define FCHOMFKACMB__CTOR_OFFSET UNITYSDK_OFFSET(0xBB380D0)

inline static constexpr unsigned int FCHOMFKACMB_TypeDefinitionIndex = 77731;

class FCHOMFKACMB : public ::System::Object
{
public:
	::UnityEngine::RenderTexture* _DACJNDPBOIK_k__BackingField; // 0x10
	::System::String* _JHPHPDMIJEJ_k__BackingField; // 0x18
	::System::Action_1<::JMHIOADBIPH*>* _JAIMEHFNOCH_k__BackingField; // 0x20

	::System::Void _ctor(::UnityEngine::RenderTexture* GLBPBKDPCBD, ::System::String* DCFDCJNNEGB, ::System::Action_1<::JMHIOADBIPH*>* MIJKHFIEGPL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::String*, ::System::Action_1<::JMHIOADBIPH*>*))((::PBYTE)hIl2Cpp + FCHOMFKACMB__CTOR_OFFSET))(this, GLBPBKDPCBD, DCFDCJNNEGB, MIJKHFIEGPL);
	}

	::System::Action_1<::JMHIOADBIPH*>* NPEIALODCCF()
	{
		return ((::System::Action_1<::JMHIOADBIPH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHOMFKACMB_NPEIALODCCF_OFFSET))(this);
	}

	::System::Void BEGCOAKAEHD(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCHOMFKACMB_BEGCOAKAEHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CCKPIFNFFHH(::UnityEngine::RenderTexture* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + FCHOMFKACMB_CCKPIFNFFHH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JKCDIHJPEPB(::System::Action_1<::JMHIOADBIPH*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::JMHIOADBIPH*>*))((::PBYTE)hIl2Cpp + FCHOMFKACMB_JKCDIHJPEPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KFOCKNEMJAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHOMFKACMB_KFOCKNEMJAN_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* NLMCEDCINFK()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHOMFKACMB_NLMCEDCINFK_OFFSET))(this);
	}
};
