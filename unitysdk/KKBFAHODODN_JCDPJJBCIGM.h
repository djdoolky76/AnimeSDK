#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGKBJOHFPBK;
class FABMDCOFHCG;
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define KKBFAHODODN_JCDPJJBCIGM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFCDE0)

inline static constexpr unsigned int KKBFAHODODN_JCDPJJBCIGM_TypeDefinitionIndex = 58103;

	class KKBFAHODODN_JCDPJJBCIGM : public ::System::Object
	{
	public:
		::DGKBJOHFPBK* JPHGPKBOHPE; // 0x10
		::FABMDCOFHCG* CNPFIPLHOMN; // 0x18
		::System::String* IFNAGLOMHBK; // 0x20
		::RPG::GameCore::TurnBasedModifierConfig* EABKOHGCHFP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBFAHODODN_JCDPJJBCIGM_CTOR_OFFSET))(this);
		}

	};
