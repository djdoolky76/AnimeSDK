#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E3850DE56028A1AB.h"

namespace ABC::TechArt { class InteriorMaterialManipulator; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class E2E2311225330715; }
namespace UnityEngine { class MeshRenderer; }

#define AC0395D4B7C8C557_AB9B45613695C6CE_OFFSET UNITYSDK_OFFSET(0x2873C60)
#define AC0395D4B7C8C557_F3E9BFF09C08956D_OFFSET UNITYSDK_OFFSET(0x2873A80)
#define AC0395D4B7C8C557_FE54CCFB7A90ADB1_OFFSET UNITYSDK_OFFSET(0x2873A30)
#define AC0395D4B7C8C557__CTOR_OFFSET UNITYSDK_OFFSET(0x2873BA0)

inline static constexpr unsigned int AC0395D4B7C8C557_TypeDefinitionIndex = 16128;

class AC0395D4B7C8C557 : public ::E3850DE56028A1AB
{
public:
	::UnityEngine::E2E2311225330715* F6B698DA33C11DCA; // 0x18
	::UnityEngine::MeshRenderer* FEEBCF5917FEC358; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* AC2E9A0BD1B2B048; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* B4219999364E2B11; // 0x30

	::System::Void FE54CCFB7A90ADB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC0395D4B7C8C557_FE54CCFB7A90ADB1_OFFSET))(this);
	}

	::System::Void F3E9BFF09C08956D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC0395D4B7C8C557_F3E9BFF09C08956D_OFFSET))(this);
	}

	::ABC::TechArt::InteriorMaterialManipulator* AB9B45613695C6CE()
	{
		return ((::ABC::TechArt::InteriorMaterialManipulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AC0395D4B7C8C557_AB9B45613695C6CE_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC0395D4B7C8C557__CTOR_OFFSET))(this);
	}
};
