#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ACGDMDAOKGP.h"
#include "unitysdk/DBDAMELDMFG.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCNGDMKEFIB_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x15361460)
#define DCNGDMKEFIB_FAAFMPDBCAM_OFFSET UNITYSDK_OFFSET(0x15361E00)
#define DCNGDMKEFIB_GLFBCEILOAF_2_OFFSET UNITYSDK_OFFSET(0x15361500)
#define DCNGDMKEFIB_GLFBCEILOAF_3_OFFSET UNITYSDK_OFFSET(0x15361AC0)
#define DCNGDMKEFIB_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x15361C40)
#define DCNGDMKEFIB_JIKKCOCEIFH_OFFSET UNITYSDK_OFFSET(0x15361D30)
#define DCNGDMKEFIB__CTOR_OFFSET UNITYSDK_OFFSET(0x15361BB0)

inline static constexpr unsigned int DCNGDMKEFIB_TypeDefinitionIndex = 68291;

class DCNGDMKEFIB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NKJKDMDINOF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGDMKEFIB__CTOR_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGDMKEFIB_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Object* GLFBCEILOAF_2(::DBDAMELDMFG JLPIFAIPPAL, ::ACGDMDAOKGP& IGAAKDOIPNN)
	{
		return ((::System::Object*(*)(::PVOID, ::DBDAMELDMFG, ::ACGDMDAOKGP&))((::PBYTE)hIl2Cpp + DCNGDMKEFIB_GLFBCEILOAF_2_OFFSET))(this, JLPIFAIPPAL, IGAAKDOIPNN);
	}

	::System::Object* GLFBCEILOAF_3(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DCNGDMKEFIB_GLFBCEILOAF_3_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Object* GLOAAACBNPP(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DCNGDMKEFIB_GLOAAACBNPP_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void JIKKCOCEIFH(::System::String* MCOHLHMKLIP, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + DCNGDMKEFIB_JIKKCOCEIFH_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* FAAFMPDBCAM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNGDMKEFIB_FAAFMPDBCAM_OFFSET))(this);
	}
};
