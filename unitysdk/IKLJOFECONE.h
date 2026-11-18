#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening { class Tween; }

#define IKLJOFECONE_AOEAEDNFJBI_OFFSET UNITYSDK_OFFSET(0x1657F040)
#define IKLJOFECONE_DCFLNANEAKK_OFFSET UNITYSDK_OFFSET(0x1657E760)
#define IKLJOFECONE_GBMBPEHJDMC_OFFSET UNITYSDK_OFFSET(0x1657EB10)
#define IKLJOFECONE_HAIHJMHEKID_OFFSET UNITYSDK_OFFSET(0x1657F020)
#define IKLJOFECONE_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x1657F010)
#define IKLJOFECONE_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1657EF30)
#define IKLJOFECONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1657EF90)

inline static constexpr unsigned int IKLJOFECONE_TypeDefinitionIndex = 50556;

class IKLJOFECONE
{
public:
	::DG::Tweening::Tween* GABKFLINJBJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE__CTOR_OFFSET))(this);
	}

	::System::Int32 DCFLNANEAKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_DCFLNANEAKK_OFFSET))(this);
	}

	::System::Void GBMBPEHJDMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_GBMBPEHJDMC_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_HFJKKGKPANC_OFFSET))(this);
	}

	::System::Void HAIHJMHEKID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_HAIHJMHEKID_OFFSET))(this);
	}

	::System::Void AOEAEDNFJBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_AOEAEDNFJBI_OFFSET))(this);
	}
};
