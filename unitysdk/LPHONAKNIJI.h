#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEKINOICLAM.h"
#include "unitysdk/HFFFNFHPPFC.h"
#include "unitysdk/MNJDFBMAPCJ.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPHONAKNIJI_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7954D0)
#define LPHONAKNIJI_HHJGGFDIEIH_OFFSET UNITYSDK_OFFSET(0x795470)
#define LPHONAKNIJI_IENMJDMJMJC_OFFSET UNITYSDK_OFFSET(0x7954E0)
#define LPHONAKNIJI_JOJLOMJHIIF_OFFSET UNITYSDK_OFFSET(0x795410)
#define LPHONAKNIJI_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7953F0)
#define LPHONAKNIJI_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x795400)
#define LPHONAKNIJI_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x795350)

inline static constexpr unsigned int LPHONAKNIJI_TypeDefinitionIndex = 56063;

struct alignas(8) LPHONAKNIJI
{
	::System::Collections::Generic::List_1<::HFFFNFHPPFC>* FDDIINEPLIK; // 0x10
	::System::Collections::Generic::List_1<::AEKINOICLAM>* GLKLFMAELKP; // 0x18
	::System::Collections::Generic::List_1<::MNJDFBMAPCJ>* BCLFACEGHLO; // 0x20

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + LPHONAKNIJI_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHONAKNIJI_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHONAKNIJI_OAJEIDFGCII_OFFSET))(this);
	}

	::System::Boolean JOJLOMJHIIF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHONAKNIJI_JOJLOMJHIIF_OFFSET))(this);
	}

	::System::Boolean HHJGGFDIEIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHONAKNIJI_HHJGGFDIEIH_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + LPHONAKNIJI_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IENMJDMJMJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHONAKNIJI_IENMJDMJMJC_OFFSET))(this);
	}
};
