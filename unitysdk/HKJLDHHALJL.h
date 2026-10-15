#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SaveCharacterStateMask.h"
class EJAMNGBKMPM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKJLDHHALJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D4A6A0)
#define HKJLDHHALJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D49F80)
#define HKJLDHHALJL_FAMKGHCJDAD_OFFSET UNITYSDK_OFFSET(0x15D4A5C0)
#define HKJLDHHALJL_GDIKGNMFEAJ_OFFSET UNITYSDK_OFFSET(0x15D4A130)
#define HKJLDHHALJL_IAMOMCGPMGM_OFFSET UNITYSDK_OFFSET(0x15D4A370)
#define HKJLDHHALJL_MFMJEGEHIOL_OFFSET UNITYSDK_OFFSET(0x15D4A490)

inline static constexpr unsigned int HKJLDHHALJL_TypeDefinitionIndex = 56968;

	class HKJLDHHALJL : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::EJAMNGBKMPM*>* PIGEDCGOCHF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJLDHHALJL_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJLDHHALJL_DISPOSE_OFFSET))(this);
		}

		::EJAMNGBKMPM* GDIKGNMFEAJ(::System::String* a1, ::RPG::GameCore::SaveCharacterStateMask a2, ::RPG::GameCore::EnumStatusTypeMask a3)
		{
			return ((::EJAMNGBKMPM*(*)(::PVOID, ::System::String*, ::RPG::GameCore::SaveCharacterStateMask, ::RPG::GameCore::EnumStatusTypeMask))((::PBYTE)hIl2Cpp + HKJLDHHALJL_GDIKGNMFEAJ_OFFSET))(this, a1, a2, a3);
		}

		::EJAMNGBKMPM* IAMOMCGPMGM(::System::String* a1, ::System::Boolean a2)
		{
			return ((::EJAMNGBKMPM*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKJLDHHALJL_IAMOMCGPMGM_OFFSET))(this, a1, a2);
		}

		::System::Void MFMJEGEHIOL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKJLDHHALJL_MFMJEGEHIOL_OFFSET))(this, a1);
		}

		::EJAMNGBKMPM* FAMKGHCJDAD(::System::String* a1)
		{
			return ((::EJAMNGBKMPM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKJLDHHALJL_FAMKGHCJDAD_OFFSET))(this, a1);
		}

	};
