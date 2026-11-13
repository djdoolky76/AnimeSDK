#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IPKEDJJCLNO;
class KMOOMLFMMEC;

#define IPKEDJJCLNO_CTOR_OFFSET UNITYSDK_OFFSET(0xC9A8050)
#define IPKEDJJCLNO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC9A8060)
#define IPKEDJJCLNO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC9A8020)

inline static constexpr unsigned int IPKEDJJCLNO_TypeDefinitionIndex = 21946;

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
