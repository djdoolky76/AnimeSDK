#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPDHILFCILB.h"

class DJKJDFBGJPL;
class ICLCMEOMELP;
class NDEHNKGKACK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNHJAKHKNEO_EJCDKHJFNAA_OFFSET UNITYSDK_OFFSET(0x140C2DB0)
#define HNHJAKHKNEO_EJDGAHHNJGC_OFFSET UNITYSDK_OFFSET(0x140C2FA0)
#define HNHJAKHKNEO_FACOFHLKIGD_OFFSET UNITYSDK_OFFSET(0x140C2E90)
#define HNHJAKHKNEO_MDPDKGNDIHE_OFFSET UNITYSDK_OFFSET(0x140C31F0)
#define HNHJAKHKNEO__CTOR_OFFSET UNITYSDK_OFFSET(0x140C2BC0)

inline static constexpr unsigned int HNHJAKHKNEO_TypeDefinitionIndex = 56204;

class HNHJAKHKNEO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::DJKJDFBGJPL*>* CIKLBNCMEGM; // 0x10
	::ICLCMEOMELP* HKBDLFIGHHJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::NDEHNKGKACK*>* FAAENGCNHHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHJAKHKNEO__CTOR_OFFSET))(this);
	}

	::JPDHILFCILB EJDGAHHNJGC(::System::String* PBKGMNFBOHM, ::JPDHILFCILB PPKCIIOEIJI, ::JPDHILFCILB LGEMJIABMPO)
	{
		return ((::JPDHILFCILB(*)(::PVOID, ::System::String*, ::JPDHILFCILB, ::JPDHILFCILB))((::PBYTE)hIl2Cpp + HNHJAKHKNEO_EJDGAHHNJGC_OFFSET))(this, PBKGMNFBOHM, PPKCIIOEIJI, LGEMJIABMPO);
	}

	::System::Void FACOFHLKIGD(::DJKJDFBGJPL* LMIPOHOKCHC)
	{
		return ((::System::Void(*)(::PVOID, ::DJKJDFBGJPL*))((::PBYTE)hIl2Cpp + HNHJAKHKNEO_FACOFHLKIGD_OFFSET))(this, LMIPOHOKCHC);
	}

	::JPDHILFCILB MDPDKGNDIHE(::System::String* PBKGMNFBOHM, ::JPDHILFCILB OMMEALOOOOD)
	{
		return ((::JPDHILFCILB(*)(::PVOID, ::System::String*, ::JPDHILFCILB))((::PBYTE)hIl2Cpp + HNHJAKHKNEO_MDPDKGNDIHE_OFFSET))(this, PBKGMNFBOHM, OMMEALOOOOD);
	}

	::System::Void EJCDKHJFNAA(::NDEHNKGKACK* LMIPOHOKCHC)
	{
		return ((::System::Void(*)(::PVOID, ::NDEHNKGKACK*))((::PBYTE)hIl2Cpp + HNHJAKHKNEO_EJCDKHJFNAA_OFFSET))(this, LMIPOHOKCHC);
	}
};
