#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

class DMHOLJNNCJA_PJJIMDAOJCJ;
class FAKLNMJEGOJ;
namespace System { class String; }

#define AACFGLNDIAF_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0x14392130)
#define AACFGLNDIAF_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x14391C00)
#define AACFGLNDIAF_JNDAJLMDEPA_OFFSET UNITYSDK_OFFSET(0x143918B0)
#define AACFGLNDIAF_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x143921E0)
#define AACFGLNDIAF_LBNDDFNPPKA_OFFSET UNITYSDK_OFFSET(0x14391F40)
#define AACFGLNDIAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143917B0)
#define AACFGLNDIAF__CTOR_OFFSET UNITYSDK_OFFSET(0x143921A0)

inline static constexpr unsigned int AACFGLNDIAF_TypeDefinitionIndex = 78372;

class AACFGLNDIAF : public ::BBKFNNHAKBP
{
public:
	::System::Int32 BFDKDPFAJGN; // 0x38
	::System::Int32 FHNBCBMGHNI; // 0x3C
	::System::Int32 BMOICHMKCGF; // 0x40
	::System::Boolean BDOPMPFFMGP; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACFGLNDIAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACFGLNDIAF_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACFGLNDIAF_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Boolean JNDAJLMDEPA(::System::String* ALNADMNOCJK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AACFGLNDIAF_JNDAJLMDEPA_OFFSET))(this, ALNADMNOCJK);
	}

	::DMHOLJNNCJA_PJJIMDAOJCJ* LBNDDFNPPKA()
	{
		return ((::DMHOLJNNCJA_PJJIMDAOJCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AACFGLNDIAF_LBNDDFNPPKA_OFFSET))(this);
	}

	::System::Boolean ADGCPPFAPIA(::FAKLNMJEGOJ* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::FAKLNMJEGOJ*))((::PBYTE)hIl2Cpp + AACFGLNDIAF_ADGCPPFAPIA_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACFGLNDIAF_KHAEIOINMBG_OFFSET))(this);
	}
};
