#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define AGALPCLOLOG_CPGOKIHOPMH_OFFSET UNITYSDK_OFFSET(0xCF25490)

	class AGALPCLOLOG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint CPGOKIHOPMH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AGALPCLOLOG_CPGOKIHOPMH_OFFSET))(a1, a2, a3, a4);
		}

	};
