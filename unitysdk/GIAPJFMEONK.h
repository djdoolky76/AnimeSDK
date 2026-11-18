#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMFBAIGBFOK.h"
#include "unitysdk/OHDHGHEIFAI.h"

class CALIGLPABNP;
class JEJPKDIJIEP;
class KOIDMLPJGML;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIAPJFMEONK_ANFHCPHIFOB_OFFSET UNITYSDK_OFFSET(0x11DAD2F0)
#define GIAPJFMEONK_BKHBCJGCBEF_OFFSET UNITYSDK_OFFSET(0x11DAD760)
#define GIAPJFMEONK_BKMHAINGAAN_OFFSET UNITYSDK_OFFSET(0x11DAD850)
#define GIAPJFMEONK_FCAFEBJBFLE_OFFSET UNITYSDK_OFFSET(0x11DAD5E0)
#define GIAPJFMEONK_FKLKEECCEPJ_OFFSET UNITYSDK_OFFSET(0x11DAD6D0)
#define GIAPJFMEONK_FKOILBEMPKI_OFFSET UNITYSDK_OFFSET(0x11DAD790)
#define GIAPJFMEONK_JADFLLFODHP_OFFSET UNITYSDK_OFFSET(0x11DAD640)
#define GIAPJFMEONK__CTOR_OFFSET UNITYSDK_OFFSET(0x11DAD2B0)

inline static constexpr unsigned int GIAPJFMEONK_TypeDefinitionIndex = 49476;

class GIAPJFMEONK : public ::OHDHGHEIFAI
{
public:
	::IMFBAIGBFOK FKNFHGLBPHF; // 0x100
	::JEJPKDIJIEP* ODDJHHCEGBM; // 0x128

	::System::Void _ctor(::System::Int32 BHJLMFMADHE, ::System::Int32 HHEGANCPILH, ::IMFBAIGBFOK NFNLBMBGLCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::IMFBAIGBFOK))((::PBYTE)hIl2Cpp + GIAPJFMEONK__CTOR_OFFSET))(this, BHJLMFMADHE, HHEGANCPILH, NFNLBMBGLCH);
	}

	::System::Void ANFHCPHIFOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAPJFMEONK_ANFHCPHIFOB_OFFSET))(this);
	}

	::System::Void FCAFEBJBFLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAPJFMEONK_FCAFEBJBFLE_OFFSET))(this);
	}

	::System::Void JADFLLFODHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAPJFMEONK_JADFLLFODHP_OFFSET))(this);
	}

	::System::Void FKLKEECCEPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAPJFMEONK_FKLKEECCEPJ_OFFSET))(this);
	}

	::IMFBAIGBFOK BKHBCJGCBEF()
	{
		return ((::IMFBAIGBFOK(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAPJFMEONK_BKHBCJGCBEF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* FKOILBEMPKI()
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAPJFMEONK_FKOILBEMPKI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CALIGLPABNP*>* BKMHAINGAAN()
	{
		return ((::System::Collections::Generic::List_1<::CALIGLPABNP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAPJFMEONK_BKMHAINGAAN_OFFSET))(this);
	}
};
