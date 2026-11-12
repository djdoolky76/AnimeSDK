#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGAAFLAALBF;
class MFHHKBPHDOH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPOJDMAFJDE_CTOR_OFFSET UNITYSDK_OFFSET(0x16AEB370)
#define GPOJDMAFJDE_DCBEFAOIEDB_OFFSET UNITYSDK_OFFSET(0x16AEB480)
#define GPOJDMAFJDE_HAFLOIOMOIA_OFFSET UNITYSDK_OFFSET(0x16AEB380)
#define GPOJDMAFJDE_IGAAPBNCJFF_OFFSET UNITYSDK_OFFSET(0x16AEB4E0)
#define GPOJDMAFJDE_PHJMOENCBPF_OFFSET UNITYSDK_OFFSET(0x16AEB400)

inline static constexpr unsigned int GPOJDMAFJDE_TypeDefinitionIndex = 65373;

	class GPOJDMAFJDE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* DGLCLHLJOOI; // 0x10
		::MFHHKBPHDOH* NGILEOCPCDC; // 0x18
		::System::Void _ctor(::MFHHKBPHDOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFHHKBPHDOH*))((::PBYTE)hIl2Cpp + GPOJDMAFJDE_CTOR_OFFSET))(this, a1);
		}

		::System::String* HAFLOIOMOIA(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPOJDMAFJDE_HAFLOIOMOIA_OFFSET))(this, a1);
		}

		::System::String* PHJMOENCBPF(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPOJDMAFJDE_PHJMOENCBPF_OFFSET))(this, a1);
		}

		::FGAAFLAALBF* DCBEFAOIEDB(::System::UInt32 a1)
		{
			return ((::FGAAFLAALBF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPOJDMAFJDE_DCBEFAOIEDB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* IGAAPBNCJFF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOJDMAFJDE_IGAAPBNCJFF_OFFSET))(this);
		}

	};
