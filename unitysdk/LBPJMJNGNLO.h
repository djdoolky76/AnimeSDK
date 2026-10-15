#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJANGHIBICJ.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class GIPKHEMODAD;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define LBPJMJNGNLO_AIAIDLNACAK_OFFSET UNITYSDK_OFFSET(0xB609680)
#define LBPJMJNGNLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB608A20)
#define LBPJMJNGNLO_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB609490)
#define LBPJMJNGNLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB608A30)
#define LBPJMJNGNLO_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xB608A80)
#define LBPJMJNGNLO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB608AD0)
#define LBPJMJNGNLO_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xB6093F0)

inline static constexpr unsigned int LBPJMJNGNLO_TypeDefinitionIndex = 55921;

	class LBPJMJNGNLO : public ::JJANGHIBICJ
	{
	public:
		::CEBMNLPNKFL* MDHLEDGALMN; // 0x30
		::CEBMNLPNKFL* HFKIICBNBNP; // 0x38
		::System::Boolean ONKNGNOHLMO; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single PMBBLCHJGOI; // 0x44
		// static const ::System::Object DDLPIIGOAAE; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*))((::PBYTE)hIl2Cpp + LBPJMJNGNLO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPJMJNGNLO_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnimStateLogicType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPJMJNGNLO_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + LBPJMJNGNLO_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + LBPJMJNGNLO_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBPJMJNGNLO_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void AIAIDLNACAK(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + LBPJMJNGNLO_AIAIDLNACAK_OFFSET))(this, a1, a2);
		}

	};
