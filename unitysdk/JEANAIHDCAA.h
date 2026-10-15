#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"

#define JEANAIHDCAA_CTOR_OFFSET UNITYSDK_OFFSET(0x16617230)
#define JEANAIHDCAA_PFBGIJIBAEE_OFFSET UNITYSDK_OFFSET(0x166171E0)

inline static constexpr unsigned int JEANAIHDCAA_TypeDefinitionIndex = 65960;

	class JEANAIHDCAA : public ::System::Object
	{
	public:
		::System::UInt32 KLOEJIMMPJM; // 0x10
		::RPG::GameCore::Match3::PieceTag BNEPAJPMFEI; // 0x14
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x18
		::System::Boolean HEPNDFHHHEG; // 0x1C
		// static const ::System::Object OILFOBJDFHB; // 0x0
		// static const ::System::Object FCNHJLJMIMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANAIHDCAA_CTOR_OFFSET))(this);
		}

		::System::Boolean PFBGIJIBAEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANAIHDCAA_PFBGIJIBAEE_OFFSET))(this);
		}

	};
