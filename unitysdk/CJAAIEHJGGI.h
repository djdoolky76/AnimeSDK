#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKFFIKPCJIH.h"
#include "unitysdk/PJBGHMDHHBM.h"

class DDLEFEMLDMM;
class DHBBFGNGIKE;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJAAIEHJGGI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DC85600)
#define CJAAIEHJGGI_IHMMKGFIGGM_OFFSET UNITYSDK_OFFSET(0x1DC857C0)
#define CJAAIEHJGGI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DC856E0)
#define CJAAIEHJGGI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DC85B90)
#define CJAAIEHJGGI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1DC85470)
#define CJAAIEHJGGI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DC85550)
#define CJAAIEHJGGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC85640)

inline static constexpr unsigned int CJAAIEHJGGI_TypeDefinitionIndex = 93697;

class CJAAIEHJGGI : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHBBFGNGIKE*>* DONBLIIMPPI; // 0x18
	::JKFFIKPCJIH DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAAIEHJGGI__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAAIEHJGGI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAAIEHJGGI_BHLAEBMEOLO_OFFSET))(this);
	}

	::DHBBFGNGIKE* KGNEJKNNODJ(::System::Int32 PIJIFFFPPEE)
	{
		return ((::DHBBFGNGIKE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJAAIEHJGGI_KGNEJKNNODJ_OFFSET))(this, PIJIFFFPPEE);
	}

	::System::Void IHMMKGFIGGM(::DDLEFEMLDMM* JMJOKHFIEIM)
	{
		return ((::System::Void(*)(::PVOID, ::DDLEFEMLDMM*))((::PBYTE)hIl2Cpp + CJAAIEHJGGI_IHMMKGFIGGM_OFFSET))(this, JMJOKHFIEIM);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJAAIEHJGGI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAAIEHJGGI_PHOADBJGFBE_OFFSET))(this);
	}
};
