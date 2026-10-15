#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define EPBHHKLMKNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61E70)
#define EPBHHKLMKNK_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1CA61C60)
#define EPBHHKLMKNK_GKMDJFIGIID_OFFSET UNITYSDK_OFFSET(0x1CA61DF0)

inline static constexpr unsigned int EPBHHKLMKNK_TypeDefinitionIndex = 43716;

	class EPBHHKLMKNK : public ::System::Object
	{
	public:
		::System::String* NMMKDFFHOLL; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::String* KBEPAIAFLHL; // 0x20
		::RPG::GameCore::ChenLingFesToastStyleType KICGKFDELJP; // 0x28
		::System::Single MJLPOEMDNHD; // 0x2C
		::System::Single KIPAGNCANAJ; // 0x30
		::System::Boolean IEHMINGBCOH; // 0x34
		::System::Boolean HCBMABMLFPG; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHHKLMKNK_CTOR_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::RPG::GameCore::ChenLingFesToastStyleType a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::RPG::GameCore::ChenLingFesToastStyleType, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EPBHHKLMKNK_DMKJAJLNEBK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void GKMDJFIGIID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHHKLMKNK_GKMDJFIGIID_OFFSET))(this);
		}

	};
