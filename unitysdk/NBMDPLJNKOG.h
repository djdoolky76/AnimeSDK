#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define NBMDPLJNKOG_CGHEJJACMKH_OFFSET UNITYSDK_OFFSET(0x18F994D0)
#define NBMDPLJNKOG_HJIENHCLHGM_OFFSET UNITYSDK_OFFSET(0x18F99850)
#define NBMDPLJNKOG_JJDAMJDHOPM_OFFSET UNITYSDK_OFFSET(0x18F995E0)
#define NBMDPLJNKOG_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x18F996D0)
#define NBMDPLJNKOG_LBCLDCBGMAB_OFFSET UNITYSDK_OFFSET(0x18F998D0)
#define NBMDPLJNKOG__CTOR_OFFSET UNITYSDK_OFFSET(0x18F993A0)

inline static constexpr unsigned int NBMDPLJNKOG_TypeDefinitionIndex = 50129;

class NBMDPLJNKOG : public ::System::Object
{
public:
	// static const ::System::String* FODALHPCHME; // 0x0
	// static const ::System::String* NHDDDOOFLDP; // 0x0
	// static const ::System::Int32 PDAGIGLGGJC = 0x2; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* FDPPDMKFLEK; // 0x10
	::MoleMole::UIWindowController* HFAHMNHOIMJ; // 0x18
	::UnityEngine::Animation* EEFOCCNFJCO; // 0x20
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* GJKAGOFIAIJ; // 0x28
	::UnityEngine::Transform* FIAOONHHHCG; // 0x30
	::System::Boolean GEDGJKGMAEB; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 LABHAICPONM; // 0x3C
	::System::Int32 JHFKDGBCOBA; // 0x40

	::System::Void _ctor(::MoleMole::UIWindowController* ELFGOGPHBJH, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Int32 ANBFLGCMMFB, ::System::Boolean FEOAHGEPLPJ, ::UnityEngine::Animation* AOKJEGNBALI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + NBMDPLJNKOG__CTOR_OFFSET))(this, ELFGOGPHBJH, JNLBPMKIFNK, ANBFLGCMMFB, FEOAHGEPLPJ, AOKJEGNBALI);
	}

	::System::Void CGHEJJACMKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMDPLJNKOG_CGHEJJACMKH_OFFSET))(this);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMDPLJNKOG_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void JJDAMJDHOPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMDPLJNKOG_JJDAMJDHOPM_OFFSET))(this);
	}

	::System::Void HJIENHCLHGM(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* CFHFFPKKMHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + NBMDPLJNKOG_HJIENHCLHGM_OFFSET))(this, CFHFFPKKMHH);
	}

	::System::Void LBCLDCBGMAB(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* CFHFFPKKMHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + NBMDPLJNKOG_LBCLDCBGMAB_OFFSET))(this, CFHFFPKKMHH);
	}
};
