#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKAGOMFDEMN.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/OJGICDJIDFN.h"

class PJIAEJICFAA;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJIAEJICFAA_CJLHPPHBEFD_HCBLDCNOPJM_OFFSET UNITYSDK_OFFSET(0x1BF1F800)
#define PJIAEJICFAA_CJLHPPHBEFD_HEDBPKCGPLO_OFFSET UNITYSDK_OFFSET(0x1BF1F640)
#define PJIAEJICFAA_CJLHPPHBEFD_ODCBFMDOLGB_OFFSET UNITYSDK_OFFSET(0x1BF1F760)
#define PJIAEJICFAA_CJLHPPHBEFD_OIKCMMNBIKK_OFFSET UNITYSDK_OFFSET(0x1BF1F8A0)
#define PJIAEJICFAA_CJLHPPHBEFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF1F520)

inline static constexpr unsigned int PJIAEJICFAA_CJLHPPHBEFD_TypeDefinitionIndex = 39660;

class PJIAEJICFAA_CJLHPPHBEFD : public ::OJGICDJIDFN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* EHMHFCLKELF; // 0x18
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::System::Tuple_2<::System::Single, ::System::Int32>*>* GLHHELJOAPG; // 0x20
	::MoleMole::EntityHandle CNBDBKMAHDJ; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* GFDEMEGEGPE; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* ONHGNOGEHMI; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* OGKMAFMNKFE; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Int64>* DPBOBFPJEAE; // 0x50
	::MoleMole::EntityHandle BIPIFJGBEDP; // 0x58
	::MGHNAPKHBOG JCGMPGDEOPE; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* NGEGCJCADOK; // 0x80
	::MoleMole::EntityHandle DIOIDKCDONI; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* FOJFABGNHPJ; // 0x98
	::System::UInt32 OMKOICIICDK; // 0xA0
	::System::UInt32 EABOEJGEOGH; // 0xA4
	::System::Single JPHBLAOMDNK; // 0xA8
	::System::Int32 FNJNEBNBPJA; // 0xAC
	::System::Single PEKDNBIPBGE; // 0xB0
	::System::Single LMPKDMGDCJD; // 0xB4
	::System::UInt32 ILIIIPBCHDA; // 0xB8
	::System::Int32 LCKAEOCJLJO; // 0xBC
	::System::Single FPMKFMLMNFA; // 0xC0
	::System::Boolean BODLJODNFAG; // 0xC4
	::System::Boolean IFJBNLPFDIP; // 0xC5
	::System::Boolean DKAEBEBMGKA; // 0xC6
	::System::Boolean BAOEBJMOCAH; // 0xC7
	::EKAGOMFDEMN IEKIMKJONCE; // 0xC8

	::System::Void _ctor(::PJIAEJICFAA* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::PJIAEJICFAA*))((::PBYTE)hIl2Cpp + PJIAEJICFAA_CJLHPPHBEFD__CTOR_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* HEDBPKCGPLO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_CJLHPPHBEFD_HEDBPKCGPLO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* ODCBFMDOLGB()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_CJLHPPHBEFD_ODCBFMDOLGB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* HCBLDCNOPJM()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_CJLHPPHBEFD_HCBLDCNOPJM_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* OIKCMMNBIKK()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_CJLHPPHBEFD_OIKCMMNBIKK_OFFSET))(this);
	}
};
