#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDFPIPINHPH_BlockType.h"
#include "unitysdk/System/Object.h"
class KNKPLOGICFO;
namespace System { class Action; }
namespace System { class String; }

#define JDFPIPINHPH_OHLCPDDLHDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x165C38C0)
#define JDFPIPINHPH_OHLCPDDLHDJ_EJMFOGIHIOJ_OFFSET UNITYSDK_OFFSET(0x165C5070)
#define JDFPIPINHPH_OHLCPDDLHDJ_GJGOGDHAAGM_OFFSET UNITYSDK_OFFSET(0x165C5850)
#define JDFPIPINHPH_OHLCPDDLHDJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x165C48D0)
#define JDFPIPINHPH_OHLCPDDLHDJ_NPDPDCOEHGL_OFFSET UNITYSDK_OFFSET(0x165C5B70)
#define JDFPIPINHPH_OHLCPDDLHDJ_PMEOOCCGIFH_OFFSET UNITYSDK_OFFSET(0x165C5B10)

inline static constexpr unsigned int JDFPIPINHPH_OHLCPDDLHDJ_TypeDefinitionIndex = 72798;

	class JDFPIPINHPH_OHLCPDDLHDJ : public ::System::Object
	{
	public:
		::System::Action* HGMNOPCPIKH; // 0x10
		::KNKPLOGICFO* BJMAMHMCOEL; // 0x18
		::System::String* BJGAMICBIGO; // 0x20
		::System::Single GCNDKHEPBCE; // 0x28
		::System::UInt32 HAMNCBPOEKG; // 0x2C
		::JDFPIPINHPH_BlockType CFGEJHAOKED; // 0x30
		::System::Single IDDACMMNLKH; // 0x34
		::System::Boolean HBLGIBHMEDL; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4, ::System::Boolean a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OHLCPDDLHDJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EJMFOGIHIOJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OHLCPDDLHDJ_EJMFOGIHIOJ_OFFSET))(this, a1);
		}

		::System::Boolean PMEOOCCGIFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OHLCPDDLHDJ_PMEOOCCGIFH_OFFSET))(this);
		}

		::System::Boolean NPDPDCOEHGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OHLCPDDLHDJ_NPDPDCOEHGL_OFFSET))(this);
		}

		::System::Void GJGOGDHAAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OHLCPDDLHDJ_GJGOGDHAAGM_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OHLCPDDLHDJ_HADOHLNHHGB_OFFSET))(this);
		}

	};
