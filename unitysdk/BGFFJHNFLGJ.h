#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/IngredientType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BGFFJHNFLGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0B4E0)

inline static constexpr unsigned int BGFFJHNFLGJ_TypeDefinitionIndex = 79835;

	class BGFFJHNFLGJ : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::RPG::Client::LittleGame::ComicDessert::IngredientType GMPGDEINODK; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFFJHNFLGJ_CTOR_OFFSET))(this);
		}

	};
