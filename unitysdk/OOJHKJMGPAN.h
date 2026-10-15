#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIMEGOHPNFI;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOJHKJMGPAN_BHHABIPDODD_OFFSET UNITYSDK_OFFSET(0xBF8AC00)
#define OOJHKJMGPAN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8AB60)
#define OOJHKJMGPAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF8B9C0)
#define OOJHKJMGPAN_HJJFOBGFBIO_OFFSET UNITYSDK_OFFSET(0xBF8BA60)

inline static constexpr unsigned int OOJHKJMGPAN_TypeDefinitionIndex = 77366;

	class OOJHKJMGPAN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* BBCBMBIGEPH; // 0x10
		::System::Boolean LINNHMPNCJG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJHKJMGPAN_CTOR_OFFSET))(this);
		}

		::System::Void BHHABIPDODD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJHKJMGPAN_BHHABIPDODD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJHKJMGPAN_DISPOSE_OFFSET))(this);
		}

		::OIMEGOHPNFI* HJJFOBGFBIO(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1)
		{
			return ((::OIMEGOHPNFI*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + OOJHKJMGPAN_HJJFOBGFBIO_OFFSET))(this, a1);
		}

	};
