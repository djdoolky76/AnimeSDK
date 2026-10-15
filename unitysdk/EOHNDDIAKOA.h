#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamChatConditionType.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace System { class String; }

#define EOHNDDIAKOA_CTOR_OFFSET UNITYSDK_OFFSET(0x155B5A60)
#define EOHNDDIAKOA_LJHBAAAIAFE_OFFSET UNITYSDK_OFFSET(0x155B5A10)
#define EOHNDDIAKOA__CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x155B5870)

inline static constexpr unsigned int EOHNDDIAKOA_TypeDefinitionIndex = 63277;

	class EOHNDDIAKOA
	{
	public:
		::System::UInt32 ELIAFFHAABN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHNDDIAKOA_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* _CreateCondition(::RPG::GameCore::PamChatConditionType a1, ::System::String* a2)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::RPG::GameCore::PamChatConditionType, ::System::String*))((::PBYTE)hIl2Cpp + EOHNDDIAKOA__CREATECONDITION_OFFSET))(this, a1, a2);
		}

		::System::Void LJHBAAAIAFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOHNDDIAKOA_LJHBAAAIAFE_OFFSET))(this, a1);
		}

	};
