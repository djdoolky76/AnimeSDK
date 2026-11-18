#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLOLMPABND;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BHPHBALHBCN_CGANLJPBOPB_OFFSET UNITYSDK_OFFSET(0x150786D0)
#define BHPHBALHBCN_CJLIHLKGJPP_OFFSET UNITYSDK_OFFSET(0x150787E0)
#define BHPHBALHBCN_OMADEPFAGCA_OFFSET UNITYSDK_OFFSET(0x15078D20)
#define BHPHBALHBCN__CTOR_OFFSET UNITYSDK_OFFSET(0x150786C0)

inline static constexpr unsigned int BHPHBALHBCN_TypeDefinitionIndex = 83655;

class BHPHBALHBCN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPHBALHBCN__CTOR_OFFSET))(this);
	}

	static ::System::Void CGANLJPBOPB(::System::String* ADCBADNPIMO, ::System::Int32 MGKIHCBNKJI, ::System::String* JPAALJFDIBO, ::System::Action_1<::System::Int32>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BHPHBALHBCN_CGANLJPBOPB_OFFSET))(ADCBADNPIMO, MGKIHCBNKJI, JPAALJFDIBO, EJGDHCIBCJH);
	}

	static ::System::Void OMADEPFAGCA(::System::String* ADCBADNPIMO, ::System::Int32 MGKIHCBNKJI, ::System::String* JPAALJFDIBO, ::System::Action_1<::System::Int32>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BHPHBALHBCN_OMADEPFAGCA_OFFSET))(ADCBADNPIMO, MGKIHCBNKJI, JPAALJFDIBO, EJGDHCIBCJH);
	}

	static ::ODLOLMPABND* CJLIHLKGJPP(::System::String* JPAALJFDIBO)
	{
		return ((::ODLOLMPABND*(*)(::System::String*))((::PBYTE)hIl2Cpp + BHPHBALHBCN_CJLIHLKGJPP_OFFSET))(JPAALJFDIBO);
	}
};
