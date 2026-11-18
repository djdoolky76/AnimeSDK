#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BMBDMMPKIHO;
class KPNJLIFLHHE;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define BMBDMMPKIHO_ECIIKNMDFEG_APIFMAFIDNN_OFFSET UNITYSDK_OFFSET(0x128B2370)
#define BMBDMMPKIHO_ECIIKNMDFEG_BELBGGOBJGL_OFFSET UNITYSDK_OFFSET(0x128B1C60)
#define BMBDMMPKIHO_ECIIKNMDFEG_BIGFJBCJMLF_OFFSET UNITYSDK_OFFSET(0x128B2110)
#define BMBDMMPKIHO_ECIIKNMDFEG_BNBOJBPKOMP_OFFSET UNITYSDK_OFFSET(0x128B2A90)
#define BMBDMMPKIHO_ECIIKNMDFEG_GINOBIBMKHJ_OFFSET UNITYSDK_OFFSET(0x128B1F70)
#define BMBDMMPKIHO_ECIIKNMDFEG_INDAOEIMKHH_OFFSET UNITYSDK_OFFSET(0x128B1DE0)
#define BMBDMMPKIHO_ECIIKNMDFEG_KHHKIGDFKKK_OFFSET UNITYSDK_OFFSET(0x128B21D0)
#define BMBDMMPKIHO_ECIIKNMDFEG__CTOR_OFFSET UNITYSDK_OFFSET(0x128B1C50)

inline static constexpr unsigned int BMBDMMPKIHO_ECIIKNMDFEG_TypeDefinitionIndex = 65323;

class BMBDMMPKIHO_ECIIKNMDFEG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* KBADAFIGJPI; // 0x10
	::UnityEngine::RectTransform* KMEKDKFLGEE; // 0x18
	::BMBDMMPKIHO* KLHPEBKNIFB; // 0x20
	::MonoUITableScrollV2* FAMGIABLFPH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_ECIIKNMDFEG__CTOR_OFFSET))(this);
	}

	::System::Void BELBGGOBJGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_ECIIKNMDFEG_BELBGGOBJGL_OFFSET))(this);
	}

	::System::Void INDAOEIMKHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_ECIIKNMDFEG_INDAOEIMKHH_OFFSET))(this);
	}

	::System::Void GINOBIBMKHJ(::System::Object* MFHBPIBHAOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_ECIIKNMDFEG_GINOBIBMKHJ_OFFSET))(this, MFHBPIBHAOB);
	}

	::System::Void BIGFJBCJMLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_ECIIKNMDFEG_BIGFJBCJMLF_OFFSET))(this);
	}

	::System::Void KHHKIGDFKKK(::KPNJLIFLHHE* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::KPNJLIFLHHE*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_ECIIKNMDFEG_KHHKIGDFKKK_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Void APIFMAFIDNN(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_ECIIKNMDFEG_APIFMAFIDNN_OFFSET))(this, MKHLBMMKCJL);
	}

	::System::Boolean BNBOJBPKOMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_ECIIKNMDFEG_BNBOJBPKOMP_OFFSET))(this);
	}
};
