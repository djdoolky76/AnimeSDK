#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FIIFBBCPKAL;
class KJICHABELAK;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class BattleCollegeAimData; }
namespace RPG::Client { class BattleCollegeModule; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define JHCGMFOMNPB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1A3650)
#define JHCGMFOMNPB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB1A3890)
#define JHCGMFOMNPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A3A90)
#define JHCGMFOMNPB_DGJJODIBDGN_OFFSET UNITYSDK_OFFSET(0xB1A3300)
#define JHCGMFOMNPB_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xB1A2FB0)
#define JHCGMFOMNPB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB1A2EA0)
#define JHCGMFOMNPB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB1A30C0)
#define JHCGMFOMNPB_EOJGPIGKDMD_OFFSET UNITYSDK_OFFSET(0xB1A33A0)
#define JHCGMFOMNPB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB1A2DD0)
#define JHCGMFOMNPB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB1A2DF0)
#define JHCGMFOMNPB_IGNCDMJGODK_OFFSET UNITYSDK_OFFSET(0xB1A3270)
#define JHCGMFOMNPB_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xB1A2E30)
#define JHCGMFOMNPB_LGEOMHEHPIA_OFFSET UNITYSDK_OFFSET(0xB1A3500)
#define JHCGMFOMNPB_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xB1A3590)
#define JHCGMFOMNPB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB1A2DE0)
#define JHCGMFOMNPB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB1A2CE0)

inline static constexpr unsigned int JHCGMFOMNPB_TypeDefinitionIndex = 71564;

	class JHCGMFOMNPB : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::AnimatorButton* ABKODHGNKAA; // 0x60
		::UnityEngine::Animation* ACKKKDFMIJA; // 0x68
		::FIIFBBCPKAL* KIHEGPGEBDI; // 0x70
		::UnityEngine::UI::Text* BLGECNINILD; // 0x78
		::KJICHABELAK* MMOFGJMGMEM; // 0x80
		::System::UInt32 IMPLMKBEFFE; // 0x88
		::System::Int32 GCDPLINDCNI; // 0x8C
		::System::Int32 _Index_k__BackingField; // 0x90
		::System::Single KKPEIMJKION; // 0x94
		::System::Single COCJDAKNIAP; // 0x98
		::System::Boolean KAECGFMHLFB; // 0x9C
		::System::Boolean PPIPLNPPEHF; // 0x9D
		::System::Boolean AKBPNMEFGAO; // 0x9E
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object AKENNOMLLCA; // 0x0
		// static const ::System::String* EBHMOFDKJJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_GET_TRANS_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void EOJGPIGKDMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_EOJGPIGKDMD_OFFSET))(this, a1);
		}

		::System::Void DGJJODIBDGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_DGJJODIBDGN_OFFSET))(this, a1);
		}

		static ::FIIFBBCPKAL* IGNCDMJGODK(::RPG::Client::BattleCollegeAimData* a1)
		{
			return ((::FIIFBBCPKAL*(*)(::RPG::Client::BattleCollegeAimData*))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_IGNCDMJGODK_OFFSET))(a1);
		}

		::RPG::Client::BattleCollegeModule* LGEOMHEHPIA()
		{
			return ((::RPG::Client::BattleCollegeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_LGEOMHEHPIA_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
