#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class MJNGFEGNCOA;

#define MJNGFEGNCOA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB96F4C0)
#define MJNGFEGNCOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB96F4B0)

inline static constexpr unsigned int MJNGFEGNCOA_TypeDefinitionIndex = 54125;

	class MJNGFEGNCOA : public ::System::Object
	{
	public:
		::System::Single LLBFAIGNNEC; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint BMBLJAEBOPK; // 0x18
		static ::MJNGFEGNCOA** StaticGet_COAHELMPGLI()
		{
			return (::MJNGFEGNCOA**)UnitySDK::FromName("", "MJNGFEGNCOA")->GetStaticField(0x30320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNGFEGNCOA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJNGFEGNCOA_CCTOR_OFFSET))();
		}

	};
