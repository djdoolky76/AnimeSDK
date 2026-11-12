#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJKKCKLONJN;
class CIFAECNJBLC;
class HJEIEIFLDGN;
class HKPOAGEKMAM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHLOCJCFLAL_ABFCFJNDLKA_OFFSET UNITYSDK_OFFSET(0x1D62B2C0)
#define JHLOCJCFLAL_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0x1D62A850)
#define JHLOCJCFLAL_JNCHKEAOIOP_OFFSET UNITYSDK_OFFSET(0x1D62A8A0)
#define JHLOCJCFLAL_KLIBCHEGCMD_OFFSET UNITYSDK_OFFSET(0x1D62AF00)
#define JHLOCJCFLAL_KOOIECHMIHH_OFFSET UNITYSDK_OFFSET(0x1D62B3F0)

inline static constexpr unsigned int JHLOCJCFLAL_TypeDefinitionIndex = 42463;

	class JHLOCJCFLAL : public ::System::Object
	{
	public:
		static ::HKPOAGEKMAM* EFMKONMGMNA(::System::String* a1)
		{
			return ((::HKPOAGEKMAM*(*)(::System::String*))((::PBYTE)hIl2Cpp + JHLOCJCFLAL_EFMKONMGMNA_OFFSET))(a1);
		}

		static ::AJKKCKLONJN* JNCHKEAOIOP(::System::String* a1)
		{
			return ((::AJKKCKLONJN*(*)(::System::String*))((::PBYTE)hIl2Cpp + JHLOCJCFLAL_JNCHKEAOIOP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::CIFAECNJBLC*>* KLIBCHEGCMD(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::CIFAECNJBLC*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + JHLOCJCFLAL_KLIBCHEGCMD_OFFSET))(a1);
		}

		static ::HKPOAGEKMAM* ABFCFJNDLKA(::System::String* a1, ::HJEIEIFLDGN* a2)
		{
			return ((::HKPOAGEKMAM*(*)(::System::String*, ::HJEIEIFLDGN*))((::PBYTE)hIl2Cpp + JHLOCJCFLAL_ABFCFJNDLKA_OFFSET))(a1, a2);
		}

		static ::System::Void KOOIECHMIHH(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::CIFAECNJBLC*>* a2, ::System::Collections::Generic::IEnumerable_1<::CIFAECNJBLC*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::CIFAECNJBLC*>*, ::System::Collections::Generic::IEnumerable_1<::CIFAECNJBLC*>*))((::PBYTE)hIl2Cpp + JHLOCJCFLAL_KOOIECHMIHH_OFFSET))(a1, a2, a3);
		}

	};
