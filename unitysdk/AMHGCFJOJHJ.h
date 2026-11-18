#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class BIPBNDIFDOL;
class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMHGCFJOJHJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16D92350)
#define AMHGCFJOJHJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16D926A0)
#define AMHGCFJOJHJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16D92610)
#define AMHGCFJOJHJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16D921D0)
#define AMHGCFJOJHJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D923A0)
#define AMHGCFJOJHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16D92420)

inline static constexpr unsigned int AMHGCFJOJHJ_TypeDefinitionIndex = 71373;

class AMHGCFJOJHJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x51; // 0x0
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* KBLNPKHNAHP; // 0x48
	::System::Collections::Generic::List_1<::BIPBNDIFDOL*>* PBDCCKKDIEE; // 0x50
	::Il2CppArray<::System::Object*>* MBCEHCIIHKE; // 0x58
	::System::Collections::Generic::List_1<::BIPBNDIFDOL*>* DCDLFOPBHGK; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HOIKDCMKOPF; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BIPBNDIFDOL*>* IECCFPJAFNN; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHGCFJOJHJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGCFJOJHJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGCFJOJHJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGCFJOJHJ_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGCFJOJHJ_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::AMHGCFJOJHJ* JFDOOELFAOA()
	{
		return ((::AMHGCFJOJHJ*(*)())((::PBYTE)hIl2Cpp + AMHGCFJOJHJ_JFDOOELFAOA_OFFSET))();
	}
};
