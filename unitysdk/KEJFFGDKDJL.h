#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartLine.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
class BJIACBNKCCJ;
class HPMECOPBDBE;
class LIBEBAKBAOM;
class PGEMELICKOP;
namespace UnityEngine { class Transform; }

#define KEJFFGDKDJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6A720)

inline static constexpr unsigned int KEJFFGDKDJL_TypeDefinitionIndex = 43901;

	class KEJFFGDKDJL : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x10
		::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine HJIOBKHMFHA; // 0x18
		::Il2CppArray<::PGEMELICKOP*>* JEOBJOICGDG; // 0x28
		::Il2CppArray<::LIBEBAKBAOM*>* PBMKEAJPDIC; // 0x30
		::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>* MKCFHAFABCO; // 0x38
		::Il2CppArray<::BJIACBNKCCJ*>* MMEGKALPGGC; // 0x40
		::Il2CppArray<::HPMECOPBDBE*>* MBEOOBEPKDI; // 0x48
		::System::Single LIHFEBIIAEJ; // 0x50
		::UnityEngine::Bounds MLBJBLPHDFE; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJFFGDKDJL_CTOR_OFFSET))(this);
		}

	};
