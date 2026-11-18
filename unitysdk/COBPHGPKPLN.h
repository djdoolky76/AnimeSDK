#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COBPHGPKPLN_DPPEJJGFDBL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COBPHGPKPLN_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x120472D0)
#define COBPHGPKPLN_CHJPIGCIICK_OFFSET UNITYSDK_OFFSET(0x12047290)
#define COBPHGPKPLN_FMJOHPEAEEC_OFFSET UNITYSDK_OFFSET(0x12047430)
#define COBPHGPKPLN_ICONPHLDHDH_OFFSET UNITYSDK_OFFSET(0x120473B0)
#define COBPHGPKPLN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12047220)
#define COBPHGPKPLN__CTOR_OFFSET UNITYSDK_OFFSET(0x12047190)

inline static constexpr unsigned int COBPHGPKPLN_TypeDefinitionIndex = 64384;

class COBPHGPKPLN : public ::System::Object
{
public:
	::COBPHGPKPLN_DPPEJJGFDBL* BEMFJHOCJKF; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* ACDKKCINLON; // 0x18
	::System::Int32 LLEJGHKCANJ; // 0x20

	::System::Void _ctor(::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COBPHGPKPLN__CTOR_OFFSET))(this, DNFNKBNBJHM);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPHGPKPLN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* CHJPIGCIICK()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPHGPKPLN_CHJPIGCIICK_OFFSET))(this);
	}

	::System::Void ANPBCLAFCJB(::System::UInt32 BEPMDFENBMH, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + COBPHGPKPLN_ANPBCLAFCJB_OFFSET))(this, BEPMDFENBMH, HIAIKHDFCLN);
	}

	::System::Void ICONPHLDHDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPHGPKPLN_ICONPHLDHDH_OFFSET))(this);
	}

	::System::Void FMJOHPEAEEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPHGPKPLN_FMJOHPEAEEC_OFFSET))(this);
	}
};
