#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/FDNCOAGCCKH.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHKJDGNCAMN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x10072C10)
#define OHKJDGNCAMN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x10072AE0)
#define OHKJDGNCAMN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10072A50)
#define OHKJDGNCAMN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10072B70)
#define OHKJDGNCAMN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x100728D0)
#define OHKJDGNCAMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10072740)
#define OHKJDGNCAMN__CCTOR_OFFSET UNITYSDK_OFFSET(0x100729D0)
#define OHKJDGNCAMN__CTOR_OFFSET UNITYSDK_OFFSET(0x10072A40)

inline static constexpr unsigned int OHKJDGNCAMN_TypeDefinitionIndex = 91112;

class OHKJDGNCAMN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xDC; // 0x0
	::System::String* GLLIDENNAAL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>* PGOCEJPOCFP; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHKJDGNCAMN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKJDGNCAMN__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKJDGNCAMN_TOSTRING_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKJDGNCAMN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKJDGNCAMN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKJDGNCAMN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKJDGNCAMN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKJDGNCAMN_DPIHOJBBGLA_OFFSET))(this);
	}
};
