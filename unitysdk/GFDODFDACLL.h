#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GFDODFDACLL;

#define GFDODFDACLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3B990)
#define GFDODFDACLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE3B830)

inline static constexpr unsigned int GFDODFDACLL_TypeDefinitionIndex = 11412;

	class GFDODFDACLL : public ::System::Object
	{
	public:
		::System::Boolean NBPFHHJJBFG; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AttackDamageType GIBLLBPOJHN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDODFDACLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GFDODFDACLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFDODFDACLL*))((::PBYTE)hIl2Cpp + GFDODFDACLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
