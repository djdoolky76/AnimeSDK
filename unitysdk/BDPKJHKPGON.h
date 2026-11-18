#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Transform; }

#define BDPKJHKPGON_CGLOAMKOFBM_OFFSET UNITYSDK_OFFSET(0x1506C800)
#define BDPKJHKPGON_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1506C960)
#define BDPKJHKPGON_EELNDIGDGOJ_OFFSET UNITYSDK_OFFSET(0x1506C6B0)
#define BDPKJHKPGON_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1506C570)
#define BDPKJHKPGON__CTOR_OFFSET UNITYSDK_OFFSET(0x1506C950)

inline static constexpr unsigned int BDPKJHKPGON_TypeDefinitionIndex = 75412;

class BDPKJHKPGON : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* OJOBKJALAMP; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IKJJDLILIKE; // 0x20
	::UnityEngine::Transform* GEALCOLDFGE; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* DHGMLEJHOOH; // 0x30
	::UnityEngine::Transform* LEKIMGKFLDA; // 0x38
	::Cinemachine::CinemachineVirtualCamera* ADCMOECNMLG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPKJHKPGON__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDPKJHKPGON_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EELNDIGDGOJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDPKJHKPGON_EELNDIGDGOJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* CGLOAMKOFBM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDPKJHKPGON_CGLOAMKOFBM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDPKJHKPGON_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
