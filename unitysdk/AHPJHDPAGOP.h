#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LNHDPDCGLAG;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class AdvNpcFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define AHPJHDPAGOP_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0xEB88370)
#define AHPJHDPAGOP_CTOR_OFFSET UNITYSDK_OFFSET(0xEB877F0)
#define AHPJHDPAGOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB87CF0)
#define AHPJHDPAGOP_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0xEB88180)
#define AHPJHDPAGOP_MHHDKCPGOJI_OFFSET UNITYSDK_OFFSET(0xEB87FD0)
#define AHPJHDPAGOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB87EB0)
#define AHPJHDPAGOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB88290)
#define AHPJHDPAGOP_TICK_OFFSET UNITYSDK_OFFSET(0xEB87DD0)

inline static constexpr unsigned int AHPJHDPAGOP_TypeDefinitionIndex = 52421;

	class AHPJHDPAGOP : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::LNHDPDCGLAG* FLANFCPMIPC; // 0x28
		::RPG::GameCore::AdvNpcFollowPlayer* JKJPFJALGKO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFollowPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFollowPlayer*))((::PBYTE)hIl2Cpp + AHPJHDPAGOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPJHDPAGOP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHPJHDPAGOP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPJHDPAGOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPJHDPAGOP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void MHHDKCPGOJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHPJHDPAGOP_MHHDKCPGOJI_OFFSET))(this, a1);
		}

		::System::Void EOIBMFKIIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPJHDPAGOP_EOIBMFKIIHL_OFFSET))(this);
		}

		::System::Void BEPBDGBNNBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPJHDPAGOP_BEPBDGBNNBC_OFFSET))(this);
		}

	};
