#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class LJNNNKPCNDL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFGHENPHCGL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10E35700)
#define CFGHENPHCGL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10E35860)
#define CFGHENPHCGL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10E35960)
#define CFGHENPHCGL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10E35690)
#define CFGHENPHCGL__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E35750)
#define CFGHENPHCGL__CTOR_OFFSET UNITYSDK_OFFSET(0x10E357D0)

inline static constexpr unsigned int CFGHENPHCGL_TypeDefinitionIndex = 92981;

class CFGHENPHCGL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB9; // 0x0
	::System::Collections::Generic::List_1<::LJNNNKPCNDL*>* NJJLLAOHILI; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFGHENPHCGL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGHENPHCGL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGHENPHCGL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGHENPHCGL_GETCLASSID_OFFSET))(this);
	}

	static ::CFGHENPHCGL* JFDOOELFAOA()
	{
		return ((::CFGHENPHCGL*(*)())((::PBYTE)hIl2Cpp + CFGHENPHCGL_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGHENPHCGL_MEFBHFEOKGH_OFFSET))(this);
	}
};
