#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AOAGJMLIFOI_AHIGFLFEBNC_OFFSET UNITYSDK_OFFSET(0x134E81E0)
#define AOAGJMLIFOI_FHFADMFLFKD_OFFSET UNITYSDK_OFFSET(0x134E87D0)
#define AOAGJMLIFOI_HHHENJHPAJD_OFFSET UNITYSDK_OFFSET(0x134E8340)
#define AOAGJMLIFOI_IFDEKAGEHCD_OFFSET UNITYSDK_OFFSET(0x134E86B0)
#define AOAGJMLIFOI_IOIDGJHOLEK_OFFSET UNITYSDK_OFFSET(0x134E8740)
#define AOAGJMLIFOI_MFKKEIODIEB_OFFSET UNITYSDK_OFFSET(0x134E7F00)
#define AOAGJMLIFOI__CTOR_OFFSET UNITYSDK_OFFSET(0x134E7A00)

inline static constexpr unsigned int AOAGJMLIFOI_TypeDefinitionIndex = 71250;

class AOAGJMLIFOI : public ::JHCLHGCLLBF
{
public:
	::CJIEIHEDMME* PJBDLMBIIBH; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* NGAFFFKBOBN; // 0x20

	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + AOAGJMLIFOI__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void MFKKEIODIEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGJMLIFOI_MFKKEIODIEB_OFFSET))(this);
	}

	::System::Void AHIGFLFEBNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGJMLIFOI_AHIGFLFEBNC_OFFSET))(this);
	}

	::System::Void HHHENJHPAJD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + AOAGJMLIFOI_HHHENJHPAJD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void IFDEKAGEHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGJMLIFOI_IFDEKAGEHCD_OFFSET))(this);
	}

	::System::Void IOIDGJHOLEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGJMLIFOI_IOIDGJHOLEK_OFFSET))(this);
	}

	::System::Void FHFADMFLFKD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + AOAGJMLIFOI_FHFADMFLFKD_OFFSET))(this, LADPIPOMBJM);
	}
};
