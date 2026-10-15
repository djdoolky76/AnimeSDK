#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAFGGCCJPNI;
class JFFMGCEJNPI;
class MIHNHJJBFJP;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DLCOGLMFDPI_CTOR_OFFSET UNITYSDK_OFFSET(0xF8929A0)
#define DLCOGLMFDPI_KMANKMJOBGM_OFFSET UNITYSDK_OFFSET(0xF891BF0)
#define DLCOGLMFDPI_LFOFJCNJDEF_OFFSET UNITYSDK_OFFSET(0xF892300)

inline static constexpr unsigned int DLCOGLMFDPI_TypeDefinitionIndex = 63875;

	class DLCOGLMFDPI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCOGLMFDPI_CTOR_OFFSET))(this);
		}

		::JFFMGCEJNPI* KMANKMJOBGM(::MIHNHJJBFJP* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a4)
		{
			return ((::JFFMGCEJNPI*(*)(::PVOID, ::MIHNHJJBFJP*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + DLCOGLMFDPI_KMANKMJOBGM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* LFOFJCNJDEF(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a3)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + DLCOGLMFDPI_LFOFJCNJDEF_OFFSET))(this, a1, a2, a3);
		}

	};
