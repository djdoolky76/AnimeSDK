#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDIGDABPLBK;
class CCGKLCKJFPH;
class GHBIDFBNIKN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GAFNKCDGFHD_ALMOAHOKNPG_OFFSET UNITYSDK_OFFSET(0x11C875A0)
#define GAFNKCDGFHD_NADKIAJKIDK_1_OFFSET UNITYSDK_OFFSET(0x11C871A0)
#define GAFNKCDGFHD_NADKIAJKIDK_OFFSET UNITYSDK_OFFSET(0x11C87120)
#define GAFNKCDGFHD_NGOANACEJOJ_OFFSET UNITYSDK_OFFSET(0x11C87740)
#define GAFNKCDGFHD_OOHGIINCENN_OFFSET UNITYSDK_OFFSET(0x11C872A0)
#define GAFNKCDGFHD_PBFHKDJOBFG_OFFSET UNITYSDK_OFFSET(0x11C87650)
#define GAFNKCDGFHD_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x11C87980)
#define GAFNKCDGFHD__CTOR_OFFSET UNITYSDK_OFFSET(0x11C87110)

inline static constexpr unsigned int GAFNKCDGFHD_TypeDefinitionIndex = 39861;

class GAFNKCDGFHD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* KCFKKKLDAGG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFNKCDGFHD__CTOR_OFFSET))(this);
	}

	::System::Void NADKIAJKIDK(::CCGKLCKJFPH* PPBCNEPHBAJ, ::CCGKLCKJFPH* BIGIPAICEGN)
	{
		return ((::System::Void(*)(::PVOID, ::CCGKLCKJFPH*, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + GAFNKCDGFHD_NADKIAJKIDK_OFFSET))(this, PPBCNEPHBAJ, BIGIPAICEGN);
	}

	::System::Void OOHGIINCENN(::System::String* FLOKKEALJGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GAFNKCDGFHD_OOHGIINCENN_OFFSET))(this, FLOKKEALJGM);
	}

	::System::Boolean PBFHKDJOBFG(::System::Collections::Generic::List_1<::BDIGDABPLBK*>* DJMNOMGHGIO, ::BDIGDABPLBK* JGEJGKALNAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::BDIGDABPLBK*>*, ::BDIGDABPLBK*))((::PBYTE)hIl2Cpp + GAFNKCDGFHD_PBFHKDJOBFG_OFFSET))(this, DJMNOMGHGIO, JGEJGKALNAK);
	}

	::System::Void NGOANACEJOJ(::System::String* INHDAAAMAAL, ::BDIGDABPLBK* JGEJGKALNAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::BDIGDABPLBK*))((::PBYTE)hIl2Cpp + GAFNKCDGFHD_NGOANACEJOJ_OFFSET))(this, INHDAAAMAAL, JGEJGKALNAK);
	}

	::System::Void NADKIAJKIDK_1(::System::String* INHDAAAMAAL, ::System::Collections::Generic::List_1<::BDIGDABPLBK*>* DJMNOMGHGIO, ::System::Collections::Generic::List_1<::BDIGDABPLBK*>* OFCCHKBKDCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::BDIGDABPLBK*>*, ::System::Collections::Generic::List_1<::BDIGDABPLBK*>*))((::PBYTE)hIl2Cpp + GAFNKCDGFHD_NADKIAJKIDK_1_OFFSET))(this, INHDAAAMAAL, DJMNOMGHGIO, OFCCHKBKDCD);
	}

	::System::Void PKOGNPKCHHE(::System::String* INHDAAAMAAL, ::GHBIDFBNIKN* IGKIECGFMFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::GHBIDFBNIKN*))((::PBYTE)hIl2Cpp + GAFNKCDGFHD_PKOGNPKCHHE_OFFSET))(this, INHDAAAMAAL, IGKIECGFMFF);
	}

	::System::Boolean ALMOAHOKNPG(::System::String* FLOKKEALJGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GAFNKCDGFHD_ALMOAHOKNPG_OFFSET))(this, FLOKKEALJGM);
	}
};
