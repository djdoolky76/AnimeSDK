#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class NINPCAHNCBJ;
class OBAFGJPCDOL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace RPG::GameCore { class RtBattleMode; }
namespace RPG::GameCore { class RtDamageTextConfigGroup; }
namespace System { class Object; }
namespace System { class String; }

#define FGDEDBPGHKJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x157491B0)
#define FGDEDBPGHKJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x157492F0)
#define FGDEDBPGHKJ_BPOBAPCKIMN_OFFSET UNITYSDK_OFFSET(0x15748F90)
#define FGDEDBPGHKJ_CANMJBCLDJO_OFFSET UNITYSDK_OFFSET(0x157489F0)
#define FGDEDBPGHKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15748710)
#define FGDEDBPGHKJ_DFEALFNDCND_OFFSET UNITYSDK_OFFSET(0x157490C0)
#define FGDEDBPGHKJ_HGNANLBLKGP_OFFSET UNITYSDK_OFFSET(0x15748F40)
#define FGDEDBPGHKJ_KJMEKABLIPL_OFFSET UNITYSDK_OFFSET(0x15748960)
#define FGDEDBPGHKJ_LOKDPCHPCHG_OFFSET UNITYSDK_OFFSET(0x15748A50)
#define FGDEDBPGHKJ_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0x15748910)
#define FGDEDBPGHKJ_PDNEOCNLFCN_1_OFFSET UNITYSDK_OFFSET(0x15748E30)
#define FGDEDBPGHKJ_PDNEOCNLFCN_OFFSET UNITYSDK_OFFSET(0x15748B00)
#define FGDEDBPGHKJ__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15748760)
#define FGDEDBPGHKJ__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x157488C0)

inline static constexpr unsigned int FGDEDBPGHKJ_TypeDefinitionIndex = 71714;

	class FGDEDBPGHKJ : public ::RPG::Client::UIController
	{
	public:
		::NINPCAHNCBJ* OOPCGHHFANI; // 0x190
		::RPG::GameCore::RtBattleMode* BHJDJDPLCLP; // 0x198
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void MHLMDMKFOFG(::RPG::GameCore::RtBattleMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_MHLMDMKFOFG_OFFSET))(this, a1);
		}

		::OBAFGJPCDOL* KJMEKABLIPL()
		{
			return ((::OBAFGJPCDOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_KJMEKABLIPL_OFFSET))(this);
		}

		::System::Void CANMJBCLDJO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_CANMJBCLDJO_OFFSET))(this, a1);
		}

		::System::Void LOKDPCHPCHG(::RPG::GameCore::IdleLiveUiVisibleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveUiVisibleData*))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_LOKDPCHPCHG_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtDamageTextConfigGroup* PDNEOCNLFCN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::RtDamageTextConfigGroup*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_PDNEOCNLFCN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RtDamageTextConfigGroup* PDNEOCNLFCN_1(::System::String* a1)
		{
			return ((::RPG::GameCore::RtDamageTextConfigGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_PDNEOCNLFCN_1_OFFSET))(this, a1);
		}

		::NINPCAHNCBJ* HGNANLBLKGP()
		{
			return ((::NINPCAHNCBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_HGNANLBLKGP_OFFSET))(this);
		}

		::System::Void BPOBAPCKIMN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_BPOBAPCKIMN_OFFSET))(this, a1);
		}

		::System::Void DFEALFNDCND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_DFEALFNDCND_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDEDBPGHKJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
