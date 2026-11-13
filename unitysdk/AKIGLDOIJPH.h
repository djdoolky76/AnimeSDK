#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace System { class String; }

#define AKIGLDOIJPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D866390)

inline static constexpr unsigned int AKIGLDOIJPH_TypeDefinitionIndex = 44462;

	class AKIGLDOIJPH : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimChestConfig* EABKOHGCHFP; // 0x10
		::System::String* PJNDKCMPMAO; // 0x18
		::RPG::GameCore::FiveDimChestState MEPFOEEGBEA; // 0x20
		::System::Int32 MNMHMECGDAK; // 0x24
		::System::Boolean EDCNKGHPHFC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIGLDOIJPH_CTOR_OFFSET))(this);
		}

	};
