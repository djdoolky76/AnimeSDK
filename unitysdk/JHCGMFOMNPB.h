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

#define JHCGMFOMNPB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9C9480)
#define JHCGMFOMNPB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB9C96C0)
#define JHCGMFOMNPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9C98C0)
#define JHCGMFOMNPB_DGJJODIBDGN_OFFSET UNITYSDK_OFFSET(0xB9C9130)
#define JHCGMFOMNPB_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xB9C8DE0)
#define JHCGMFOMNPB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB9C8CD0)
#define JHCGMFOMNPB_EOJGPIGKDMD_OFFSET UNITYSDK_OFFSET(0xB9C91D0)
#define JHCGMFOMNPB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB9C8C00)
#define JHCGMFOMNPB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB9C8C20)
#define JHCGMFOMNPB_IGNCDMJGODK_OFFSET UNITYSDK_OFFSET(0xB9C9090)
#define JHCGMFOMNPB_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xB9C8C60)
#define JHCGMFOMNPB_LGEOMHEHPIA_OFFSET UNITYSDK_OFFSET(0xB9C9330)
#define JHCGMFOMNPB_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xB9C93C0)
#define JHCGMFOMNPB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB9C8C10)
#define JHCGMFOMNPB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9C89F0)
#define JHCGMFOMNPB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB9C8EF0)

inline static constexpr unsigned int JHCGMFOMNPB_TypeDefinitionIndex = 73552;

	class JHCGMFOMNPB : public ::FMPCODLIOLG
	{
	public:
		::FIIFBBCPKAL* KIHEGPGEBDI; // 0x60
		::UnityEngine::Animation* ACKKKDFMIJA; // 0x68
		::RPG::Client::AnimatorButton* ABKODHGNKAA; // 0x70
		::KJICHABELAK* MMOFGJMGMEM; // 0x78
		::UnityEngine::UI::Text* BLGECNINILD; // 0x80
		::System::Single KKPEIMJKION; // 0x88
		::System::UInt32 IMPLMKBEFFE; // 0x8C
		::System::Boolean AKBPNMEFGAO; // 0x90
		::System::Boolean KAECGFMHLFB; // 0x91
		::System::Boolean PPIPLNPPEHF; // 0x92
		::System::Byte _padding0[0x1];
		::System::Int32 _Index_k__BackingField; // 0x94
		::System::Int32 GCDPLINDCNI; // 0x98
		::System::Single COCJDAKNIAP; // 0x9C
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCGMFOMNPB__SETUPVIEW_OFFSET))(this);
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
