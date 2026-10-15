#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class LBAMBIMMJKB;

#define EBFMLBNIEMK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CEA520)

inline static constexpr unsigned int EBFMLBNIEMK_TypeDefinitionIndex = 71357;

	class EBFMLBNIEMK : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor(::LBAMBIMMJKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBAMBIMMJKB*))((::PBYTE)hIl2Cpp + EBFMLBNIEMK_CTOR_OFFSET))(this, a1);
		}

	};
