#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GDCHKJKOGCH;

#define GDCHKJKOGCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4FC10)
#define GDCHKJKOGCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA4FC20)
#define GDCHKJKOGCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA4FBE0)

inline static constexpr unsigned int GDCHKJKOGCH_TypeDefinitionIndex = 21880;

	class GDCHKJKOGCH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Single>* EDBIOAOHOFD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCHKJKOGCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GDCHKJKOGCH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDCHKJKOGCH*))((::PBYTE)hIl2Cpp + GDCHKJKOGCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GDCHKJKOGCH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDCHKJKOGCH*))((::PBYTE)hIl2Cpp + GDCHKJKOGCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
