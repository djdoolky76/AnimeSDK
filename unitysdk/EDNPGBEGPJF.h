#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/EDNPGBEGPJF_GCKDFCEJEAP.h"

class LFLKAEJOACL;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LGFJMNEABJP_1;
template <typename T> class LJHFMILANJA_1;

#define EDNPGBEGPJF_GBHNIEAOHMI_OFFSET UNITYSDK_OFFSET(0xF9BBB90)
#define EDNPGBEGPJF_JJLLMBIPIAH_OFFSET UNITYSDK_OFFSET(0xF9BD0D0)
#define EDNPGBEGPJF_KCECPLLGCHB_OFFSET UNITYSDK_OFFSET(0xF9BD210)
#define EDNPGBEGPJF_LAACLFCNNPH_OFFSET UNITYSDK_OFFSET(0xF9BBB00)
#define EDNPGBEGPJF_NOBAJOENMMO_OFFSET UNITYSDK_OFFSET(0xF9BD670)
#define EDNPGBEGPJF_ONCDOIGIGBB_OFFSET UNITYSDK_OFFSET(0xF9BB2D0)
#define EDNPGBEGPJF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xF9BAF50)
#define EDNPGBEGPJF_PENCLPDHCAH_OFFSET UNITYSDK_OFFSET(0xF9BBC40)
#define EDNPGBEGPJF_PKAAHLLNINF_OFFSET UNITYSDK_OFFSET(0xF9BCD20)
#define EDNPGBEGPJF__CTOR_OFFSET UNITYSDK_OFFSET(0xF9BB2C0)

inline static constexpr unsigned int EDNPGBEGPJF_TypeDefinitionIndex = 47537;

class EDNPGBEGPJF : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Int64>* BEDFNGLPOOL; // 0x88
	::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Int32>* BHJCHJLNKDG; // 0x90
	::IHECGHKOIPM_1<::System::Int32>* HDLNFLJDAMF; // 0x98
	::LGFJMNEABJP_1<::LFLKAEJOACL*>* PEDDCODBDOA; // 0xA0
	::LGFJMNEABJP_1<::System::Int32>* MHEJKJDIPDB; // 0xA8
	::IHECGHKOIPM_1<::System::Boolean>* IJLMNEHCCKB; // 0xB0
	::IHECGHKOIPM_1<::System::Int32>* JIJEGNPMFLC; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNPGBEGPJF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean ONCDOIGIGBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_ONCDOIGIGBB_OFFSET))(this);
	}

	::LFLKAEJOACL* GBHNIEAOHMI(::System::Int32 ABHBKFJKINO)
	{
		return ((::LFLKAEJOACL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_GBHNIEAOHMI_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Void LAACLFCNNPH(::EDNPGBEGPJF_GCKDFCEJEAP& param_0)
	{
		return ((::System::Void(*)(::EDNPGBEGPJF_GCKDFCEJEAP&))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_LAACLFCNNPH_OFFSET))(param_0);
	}

	::System::Void PENCLPDHCAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_PENCLPDHCAH_OFFSET))(this);
	}

	::System::Int32 PKAAHLLNINF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_PKAAHLLNINF_OFFSET))(this);
	}

	::System::Int32 JJLLMBIPIAH(::System::Int32 FAEGNLBDHJE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_JJLLMBIPIAH_OFFSET))(this, FAEGNLBDHJE);
	}

	::LFLKAEJOACL* KCECPLLGCHB(::System::UInt32 JKFDEAADCNG)
	{
		return ((::LFLKAEJOACL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_KCECPLLGCHB_OFFSET))(this, JKFDEAADCNG);
	}

	::System::Int32 NOBAJOENMMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNPGBEGPJF_NOBAJOENMMO_OFFSET))(this);
	}
};
