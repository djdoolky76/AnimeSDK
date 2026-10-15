#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap::FiveDim { class Face; }

#define APAHPCEMFND___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158BD620)
#define APAHPCEMFND___C__DISPLAYCLASS33_0__GETFACE_B__0_OFFSET UNITYSDK_OFFSET(0x158BD760)

inline static constexpr unsigned int APAHPCEMFND___c__DisplayClass33_0_TypeDefinitionIndex = 74672;

	class APAHPCEMFND___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::UInt32 faceIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFace_b__0(::RPG::Client::NavMap::FiveDim::Face* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + APAHPCEMFND___C__DISPLAYCLASS33_0__GETFACE_B__0_OFFSET))(this, a1);
		}

	};
