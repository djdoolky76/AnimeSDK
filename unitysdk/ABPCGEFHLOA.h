#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDKKJDIHMPJ.h"
#include "unitysdk/GEBBPMGAJNH.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define ABPCGEFHLOA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17CA0400)
#define ABPCGEFHLOA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x17CA0600)
#define ABPCGEFHLOA_DDBPHKOFLCN_OFFSET UNITYSDK_OFFSET(0x17CA0370)
#define ABPCGEFHLOA_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x17C9F9B0)
#define ABPCGEFHLOA_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x17C9FE20)
#define ABPCGEFHLOA_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x17CA04E0)
#define ABPCGEFHLOA_OFMKKOGGMPK_OFFSET UNITYSDK_OFFSET(0x17C9FF80)
#define ABPCGEFHLOA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17CA0450)
#define ABPCGEFHLOA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17C9FBF0)
#define ABPCGEFHLOA_OOIEOJGLHGD_OFFSET UNITYSDK_OFFSET(0x17CA00F0)
#define ABPCGEFHLOA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17C9FE60)
#define ABPCGEFHLOA_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x17CA0570)
#define ABPCGEFHLOA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9FFD0)

inline static constexpr unsigned int ABPCGEFHLOA_TypeDefinitionIndex = 84436;

class ABPCGEFHLOA : public ::GEBBPMGAJNH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* OLGEANDMMPB; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* BCBFOKFABIC; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* NADIJCLENBN; // 0x20
	::UnityEngine::Animation* KBLDOFCGGPJ; // 0x28
	::System::Boolean CGFLLPOCDJM; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single HACJFKBLODH; // 0x34
	::System::Int32 NNAEOAHFHJA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA__CTOR_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_PHOADBJGFBE_OFFSET))(this);
	}

	::EDKKJDIHMPJ OFMKKOGGMPK()
	{
		return ((::EDKKJDIHMPJ(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_OFMKKOGGMPK_OFFSET))(this);
	}

	::System::Void OOIEOJGLHGD(::System::String* PNLAAEFGJON, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_OOIEOJGLHGD_OFFSET))(this, PNLAAEFGJON, EJGDHCIBCJH);
	}

	::EDKKJDIHMPJ DDBPHKOFLCN()
	{
		return ((::EDKKJDIHMPJ(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_DDBPHKOFLCN_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Animation* AOKJEGNBALI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_BBOMJDBNHIC_OFFSET))(this, AOKJEGNBALI);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABPCGEFHLOA_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}
};
