#pragma once
#include "unitysdk/unitysdk.h"
class LNHDPDCGLAG;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class ST_Main_FollowTarget; }
namespace RPG::GameCore { class TaskContext; }

#define JCBFBGLJDFB_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0xB8B2C30)
#define JCBFBGLJDFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B1AE0)
#define JCBFBGLJDFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8B23F0)
#define JCBFBGLJDFB_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0xB8B29A0)
#define JCBFBGLJDFB_MHHDKCPGOJI_OFFSET UNITYSDK_OFFSET(0xB8B27F0)
#define JCBFBGLJDFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8B24D0)
#define JCBFBGLJDFB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8B2B50)
#define JCBFBGLJDFB_TICK_OFFSET UNITYSDK_OFFSET(0xB8B2A70)

inline static constexpr unsigned int JCBFBGLJDFB_TypeDefinitionIndex = 53311;

	class JCBFBGLJDFB
	{
	public:
		::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x28
		::LNHDPDCGLAG* FLANFCPMIPC; // 0x30
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
