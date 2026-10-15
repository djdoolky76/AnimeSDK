#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IPKEDJJCLNO;
class KMOOMLFMMEC;

#define IPKEDJJCLNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2FFD0)
#define IPKEDJJCLNO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF2FFE0)
#define IPKEDJJCLNO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF2FFA0)

inline static constexpr unsigned int IPKEDJJCLNO_TypeDefinitionIndex = 21558;

	class IPKEDJJCLNO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::KMOOMLFMMEC*>* PCJNECMDNNP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKEDJJCLNO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IPKEDJJCLNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPKEDJJCLNO*))((::PBYTE)hIl2Cpp + IPKEDJJCLNO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IPKEDJJCLNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPKEDJJCLNO*))((::PBYTE)hIl2Cpp + IPKEDJJCLNO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
