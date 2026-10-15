#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBCMKOOEJC;
class FDJHLKGICBK;
class HPPGIADOJBF;
class LFCKLPMBGGI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HIMICNMKBBF_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0x1C488690)
#define HIMICNMKBBF_GOEAPGOAIEB_OFFSET UNITYSDK_OFFSET(0x1C4886E0)
#define HIMICNMKBBF_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1C488950)

inline static constexpr unsigned int HIMICNMKBBF_TypeDefinitionIndex = 41528;

	class HIMICNMKBBF : public ::System::Object
	{
	public:
		static ::FDJHLKGICBK* EFMKONMGMNA(::System::String* a1, ::System::String* a2)
		{
			return ((::FDJHLKGICBK*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HIMICNMKBBF_EFMKONMGMNA_OFFSET))(a1, a2);
		}

		static ::BCBCMKOOEJC* GOEAPGOAIEB(::System::String* a1, ::System::String* a2)
		{
			return ((::BCBCMKOOEJC*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HIMICNMKBBF_GOEAPGOAIEB_OFFSET))(a1, a2);
		}

		static ::System::Void OHCJOIANPFG(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* a2, ::System::Collections::Generic::IEnumerable_1<::HPPGIADOJBF*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*, ::System::Collections::Generic::IEnumerable_1<::HPPGIADOJBF*>*))((::PBYTE)hIl2Cpp + HIMICNMKBBF_OHCJOIANPFG_OFFSET))(a1, a2, a3);
		}

	};
