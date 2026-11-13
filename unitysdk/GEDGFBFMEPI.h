#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHDBFLFJFGH;
class FDPFMFINJCO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryWriter; }

#define GEDGFBFMEPI_CLEAR_OFFSET UNITYSDK_OFFSET(0x17CCB090)
#define GEDGFBFMEPI_CTOR_OFFSET UNITYSDK_OFFSET(0x17CCFD60)
#define GEDGFBFMEPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17CCB0D0)
#define GEDGFBFMEPI_HLNMIFMNKPN_OFFSET UNITYSDK_OFFSET(0x17CCF7C0)
#define GEDGFBFMEPI_JKCINKCFJOH_OFFSET UNITYSDK_OFFSET(0x17CCC780)
#define GEDGFBFMEPI_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x17CCB140)
#define GEDGFBFMEPI_PFNDOIILPNL_OFFSET UNITYSDK_OFFSET(0x17CCBEB0)
#define GEDGFBFMEPI_PMKHFBJPEGN_OFFSET UNITYSDK_OFFSET(0x17CCD050)

inline static constexpr unsigned int GEDGFBFMEPI_TypeDefinitionIndex = 69508;

	class GEDGFBFMEPI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDGFBFMEPI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDGFBFMEPI_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDGFBFMEPI_DISPOSE_OFFSET))(this);
		}

		::System::String* LBIHOLKGMIB(::CHDBFLFJFGH* a1)
		{
			return ((::System::String*(*)(::PVOID, ::CHDBFLFJFGH*))((::PBYTE)hIl2Cpp + GEDGFBFMEPI_LBIHOLKGMIB_OFFSET))(this, a1);
		}

		::System::Void PFNDOIILPNL(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GEDGFBFMEPI_PFNDOIILPNL_OFFSET))(this, a1, a2);
		}

		::System::Void JKCINKCFJOH(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GEDGFBFMEPI_JKCINKCFJOH_OFFSET))(this, a1, a2);
		}

		::System::Void PMKHFBJPEGN(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::FDPFMFINJCO*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::FDPFMFINJCO*>*))((::PBYTE)hIl2Cpp + GEDGFBFMEPI_PMKHFBJPEGN_OFFSET))(this, a1, a2);
		}

		::System::Void HLNMIFMNKPN(::System::IO::BinaryWriter* a1, ::FDPFMFINJCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::FDPFMFINJCO*))((::PBYTE)hIl2Cpp + GEDGFBFMEPI_HLNMIFMNKPN_OFFSET))(this, a1, a2);
		}

	};
