#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoSpineStoryController_Dialog.h"
#include "unitysdk/System/Object.h"

#define CNBKPPKILBJ_HMCIPPMJCDK_CTOR_OFFSET UNITYSDK_OFFSET(0xDA482E0)

inline static constexpr unsigned int CNBKPPKILBJ_HMCIPPMJCDK_TypeDefinitionIndex = 60285;

	class CNBKPPKILBJ_HMCIPPMJCDK : public ::System::Object
	{
	public:
		::RPG::Client::MonoSpineStoryController_Dialog BEGCBNAAKFG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBKPPKILBJ_HMCIPPMJCDK_CTOR_OFFSET))(this);
		}

	};
