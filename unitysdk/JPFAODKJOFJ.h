#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;
class MHGHEALBDLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPFAODKJOFJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1EC1BEB0)
#define JPFAODKJOFJ_IDIBJDAGOKM_OFFSET UNITYSDK_OFFSET(0x1EC1BC80)
#define JPFAODKJOFJ_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EC1B960)
#define JPFAODKJOFJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EC1B790)
#define JPFAODKJOFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EC1B6D0)
#define JPFAODKJOFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC1B9A0)
#define JPFAODKJOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC1B630)

inline static constexpr unsigned int JPFAODKJOFJ_TypeDefinitionIndex = 95349;

class JPFAODKJOFJ : public ::MHOBPPAJKIL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MHGHEALBDLG*>* PGENODNGKCH; // 0x18
	::System::Int32 DEMMCDHEPHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFAODKJOFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + JPFAODKJOFJ_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFAODKJOFJ_KMMIPNMJILI_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFAODKJOFJ_TOSTRING_OFFSET))(this);
	}

	::MHGHEALBDLG* IDIBJDAGOKM()
	{
		return ((::MHGHEALBDLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFAODKJOFJ_IDIBJDAGOKM_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFAODKJOFJ_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::Il2CppArray<::MHGHEALBDLG*>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MHGHEALBDLG*>*))((::PBYTE)hIl2Cpp + JPFAODKJOFJ_LNFENFDLMIG_OFFSET))(this, LJBPECKCCEA);
	}
};
