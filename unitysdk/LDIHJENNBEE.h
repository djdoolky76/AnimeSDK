#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BDPDNAECJII;
class DFBICHLFCLL;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDIHJENNBEE_BBBLNNFJFIB_OFFSET UNITYSDK_OFFSET(0x3C2C240)
#define LDIHJENNBEE_CGIFAKIIDID_OFFSET UNITYSDK_OFFSET(0x3C2C1E0)

inline static constexpr unsigned int LDIHJENNBEE_TypeDefinitionIndex = 37135;

	struct alignas(8) LDIHJENNBEE
	{
		::BDPDNAECJII* IKLJGJHHMOL; // 0x10
		::System::UInt32 BOKJJKFCFME; // 0x18
		::System::UInt32 CONDNJOOEND; // 0x1C
		::System::Boolean CKMGPKBPKHA; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::BaseLittleGameAbilityEffectConfig* HPBAMMEFDMK; // 0x28
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* GLGKAHCEPIL; // 0x30
		::DFBICHLFCLL* IKBEIKJAOFJ; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* EJHODPJIFIN; // 0x40
		::System::UInt32 CGIFAKIIDID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIHJENNBEE_CGIFAKIIDID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* BBBLNNFJFIB()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIHJENNBEE_BBBLNNFJFIB_OFFSET))(this);
		}

	};
