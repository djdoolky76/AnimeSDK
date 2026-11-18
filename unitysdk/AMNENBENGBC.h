#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AMNENBENGBC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14377D40)
#define AMNENBENGBC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x143774E0)
#define AMNENBENGBC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14378F80)
#define AMNENBENGBC__CTOR_OFFSET UNITYSDK_OFFSET(0x143789B0)

inline static constexpr unsigned int AMNENBENGBC_TypeDefinitionIndex = 48372;

class AMNENBENGBC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* LKPBACBAHNH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* AGMJLMDKDJH; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OOPLCPKCDJA; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* FGAGCHJELMC; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* ICPOAGMOLKK; // 0x38
	::KCMIFNGABDC_1<::System::String*>* CBDFCLBBHKE; // 0x40
	::KCMIFNGABDC_1<::System::Single>* KLJFCJAJMAE; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* PBADIJPPMKI; // 0x50
	::KCMIFNGABDC_1<::System::Boolean>* HEENFDMBKIC; // 0x58
	::KCMIFNGABDC_1<::System::Single>* OPHLDEGIOMN; // 0x60
	::KCMIFNGABDC_1<::System::Boolean>* NJOCHEBCPHJ; // 0x68
	::KCMIFNGABDC_1<::System::Boolean>* PFPJJNAPNOH; // 0x70
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x78
	::CPABOPKIGAL* HMNPNEALHEH; // 0x80
	::MKBBPOFGLOF* DLFHFDAOFOB; // 0x88
	::KCMIFNGABDC_1<::System::String*>* PFGLNDOIGDJ; // 0x90
	::KCMIFNGABDC_1<::System::Single>* JFJCCFKDDFG; // 0x98
	::KCMIFNGABDC_1<::System::Boolean>* EJNKGBDHKOJ; // 0xA0
	::KCMIFNGABDC_1<::System::Boolean>* IBNMILFIBBG; // 0xA8
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0xB0
	::KCMIFNGABDC_1<::System::Single>* CJHLIHAEHAL; // 0xB8
	::KCMIFNGABDC_1<::System::Single>* MABGBKECIND; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNENBENGBC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNENBENGBC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AMNENBENGBC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNENBENGBC_GDEOPIBNOIN_OFFSET))(this);
	}
};
