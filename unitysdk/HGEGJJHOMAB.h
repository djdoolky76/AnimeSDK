#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class GMBDKAPICHA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LJHFMILANJA_1;

#define HGEGJJHOMAB_IOKMBGFLIBH_OFFSET UNITYSDK_OFFSET(0x14D26750)
#define HGEGJJHOMAB_JLIGKGDDCKA_OFFSET UNITYSDK_OFFSET(0x14D26BF0)
#define HGEGJJHOMAB_LEOJDGLEDEE_OFFSET UNITYSDK_OFFSET(0x14D270D0)
#define HGEGJJHOMAB_NOIANMDABAM_OFFSET UNITYSDK_OFFSET(0x14D265F0)
#define HGEGJJHOMAB_OJMNLBCBCIB_OFFSET UNITYSDK_OFFSET(0x14D271D0)
#define HGEGJJHOMAB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14D26370)
#define HGEGJJHOMAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D265E0)

inline static constexpr unsigned int HGEGJJHOMAB_TypeDefinitionIndex = 62103;

class HGEGJJHOMAB : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Int32>* FDOGGANACAP; // 0x88
	::GMBDKAPICHA* LJBPECKCCEA; // 0x90
	::LJHFMILANJA_1<::System::Int32>* DNMGCCOKJCI; // 0x98
	::IHECGHKOIPM_1<::System::Int32>* GIMKMNALPJF; // 0xA0
	::IHECGHKOIPM_1<::System::Int32>* BPGODNEMNOO; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEGJJHOMAB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEGJJHOMAB_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean NOIANMDABAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEGJJHOMAB_NOIANMDABAM_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* IOKMBGFLIBH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEGJJHOMAB_IOKMBGFLIBH_OFFSET))(this);
	}

	::System::Void JLIGKGDDCKA(::System::Int32 FMEKFDKKEDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGEGJJHOMAB_JLIGKGDDCKA_OFFSET))(this, FMEKFDKKEDH);
	}

	::System::Int32 LEOJDGLEDEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEGJJHOMAB_LEOJDGLEDEE_OFFSET))(this);
	}

	::System::Int32 OJMNLBCBCIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEGJJHOMAB_OJMNLBCBCIB_OFFSET))(this);
	}
};
