#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
class GELIALJDFBL;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GlobalVisibilityControl; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLBBKFPLPLL_AEMLPLPJDBD_OFFSET UNITYSDK_OFFSET(0x19898260)
#define HLBBKFPLPLL_BEKDECABOKI_OFFSET UNITYSDK_OFFSET(0x19899E90)
#define HLBBKFPLPLL_BKMNLLOKFGH_OFFSET UNITYSDK_OFFSET(0x198977B0)
#define HLBBKFPLPLL_BMPNKCMMEOI_OFFSET UNITYSDK_OFFSET(0x19899BD0)
#define HLBBKFPLPLL_CPECLJKOIPG_OFFSET UNITYSDK_OFFSET(0x19897A20)
#define HLBBKFPLPLL_CTOR_OFFSET UNITYSDK_OFFSET(0x19899EA0)
#define HLBBKFPLPLL_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x19897C40)
#define HLBBKFPLPLL_EMPKLLEJFHE_OFFSET UNITYSDK_OFFSET(0x19897FC0)
#define HLBBKFPLPLL_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19899E80)
#define HLBBKFPLPLL_ICMPMDJIKNN_OFFSET UNITYSDK_OFFSET(0x19897D40)
#define HLBBKFPLPLL_ILDFEAIKNOH_OFFSET UNITYSDK_OFFSET(0x19899E10)
#define HLBBKFPLPLL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x19897CE0)
#define HLBBKFPLPLL_LLNCJPAFBMP_OFFSET UNITYSDK_OFFSET(0x19898100)
#define HLBBKFPLPLL_LLNEMGJGDKN_OFFSET UNITYSDK_OFFSET(0x19899040)
#define HLBBKFPLPLL_NECCALJFAJG_OFFSET UNITYSDK_OFFSET(0x19899480)
#define HLBBKFPLPLL_OHPCADPGKOG_OFFSET UNITYSDK_OFFSET(0x19899D00)
#define HLBBKFPLPLL_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x19897740)
#define HLBBKFPLPLL_PKPICPOIHIC_OFFSET UNITYSDK_OFFSET(0x19898550)

inline static constexpr unsigned int HLBBKFPLPLL_TypeDefinitionIndex = 56262;

	class HLBBKFPLPLL : public ::HBCMHADMLOP
	{
	public:
		::RPG::GameCore::GlobalVisibilityControl* HMPDKCFLOFJ; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* AIEFNELIJON; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::GELIALJDFBL* MELOOHNGEFL; // 0x38
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* AKEAHBIFDHO; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KJCNIKOOJFJ; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* AHIMHCMJPBB; // 0x50
		::System::Boolean PBKFCPEEMON; // 0x58
		::System::Boolean IGNCAIJCMIF; // 0x59
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_CTOR_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_ONUNINIT_OFFSET))(this);
		}

		::System::Void CPECLJKOIPG(::RPG::GameCore::GlobalVisibilityControl* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GlobalVisibilityControl*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_CPECLJKOIPG_OFFSET))(this, a1, a2);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void BKMNLLOKFGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_BKMNLLOKFGH_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void LLNEMGJGDKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_LLNEMGJGDKN_OFFSET))(this, a1);
		}

		::System::Void PKPICPOIHIC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_PKPICPOIHIC_OFFSET))(this, a1);
		}

		::System::Void ICMPMDJIKNN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_ICMPMDJIKNN_OFFSET))(this, a1);
		}

		::System::Void EMPKLLEJFHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_EMPKLLEJFHE_OFFSET))(this, a1);
		}

		::System::Void LLNCJPAFBMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_LLNCJPAFBMP_OFFSET))(this, a1);
		}

		::System::Void AEMLPLPJDBD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_AEMLPLPJDBD_OFFSET))(this, a1);
		}

		::System::Boolean NECCALJFAJG(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_NECCALJFAJG_OFFSET))(this, a1);
		}

		::System::Void BMPNKCMMEOI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_BMPNKCMMEOI_OFFSET))(this, a1);
		}

		::System::Void OHPCADPGKOG(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_OHPCADPGKOG_OFFSET))(this, a1);
		}

		::System::Void ILDFEAIKNOH(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_ILDFEAIKNOH_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_GET_NEEDLATEUPDATE_OFFSET))(this);
		}

		::RPG::GameCore::GlobalVisibilityControl* BEKDECABOKI()
		{
			return ((::RPG::GameCore::GlobalVisibilityControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBBKFPLPLL_BEKDECABOKI_OFFSET))(this);
		}

	};
