#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPFNDBGNBJM.h"
#include "unitysdk/AKEKDOOPDFI.h"

class GOPLAKGOBMM;
class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIMOKECPDOE_EGFJBNFJKFC_OFFSET UNITYSDK_OFFSET(0x195B8E60)
#define NIMOKECPDOE_HCIBJDIAAKP_OFFSET UNITYSDK_OFFSET(0x195B8EC0)
#define NIMOKECPDOE_IKOCHNNIIMB_OFFSET UNITYSDK_OFFSET(0x195B8EA0)
#define NIMOKECPDOE_JOJPEEFDAHK_OFFSET UNITYSDK_OFFSET(0x195B8EB0)
#define NIMOKECPDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x195B8E10)

inline static constexpr unsigned int NIMOKECPDOE_TypeDefinitionIndex = 9437;

class NIMOKECPDOE : public ::CPFNDBGNBJM
{
public:
	::System::Collections::Generic::List_1<::GOPLAKGOBMM*>* HFOMNFMKHJB; // 0x58
	::System::Collections::Generic::List_1<::GOPLAKGOBMM*>* MCMPPPMICID; // 0x60

	::System::Void _ctor(::AKEKDOOPDFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AKEKDOOPDFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NIMOKECPDOE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::GOPLAKGOBMM*>* IKOCHNNIIMB()
	{
		return ((::System::Collections::Generic::List_1<::GOPLAKGOBMM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMOKECPDOE_IKOCHNNIIMB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::GOPLAKGOBMM*>* JOJPEEFDAHK()
	{
		return ((::System::Collections::Generic::List_1<::GOPLAKGOBMM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMOKECPDOE_JOJPEEFDAHK_OFFSET))(this);
	}

	::System::Void EGFJBNFJKFC(::AKEKDOOPDFI LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::AKEKDOOPDFI))((::PBYTE)hIl2Cpp + NIMOKECPDOE_EGFJBNFJKFC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::List_1<::GOPLAKGOBMM*>* HCIBJDIAAKP(::System::String* MOMEJMHHCPG, ::AKEKDOOPDFI LJBPECKCCEA)
	{
		return ((::System::Collections::Generic::List_1<::GOPLAKGOBMM*>*(*)(::PVOID, ::System::String*, ::AKEKDOOPDFI))((::PBYTE)hIl2Cpp + NIMOKECPDOE_HCIBJDIAAKP_OFFSET))(this, MOMEJMHHCPG, LJBPECKCCEA);
	}
};
