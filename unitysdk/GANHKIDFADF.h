#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GANHKIDFADF_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x1F3A8540)
#define GANHKIDFADF_NIFOBBHADAD_OFFSET UNITYSDK_OFFSET(0x1F3A8300)
#define GANHKIDFADF_NLPPAIAGEMF_OFFSET UNITYSDK_OFFSET(0x1F3A7F80)
#define GANHKIDFADF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F3A8810)
#define GANHKIDFADF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3A7F00)
#define GANHKIDFADF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3A7E80)
#define GANHKIDFADF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A7DD0)

inline static constexpr unsigned int GANHKIDFADF_TypeDefinitionIndex = 8615;

class GANHKIDFADF : public ::System::Object
{
public:
	static ::System::Random** StaticGet_EKLPEJAPIAP()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(GANHKIDFADF_TypeDefinitionIndex)->GetStaticField(0x7110);
	}
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* MOHGABHOCMB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* LAABBJEDJAN; // 0x18
	::System::Int32 MCLPCKFCHBG; // 0x20
	::System::Int32 BDPFBEAALDB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANHKIDFADF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 CHOHEEABMAL, ::System::Collections::Generic::List_1<::System::Int32>* CALIEMMPFOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GANHKIDFADF__CTOR_1_OFFSET))(this, CHOHEEABMAL, CALIEMMPFOI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GANHKIDFADF__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Byte>* NLPPAIAGEMF(::System::Int32 MJFHCPDPPGK)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GANHKIDFADF_NLPPAIAGEMF_OFFSET))(this, MJFHCPDPPGK);
	}

	::Il2CppArray<::System::Byte>* NIFOBBHADAD(::System::Int32 PEHKCHCFNAD)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GANHKIDFADF_NIFOBBHADAD_OFFSET))(this, PEHKCHCFNAD);
	}

	::System::Void DABGFBDHOGD(::Il2CppArray<::System::Byte>* IAHPHJEENIA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GANHKIDFADF_DABGFBDHOGD_OFFSET))(this, IAHPHJEENIA);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANHKIDFADF_PHOADBJGFBE_OFFSET))(this);
	}
};
