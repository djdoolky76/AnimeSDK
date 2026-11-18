#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class NCDMMMLNAMM;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNDAEEHOHPG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15E74B30)
#define FNDAEEHOHPG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15E74C90)
#define FNDAEEHOHPG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15E74D90)
#define FNDAEEHOHPG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15E74AB0)
#define FNDAEEHOHPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E74B80)
#define FNDAEEHOHPG__CTOR_OFFSET UNITYSDK_OFFSET(0x15E74C00)

inline static constexpr unsigned int FNDAEEHOHPG_TypeDefinitionIndex = 74658;

class FNDAEEHOHPG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x13; // 0x0
	::System::Collections::Generic::List_1<::NCDMMMLNAMM*>* INKLJDGDGOH; // 0x48
	::System::Action_2<::System::Int32, ::MoleMole::Battle::Entity*>* MNDNDBNNFJE; // 0x50
	::System::Func_2<::System::Int32, ::NCDMMMLNAMM*>* BKGILOAMMJO; // 0x58
	::System::Func_2<::NCDMMMLNAMM*, ::System::Boolean>* BOFKFNKPHEK; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNDAEEHOHPG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDAEEHOHPG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDAEEHOHPG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDAEEHOHPG_GETCLASSID_OFFSET))(this);
	}

	static ::FNDAEEHOHPG* JFDOOELFAOA()
	{
		return ((::FNDAEEHOHPG*(*)())((::PBYTE)hIl2Cpp + FNDAEEHOHPG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDAEEHOHPG_MEFBHFEOKGH_OFFSET))(this);
	}
};
