#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LNHDPDCGLAG;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class AdvNpcFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define AHPJHDPAGOP_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0xEB8D5C0)
#define AHPJHDPAGOP_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8CA70)
#define AHPJHDPAGOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB8CF40)
#define AHPJHDPAGOP_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0xEB8D3D0)
#define AHPJHDPAGOP_MHHDKCPGOJI_OFFSET UNITYSDK_OFFSET(0xEB8D220)
#define AHPJHDPAGOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB8D100)
#define AHPJHDPAGOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB8D4E0)
#define AHPJHDPAGOP_TICK_OFFSET UNITYSDK_OFFSET(0xEB8D020)

inline static constexpr unsigned int AHPJHDPAGOP_TypeDefinitionIndex = 52421;

	class AHPJHDPAGOP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::LNHDPDCGLAG* FLANFCPMIPC; // 0x20
		::RPG::GameCore::AdvNpcFollowPlayer* JKJPFJALGKO; // 0x28
		::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x30
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
