#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMJHIOEDPLA.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
namespace System { class Action; }
template <typename T> class KCMIFNGABDC_1;

#define DJIOAKLGDFL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19415010)
#define DJIOAKLGDFL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19414D40)
#define DJIOAKLGDFL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19415AF0)
#define DJIOAKLGDFL_PFJEJJHJOEB_OFFSET UNITYSDK_OFFSET(0x194152F0)
#define DJIOAKLGDFL__CTOR_OFFSET UNITYSDK_OFFSET(0x19415870)

inline static constexpr unsigned int DJIOAKLGDFL_TypeDefinitionIndex = 57637;

class DJIOAKLGDFL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* LCKDPFLFDAM; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* IMDFDLBIDGK; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x38
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x40
	::MKBBPOFGLOF* BOHNBOELHDG; // 0x48
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ALCGAAFLCFK; // 0x50
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Void PFJEJJHJOEB(::System::Int32 HJALFKPADLA, ::DMJHIOEDPLA KJKHOJJANFO, ::UnityEngine::Vector3 DBLPIMILOHC, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BFBELMDIAHI, ::System::Action* EDNJGMKPFHG, ::System::Action* IFKOKLCPMNF)
	{
		return ((::System::Void(*)(::System::Int32, ::DMJHIOEDPLA, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_PFJEJJHJOEB_OFFSET))(HJALFKPADLA, KJKHOJJANFO, DBLPIMILOHC, OHOGDOMNHNK, BFBELMDIAHI, EDNJGMKPFHG, IFKOKLCPMNF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_GDEOPIBNOIN_OFFSET))(this);
	}
};
