#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNOCOHFFHCP.h"
namespace RPG::GameCore { class PropComponent; }

#define IONBAHLIGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x16505120)
#define IONBAHLIGMI_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x16505060)

inline static constexpr unsigned int IONBAHLIGMI_TypeDefinitionIndex = 60645;

	class IONBAHLIGMI : public ::JNOCOHFFHCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + IONBAHLIGMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_IconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBAHLIGMI_GET_ICONID_OFFSET))(this);
		}

	};
