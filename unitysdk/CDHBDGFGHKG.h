#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNIPJLLHIJA;
class EMOCGPGJCGO;
class IBFPIDMKFCB;
class KCIDOKIGACH;
class MGFNPLKAALN;
class OBJANKHLNGO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDHBDGFGHKG_CDFPFIHCPEH_OFFSET UNITYSDK_OFFSET(0xC767740)
#define CDHBDGFGHKG_CTOR_OFFSET UNITYSDK_OFFSET(0xC767570)
#define CDHBDGFGHKG_LCFMJCMIMJH_OFFSET UNITYSDK_OFFSET(0xC767580)

inline static constexpr unsigned int CDHBDGFGHKG_TypeDefinitionIndex = 79686;

	class CDHBDGFGHKG : public ::System::Object
	{
	public:
		::MGFNPLKAALN* IIDIJLNGJNM; // 0x10
		::EMOCGPGJCGO* LIOJKFIGGIJ; // 0x18
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::Void _ctor(::OBJANKHLNGO* a1, ::EMOCGPGJCGO* a2, ::MGFNPLKAALN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::EMOCGPGJCGO*, ::MGFNPLKAALN*))((::PBYTE)hIl2Cpp + CDHBDGFGHKG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::KCIDOKIGACH* LCFMJCMIMJH(::System::UInt32 a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::KCIDOKIGACH*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CDHBDGFGHKG_LCFMJCMIMJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* CDFPFIHCPEH(::System::Collections::Generic::List_1<::IBFPIDMKFCB*>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::IBFPIDMKFCB*>*))((::PBYTE)hIl2Cpp + CDHBDGFGHKG_CDFPFIHCPEH_OFFSET))(this, a1);
		}

	};
