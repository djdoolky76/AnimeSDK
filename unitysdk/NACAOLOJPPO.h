#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NACAOLOJPPO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12C2EF80)
#define NACAOLOJPPO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12C2EEF0)
#define NACAOLOJPPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C2EE70)
#define NACAOLOJPPO__CTOR_OFFSET UNITYSDK_OFFSET(0x12C2EEE0)

inline static constexpr unsigned int NACAOLOJPPO_TypeDefinitionIndex = 83926;

class NACAOLOJPPO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x7A; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* HBKGOGCADDP; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NACAOLOJPPO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACAOLOJPPO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACAOLOJPPO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACAOLOJPPO_FIGPAOKNJLN_OFFSET))(this);
	}
};
