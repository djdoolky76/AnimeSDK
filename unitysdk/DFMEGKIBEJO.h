#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class DFMEGKIBEJO_LGFJDAOJOLM;
class EDLHMDBMNGM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFMEGKIBEJO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x147C8B60)
#define DFMEGKIBEJO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x147C8CE0)
#define DFMEGKIBEJO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x147C8E10)
#define DFMEGKIBEJO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x147C8AF0)
#define DFMEGKIBEJO__CCTOR_OFFSET UNITYSDK_OFFSET(0x147C8BB0)
#define DFMEGKIBEJO__CTOR_OFFSET UNITYSDK_OFFSET(0x147C8C30)

inline static constexpr unsigned int DFMEGKIBEJO_TypeDefinitionIndex = 80295;

class DFMEGKIBEJO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x4D; // 0x0
	::System::Collections::Generic::List_1<::EDLHMDBMNGM*>* GDOHJNPAIJJ; // 0x48
	::DFMEGKIBEJO_LGFJDAOJOLM* LHPFMGBDFPN; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFMEGKIBEJO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMEGKIBEJO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMEGKIBEJO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMEGKIBEJO_GETCLASSID_OFFSET))(this);
	}

	static ::DFMEGKIBEJO* JFDOOELFAOA()
	{
		return ((::DFMEGKIBEJO*(*)())((::PBYTE)hIl2Cpp + DFMEGKIBEJO_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMEGKIBEJO_MEFBHFEOKGH_OFFSET))(this);
	}
};
