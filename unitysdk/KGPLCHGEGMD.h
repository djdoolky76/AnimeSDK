#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPLCHGEGMD_JFEFPNLOADA;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGPLCHGEGMD_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB3FA560)
#define KGPLCHGEGMD_AENINHJKGLK_OFFSET UNITYSDK_OFFSET(0xB3FACF0)
#define KGPLCHGEGMD_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xB3F9C00)
#define KGPLCHGEGMD_BMEGHMENKBB_1_OFFSET UNITYSDK_OFFSET(0xB3FA900)
#define KGPLCHGEGMD_BMEGHMENKBB_OFFSET UNITYSDK_OFFSET(0xB3FA5E0)
#define KGPLCHGEGMD_CLEAR_OFFSET UNITYSDK_OFFSET(0xB3FAD50)
#define KGPLCHGEGMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3F9BC0)
#define KGPLCHGEGMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F99D0)
#define KGPLCHGEGMD_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB3FA250)
#define KGPLCHGEGMD_EEHHLNDAJOC_OFFSET UNITYSDK_OFFSET(0xB3FAA00)
#define KGPLCHGEGMD_MGMCDFAEIDI_OFFSET UNITYSDK_OFFSET(0xB3FADF0)
#define KGPLCHGEGMD_NEPOMMFDADN_OFFSET UNITYSDK_OFFSET(0xB3FAC00)

inline static constexpr unsigned int KGPLCHGEGMD_TypeDefinitionIndex = 73753;

	class KGPLCHGEGMD : public ::System::Object
	{
	public:
		::KGPLCHGEGMD_JFEFPNLOADA* LLJGIEAHGHF; // 0x10
		::System::Int32 NCAMGFJFJOD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void APIDHHKLGEJ(::System::Collections::Generic::IList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_APIDHHKLGEJ_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		::System::Boolean ACMKLFOMPFC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void BMEGHMENKBB(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_BMEGHMENKBB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BMEGHMENKBB_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_BMEGHMENKBB_1_OFFSET))(this, a1, a2);
		}

		::System::Void EEHHLNDAJOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_EEHHLNDAJOC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* NEPOMMFDADN()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_NEPOMMFDADN_OFFSET))(this);
		}

		::System::Int32 AENINHJKGLK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_AENINHJKGLK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_CLEAR_OFFSET))(this);
		}

		::System::Void MGMCDFAEIDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_MGMCDFAEIDI_OFFSET))(this);
		}

	};
