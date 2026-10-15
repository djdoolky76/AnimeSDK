#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define AHLCAPHGHEP_CPGOKIHOPMH_OFFSET UNITYSDK_OFFSET(0xEB80D90)
#define AHLCAPHGHEP_CTOR_OFFSET UNITYSDK_OFFSET(0xEB81130)
#define AHLCAPHGHEP_DBALFBKHOMH_OFFSET UNITYSDK_OFFSET(0xEB80E30)
#define AHLCAPHGHEP_DCELHOEGHBI_OFFSET UNITYSDK_OFFSET(0xEB810B0)
#define AHLCAPHGHEP_OFIJGOIIAHF_OFFSET UNITYSDK_OFFSET(0xEB80EB0)
#define AHLCAPHGHEP_OKDNNIMJFJN_OFFSET UNITYSDK_OFFSET(0xEB80F60)

inline static constexpr unsigned int AHLCAPHGHEP_TypeDefinitionIndex = 62513;

	class AHLCAPHGHEP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLCAPHGHEP_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint CPGOKIHOPMH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AHLCAPHGHEP_CPGOKIHOPMH_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint DBALFBKHOMH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AHLCAPHGHEP_DBALFBKHOMH_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint OFIJGOIIAHF(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AHLCAPHGHEP_OFIJGOIIAHF_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint OKDNNIMJFJN(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixPoint a8)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AHLCAPHGHEP_OKDNNIMJFJN_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::GameCore::FixPoint DCELHOEGHBI(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AHLCAPHGHEP_DCELHOEGHBI_OFFSET))(a1, a2);
		}

	};
