#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KHMLKLEAJLG_HOKGEICCIHM;
namespace UnityEngine { class Collider; }

#define KHMLKLEAJLG_MOFPHEBEOIK_FNKNGLCPKAN_OFFSET UNITYSDK_OFFSET(0x157EE020)
#define KHMLKLEAJLG_MOFPHEBEOIK_PLOAMMEKDOH_OFFSET UNITYSDK_OFFSET(0x157EE040)
#define KHMLKLEAJLG_MOFPHEBEOIK__CTOR_OFFSET UNITYSDK_OFFSET(0x157EE010)

inline static constexpr unsigned int KHMLKLEAJLG_MOFPHEBEOIK_TypeDefinitionIndex = 66302;

class KHMLKLEAJLG_MOFPHEBEOIK : public ::System::Object
{
public:
	::KHMLKLEAJLG_HOKGEICCIHM* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_MOFPHEBEOIK__CTOR_OFFSET))(this);
	}

	::System::Void FNKNGLCPKAN(::UnityEngine::Collider* EHHHMFKHNAI, ::System::Object* HEAJMIGHEHG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_MOFPHEBEOIK_FNKNGLCPKAN_OFFSET))(this, EHHHMFKHNAI, HEAJMIGHEHG);
	}

	::System::Void PLOAMMEKDOH(::UnityEngine::Collider* EHHHMFKHNAI, ::System::Object* HEAJMIGHEHG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_MOFPHEBEOIK_PLOAMMEKDOH_OFFSET))(this, EHHHMFKHNAI, HEAJMIGHEHG);
	}
};
