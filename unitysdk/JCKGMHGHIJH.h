#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class JCHGHMBDMIA;
class OPCGCFHAMIP;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define JCKGMHGHIJH_FJDJJDFCALJ_OFFSET UNITYSDK_OFFSET(0x1306D970)
#define JCKGMHGHIJH_HDEFMPHKEFA_OFFSET UNITYSDK_OFFSET(0x1306D7C0)
#define JCKGMHGHIJH_HOADCANICCE_OFFSET UNITYSDK_OFFSET(0x1306DA90)
#define JCKGMHGHIJH_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1306D6D0)
#define JCKGMHGHIJH_ONSTART_OFFSET UNITYSDK_OFFSET(0x1306D770)
#define JCKGMHGHIJH_PODCHNMPGBF_OFFSET UNITYSDK_OFFSET(0x1306DC30)
#define JCKGMHGHIJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1306D7B0)

inline static constexpr unsigned int JCKGMHGHIJH_TypeDefinitionIndex = 43542;

class JCKGMHGHIJH : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGMHGHIJH__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_ONSTART_OFFSET))(this);
	}

	::System::Void HDEFMPHKEFA(::JCHGHMBDMIA* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JCHGHMBDMIA*))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_HDEFMPHKEFA_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void FJDJJDFCALJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_FJDJJDFCALJ_OFFSET))(this);
	}

	::System::Void HOADCANICCE(::System::Int32 OGDNGAMKFDG, ::System::Action_1<::OPCGCFHAMIP*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::OPCGCFHAMIP*>*))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_HOADCANICCE_OFFSET))(this, OGDNGAMKFDG, EJGDHCIBCJH);
	}

	::System::Void PODCHNMPGBF(::System::Action* EJGDHCIBCJH, ::System::Action* NKGCDDCMBCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_PODCHNMPGBF_OFFSET))(this, EJGDHCIBCJH, NKGCDDCMBCF);
	}
};
