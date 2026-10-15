#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace System { class String; }

#define MKJKIMJKFKP_DBJILEMPBOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB998BB0)
#define MKJKIMJKFKP_DBJILEMPBOJ__CREATECONDITION_OFFSET UNITYSDK_OFFSET(0xB998BE0)

	class MKJKIMJKFKP_DBJILEMPBOJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKIMJKFKP_DBJILEMPBOJ_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* _CreateCondition(::RPG::GameCore::ConditionType a1, ::System::String* a2)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::RPG::GameCore::ConditionType, ::System::String*))((::PBYTE)hIl2Cpp + MKJKIMJKFKP_DBJILEMPBOJ__CREATECONDITION_OFFSET))(this, a1, a2);
		}

	};
