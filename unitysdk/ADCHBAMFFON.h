#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GJMPEIGLHJK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/LevelEntityBakedInfo.h"
namespace System { class Object; }

#define ADCHBAMFFON_CKEBKFPIDPH_OFFSET UNITYSDK_OFFSET(0xB133200)
#define ADCHBAMFFON_CTOR_OFFSET UNITYSDK_OFFSET(0xB133B40)
#define ADCHBAMFFON_MBOMCAFOBEG_OFFSET UNITYSDK_OFFSET(0xB133840)
#define ADCHBAMFFON_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB1331C0)

inline static constexpr unsigned int ADCHBAMFFON_TypeDefinitionIndex = 53566;

	class ADCHBAMFFON : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHBAMFFON_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHBAMFFON_PJPFIHFAHGO_OFFSET))(this);
		}

		static ::System::Void CKEBKFPIDPH(::System::UInt32 a1, ::System::Int32 a2, ::GJMPEIGLHJK a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::Object* a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::GJMPEIGLHJK, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADCHBAMFFON_CKEBKFPIDPH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean MBOMCAFOBEG(::System::UInt32 a1, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo> a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::Object* a7, ::System::Boolean a8)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelEntityBakedInfo>, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADCHBAMFFON_MBOMCAFOBEG_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
