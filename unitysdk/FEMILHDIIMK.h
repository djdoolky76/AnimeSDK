#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELFJOFJPMJO;
class OOCCBMLAELL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEMILHDIIMK_CTOR_OFFSET UNITYSDK_OFFSET(0x16640130)
#define FEMILHDIIMK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1663FC60)
#define FEMILHDIIMK_LDKDAFLNOEN_OFFSET UNITYSDK_OFFSET(0x1663FDC0)

inline static constexpr unsigned int FEMILHDIIMK_TypeDefinitionIndex = 57200;

	class FEMILHDIIMK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GDMICDKOCMH; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* FBECMAAAHJE; // 0x18
		::System::Collections::Generic::List_1<::ELFJOFJPMJO*>* ALOKKLDHFPI; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* CJIJKBGAGBA; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* KJPPBEKDOMN; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* DKJIEFPGIGF; // 0x38
		::System::Double FJPHAONHMDF; // 0x40
		::System::Double ECKFNLIMMIM; // 0x48
		::System::UInt32 OENOGKMDPOJ; // 0x50
		::System::UInt32 KFDELPNOIAB; // 0x54
		::System::UInt32 IJFABFHGCHC; // 0x58
		::System::Byte _padding0[0x4];
		::System::Double MELEOGKFOGH; // 0x60
		::System::Double BMBILOEBCPC; // 0x68
		::System::UInt32 BDMDANPOFHM; // 0x70
		::System::UInt32 DMLOLBDDIAL; // 0x74
		::System::UInt32 GNFJDFDKKBA; // 0x78
		::System::UInt32 GCIAPAHFCGO; // 0x7C
		::System::UInt32 NLMELFDOHHI; // 0x80
		::System::UInt32 PEBMKAJDLAJ; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMILHDIIMK_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMILHDIIMK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LDKDAFLNOEN(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + FEMILHDIIMK_LDKDAFLNOEN_OFFSET))(this, a1);
		}

	};
