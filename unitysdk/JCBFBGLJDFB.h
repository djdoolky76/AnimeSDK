#pragma once
#include "unitysdk/unitysdk.h"
class LNHDPDCGLAG;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class ST_Main_FollowTarget; }
namespace RPG::GameCore { class TaskContext; }

#define JCBFBGLJDFB_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0x1656BB20)
#define JCBFBGLJDFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1656A9A0)
#define JCBFBGLJDFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1656B2A0)
#define JCBFBGLJDFB_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0x1656B850)
#define JCBFBGLJDFB_MHHDKCPGOJI_OFFSET UNITYSDK_OFFSET(0x1656B6A0)
#define JCBFBGLJDFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1656B380)
#define JCBFBGLJDFB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1656BA40)
#define JCBFBGLJDFB_TICK_OFFSET UNITYSDK_OFFSET(0x1656B960)

inline static constexpr unsigned int JCBFBGLJDFB_TypeDefinitionIndex = 52206;

	class JCBFBGLJDFB
	{
	public:
		::LNHDPDCGLAG* FLANFCPMIPC; // 0x28
		::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_FollowTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_FollowTarget*))((::PBYTE)hIl2Cpp + JCBFBGLJDFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBFBGLJDFB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBFBGLJDFB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCBFBGLJDFB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBFBGLJDFB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void MHHDKCPGOJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCBFBGLJDFB_MHHDKCPGOJI_OFFSET))(this, a1);
		}

		::System::Void EOIBMFKIIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBFBGLJDFB_EOIBMFKIIHL_OFFSET))(this);
		}

		::System::Void BEPBDGBNNBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBFBGLJDFB_BEPBDGBNNBC_OFFSET))(this);
		}

	};
