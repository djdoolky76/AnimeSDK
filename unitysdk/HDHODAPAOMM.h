#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PropComponent; }

#define HDHODAPAOMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C33D20)

inline static constexpr unsigned int HDHODAPAOMM_TypeDefinitionIndex = 57382;

	class HDHODAPAOMM : public ::System::Object
	{
	public:
		::RPG::GameCore::PropComponent* KCONLBKIGHD; // 0x10
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + HDHODAPAOMM_CTOR_OFFSET))(this, a1);
		}

	};
