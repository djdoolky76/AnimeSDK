#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEJLAPCEHIM_EOABIPADEEP_OFFSET UNITYSDK_OFFSET(0x1CE95FC0)
#define HEJLAPCEHIM_FOCLPOCKKHF_OFFSET UNITYSDK_OFFSET(0x1CE962B0)
#define HEJLAPCEHIM_HOLLMJBEIBE_OFFSET UNITYSDK_OFFSET(0x1CE96050)
#define HEJLAPCEHIM_LPKJCMMNENJ_OFFSET UNITYSDK_OFFSET(0x1CE95E50)
#define HEJLAPCEHIM_OENGLNICLNO_OFFSET UNITYSDK_OFFSET(0x1CE95FB0)
#define HEJLAPCEHIM_OKJPEKIIMDD_OFFSET UNITYSDK_OFFSET(0x1CE95E60)
#define HEJLAPCEHIM_PHDCAHANCAO_OFFSET UNITYSDK_OFFSET(0x1CE95D60)
#define HEJLAPCEHIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE95CC0)

inline static constexpr unsigned int HEJLAPCEHIM_TypeDefinitionIndex = 34790;

class HEJLAPCEHIM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* KMEGFDBFLLA; // 0x10
	::System::Boolean FFACDJDKHMO; // 0x18

	::System::Void _ctor(::System::Boolean DFDHKOIDLFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEJLAPCEHIM__CTOR_OFFSET))(this, DFDHKOIDLFK);
	}

	::System::Boolean PHDCAHANCAO(::System::String* HNOPAJLDCFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEJLAPCEHIM_PHDCAHANCAO_OFFSET))(this, HNOPAJLDCFB);
	}

	::System::Boolean LPKJCMMNENJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJLAPCEHIM_LPKJCMMNENJ_OFFSET))(this);
	}

	::System::Void OKJPEKIIMDD(::System::String* KEKLFCCONCL, ::System::Boolean DFDHKOIDLFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEJLAPCEHIM_OKJPEKIIMDD_OFFSET))(this, KEKLFCCONCL, DFDHKOIDLFK);
	}

	::System::Void OENGLNICLNO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEJLAPCEHIM_OENGLNICLNO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* EOABIPADEEP()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJLAPCEHIM_EOABIPADEEP_OFFSET))(this);
	}

	::System::Void HOLLMJBEIBE(::System::Collections::Generic::List_1<::System::String*>* HNECHKLNANH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HEJLAPCEHIM_HOLLMJBEIBE_OFFSET))(this, HNECHKLNANH);
	}

	::System::Void FOCLPOCKKHF(::System::Boolean DFDHKOIDLFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEJLAPCEHIM_FOCLPOCKKHF_OFFSET))(this, DFDHKOIDLFK);
	}
};
