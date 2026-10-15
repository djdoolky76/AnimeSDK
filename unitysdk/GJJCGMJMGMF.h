#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBGMIOOFEOC;
class CIFAECNJBLC;
class DAPOMNBNKGC;
class DKNHOGCDNHH;
class ECPDFJJNDBI;
class MDIMPDIOOIE;
class POPPEEIJPKM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJJCGMJMGMF_CMJKHIDDLIL_OFFSET UNITYSDK_OFFSET(0x1C44F9A0)
#define GJJCGMJMGMF_DCDDKNNINEB_OFFSET UNITYSDK_OFFSET(0x1C44BB70)
#define GJJCGMJMGMF_DMPNKAOKCGI_OFFSET UNITYSDK_OFFSET(0x1C44F020)
#define GJJCGMJMGMF_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1C450170)
#define GJJCGMJMGMF_JIEICCEMJEG_OFFSET UNITYSDK_OFFSET(0x1C44FBB0)

inline static constexpr unsigned int GJJCGMJMGMF_TypeDefinitionIndex = 41469;

	class GJJCGMJMGMF : public ::System::Object
	{
	public:
		// static const ::System::Object ABNPHONMCEP; // 0x0
		// static const ::System::String* GJPNNCFPMGK; // 0x0
		static ::System::Void DCDDKNNINEB(::System::String* a1, ::System::Collections::Generic::IList_1<::DAPOMNBNKGC*>* a2, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt64>* a4, ::System::Collections::Generic::IEnumerable_1<::CIFAECNJBLC*>* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IList_1<::DAPOMNBNKGC*>*, ::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt64>*, ::System::Collections::Generic::IEnumerable_1<::CIFAECNJBLC*>*))((::PBYTE)hIl2Cpp + GJJCGMJMGMF_DCDDKNNINEB_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::POPPEEIJPKM* HKEPJLDBGIG(::MDIMPDIOOIE* a1, ::ECPDFJJNDBI* a2)
		{
			return ((::POPPEEIJPKM*(*)(::MDIMPDIOOIE*, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + GJJCGMJMGMF_HKEPJLDBGIG_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* CMJKHIDDLIL(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>*(*)(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + GJJCGMJMGMF_CMJKHIDDLIL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* JIEICCEMJEG(::System::Collections::Generic::IEnumerable_1<::CIFAECNJBLC*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::System::Collections::Generic::IEnumerable_1<::CIFAECNJBLC*>*))((::PBYTE)hIl2Cpp + GJJCGMJMGMF_JIEICCEMJEG_OFFSET))(a1);
		}

		static ::System::Void DMPNKAOKCGI(::BBGMIOOFEOC* a1, ::System::Collections::Generic::IList_1<::DAPOMNBNKGC*>* a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::System::UInt64>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Collections::Generic::List_1<::System::UInt64>* a6)
		{
			return ((::System::Void(*)(::BBGMIOOFEOC*, ::System::Collections::Generic::IList_1<::DAPOMNBNKGC*>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt64>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + GJJCGMJMGMF_DMPNKAOKCGI_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
