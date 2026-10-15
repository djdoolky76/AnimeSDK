#pragma once
#include "unitysdk/unitysdk.h"
class DLHJFPIMHOO;
namespace RPG::Client::LimaoNews { class LimaoNewsMainEntrance3DViewModel; }
namespace RPG::GameCore { class TaskContext; }

#define GELPCBJABLK_CTOR_OFFSET UNITYSDK_OFFSET(0x159E09C0)
#define GELPCBJABLK_NFBPDEHAFEF_OFFSET UNITYSDK_OFFSET(0x159E0AA0)
#define GELPCBJABLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159E09F0)

inline static constexpr unsigned int GELPCBJABLK_TypeDefinitionIndex = 52942;

	class GELPCBJABLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DLHJFPIMHOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DLHJFPIMHOO*))((::PBYTE)hIl2Cpp + GELPCBJABLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPCBJABLK_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* NFBPDEHAFEF()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPCBJABLK_NFBPDEHAFEF_OFFSET))(this);
		}

	};
