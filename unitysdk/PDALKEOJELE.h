#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class PDALKEOJELE;
namespace System { class String; }

#define PDALKEOJELE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D29EE30)
#define PDALKEOJELE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D29EA60)

inline static constexpr unsigned int PDALKEOJELE_TypeDefinitionIndex = 20123;

	class PDALKEOJELE : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* KKAAENBGDKI; // 0x10
		::System::Single OKIJCIDLMDD; // 0x18
		::System::Single IDHLPHBPOBK; // 0x1C
		::System::Single IDCIEMGLMDP; // 0x20
		::System::Boolean LPBOONOCHMD; // 0x24
		::System::Boolean OGCDIADPCGJ; // 0x25
		::System::Byte _padding0[0x2];
		::System::Single NAPCGLPKPGN; // 0x28
		::System::Single CLIBJAPJEFI; // 0x2C
		::System::Single MKIEEKHILOI; // 0x30
		::System::Single NIGKPPNPBOA; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDALKEOJELE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PDALKEOJELE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PDALKEOJELE*))((::PBYTE)hIl2Cpp + PDALKEOJELE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
