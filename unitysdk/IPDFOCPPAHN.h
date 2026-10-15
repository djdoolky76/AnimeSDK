#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PropComponent; }

#define IPDFOCPPAHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1651E3D0)

inline static constexpr unsigned int IPDFOCPPAHN_TypeDefinitionIndex = 57381;

	class IPDFOCPPAHN : public ::System::Object
	{
	public:
		::RPG::GameCore::PropComponent* KCONLBKIGHD; // 0x10
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + IPDFOCPPAHN_CTOR_OFFSET))(this, a1);
		}

	};
