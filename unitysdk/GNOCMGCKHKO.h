#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGAHKDBODHK.h"
#include "unitysdk/BJAIBILPFLJ.h"
#include "unitysdk/BLLKKBMFHCC.h"
#include "unitysdk/FMLMKEKGHOF.h"
#include "unitysdk/LIKDBHKHKMM.h"
#include "unitysdk/NGAFLAACDGG.h"
#include "unitysdk/PABKFONJHNH.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNOCMGCKHKO_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x60E920)
#define GNOCMGCKHKO_JEPFOIAFFCE_OFFSET UNITYSDK_OFFSET(0x6547A0)
#define GNOCMGCKHKO_LEKNNIGMMKK_OFFSET UNITYSDK_OFFSET(0x654770)
#define GNOCMGCKHKO_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x654780)
#define GNOCMGCKHKO_PDECDKDHPFH_OFFSET UNITYSDK_OFFSET(0x654790)
#define GNOCMGCKHKO_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x6547B0)
#define GNOCMGCKHKO__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F0AF70)

inline static constexpr unsigned int GNOCMGCKHKO_TypeDefinitionIndex = 90193;

struct alignas(8) GNOCMGCKHKO
{
	static ::System::Type** StaticGet_FJEDHELNPDI()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(GNOCMGCKHKO_TypeDefinitionIndex)->GetStaticField(0x4BA30);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_GDCBMGHEJCD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(GNOCMGCKHKO_TypeDefinitionIndex)->GetStaticField(0x4BA38);
	}
	static ::System::Type** StaticGet_BFHPMCLMMHE()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(GNOCMGCKHKO_TypeDefinitionIndex)->GetStaticField(0x4BA40);
	}
	::System::String* MGEDBKBHJPM; // 0x10
	::AGAHKDBODHK OFMKKOGGMPK; // 0x18
	::BJAIBILPFLJ MFKOLLFEOGK; // 0x1C
	::System::Byte _padding0[0x2];
	::LIKDBHKHKMM LLEPLCNIGKE; // 0x20
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::PABKFONJHNH>* JELCCJMFIHB; // 0x28
	::System::Collections::Generic::List_1<::FMLMKEKGHOF>* PPKFIGLDMBL; // 0x30
	::System::Collections::Generic::List_1<::NGAFLAACDGG>* HIGOOOEPBEP; // 0x38
	::System::Collections::Generic::List_1<::BLLKKBMFHCC>* OIAEAAKDBAC; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNOCMGCKHKO__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::System::String*>* LEKNNIGMMKK(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + GNOCMGCKHKO_LEKNNIGMMKK_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOCMGCKHKO_JDAPDDEOCEA_OFFSET))(this);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOCMGCKHKO_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Void PDECDKDHPFH(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean AJCDDDJHLAP, ::System::Boolean AECAICGCBGF)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GNOCMGCKHKO_PDECDKDHPFH_OFFSET))(this, HHIJHDFHPOI, AJCDDDJHLAP, AECAICGCBGF);
	}

	::System::Void JEPFOIAFFCE(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean AJCDDDJHLAP, ::System::Boolean AECAICGCBGF)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GNOCMGCKHKO_JEPFOIAFFCE_OFFSET))(this, HHIJHDFHPOI, AJCDDDJHLAP, AECAICGCBGF);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean AECAICGCBGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNOCMGCKHKO_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI, AECAICGCBGF);
	}
};
