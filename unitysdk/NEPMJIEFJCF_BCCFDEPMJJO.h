#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEPMJIEFJCF_EDIPKPAGLJA.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define NEPMJIEFJCF_BCCFDEPMJJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB75390)

inline static constexpr unsigned int NEPMJIEFJCF_BCCFDEPMJJO_TypeDefinitionIndex = 55951;

	class NEPMJIEFJCF_BCCFDEPMJJO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Int32 EDMKJDNECNE; // 0x18
		::NEPMJIEFJCF_EDIPKPAGLJA FHJHBBCBGEG; // 0x1C
		::System::Byte _padding0[0x2];
		::System::Int32 HOCLANAJNII; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_BCCFDEPMJJO_CTOR_OFFSET))(this);
		}

	};
