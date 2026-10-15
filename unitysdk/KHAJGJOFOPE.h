#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class LevelEntityUseSkill; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHAJGJOFOPE_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FBF50)
#define KHAJGJOFOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3FBBF0)
#define KHAJGJOFOPE_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB3FBA00)
#define KHAJGJOFOPE_KCHJGCLDMMM_OFFSET UNITYSDK_OFFSET(0xB3FBC80)

inline static constexpr unsigned int KHAJGJOFOPE_TypeDefinitionIndex = 56199;

	class KHAJGJOFOPE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Object*>*>* IPPGDPNDNBK; // 0x10
		// static const ::System::Object JHPLFAOKPOP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAJGJOFOPE_CTOR_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA(::RPG::GameCore::LevelEntityUseSkill* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityUseSkill*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHAJGJOFOPE_ELEPDOMDAGA_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAJGJOFOPE_DISPOSE_OFFSET))(this);
		}

		::System::Int32 KCHJGCLDMMM(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KHAJGJOFOPE_KCHJGCLDMMM_OFFSET))(this, a1, a2, a3);
		}

	};
