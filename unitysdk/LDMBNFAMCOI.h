#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDMBNFAMCOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC98C90)
#define LDMBNFAMCOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC98CE0)
#define LDMBNFAMCOI_DMOMDANAJLG_OFFSET UNITYSDK_OFFSET(0x1AC99600)
#define LDMBNFAMCOI_GET_ENEMYLIST_OFFSET UNITYSDK_OFFSET(0x1AC99780)
#define LDMBNFAMCOI_IFOMJFIBOKO_OFFSET UNITYSDK_OFFSET(0x1AC98D80)
#define LDMBNFAMCOI_LHENJPMLLCG_OFFSET UNITYSDK_OFFSET(0x1AC98FF0)
#define LDMBNFAMCOI_MAHGLDHEEGA_OFFSET UNITYSDK_OFFSET(0x1AC98F00)
#define LDMBNFAMCOI_NOBEBCHOCHG_OFFSET UNITYSDK_OFFSET(0x1AC994E0)
#define LDMBNFAMCOI_SET_ENEMYLIST_OFFSET UNITYSDK_OFFSET(0x1AC99790)

inline static constexpr unsigned int LDMBNFAMCOI_TypeDefinitionIndex = 83780;

	class LDMBNFAMCOI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ECNEEKNHIOE*>* _EnemyList_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_DISPOSE_OFFSET))(this);
		}

		::ECNEEKNHIOE* IFOMJFIBOKO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::ECNEEKNHIOE*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_IFOMJFIBOKO_OFFSET))(this, a1);
		}

		::System::Void NOBEBCHOCHG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_NOBEBCHOCHG_OFFSET))(this, a1);
		}

		::ECNEEKNHIOE* MAHGLDHEEGA(::System::UInt32 a1)
		{
			return ((::ECNEEKNHIOE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_MAHGLDHEEGA_OFFSET))(this, a1);
		}

		::ECNEEKNHIOE* DMOMDANAJLG()
		{
			return ((::ECNEEKNHIOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_DMOMDANAJLG_OFFSET))(this);
		}

		::System::Void LHENJPMLLCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_LHENJPMLLCG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ECNEEKNHIOE*>* get_EnemyList()
		{
			return ((::System::Collections::Generic::List_1<::ECNEEKNHIOE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_GET_ENEMYLIST_OFFSET))(this);
		}

		::System::Void set_EnemyList(::System::Collections::Generic::List_1<::ECNEEKNHIOE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ECNEEKNHIOE*>*))((::PBYTE)hIl2Cpp + LDMBNFAMCOI_SET_ENEMYLIST_OFFSET))(this, a1);
		}

	};
