#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AnimatorClipZoneDescConfig; }
namespace RPG::GameCore { class AnimatorClipZoneNewConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLIAIIOKNFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB767DE0)
#define LLIAIIOKNFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7684E0)
#define LLIAIIOKNFI_GBKDEGGOKJI_OFFSET UNITYSDK_OFFSET(0xB768580)
#define LLIAIIOKNFI_LCGEFPGFDHM_OFFSET UNITYSDK_OFFSET(0xB768290)
#define LLIAIIOKNFI_LEEFMLEPGLB_OFFSET UNITYSDK_OFFSET(0xB767E00)

inline static constexpr unsigned int LLIAIIOKNFI_TypeDefinitionIndex = 55914;

	class LLIAIIOKNFI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AnimatorClipZoneDescConfig*>* PFNNLAGAMLE; // 0x10
		::RPG::GameCore::AnimatorClipZoneNewConfig* FJBNJOOFBHB; // 0x18
		::System::Void _ctor(::RPG::GameCore::AnimatorClipZoneNewConfig* a1, ::RPG::GameCore::AnimatorClipZoneNewConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorClipZoneNewConfig*, ::RPG::GameCore::AnimatorClipZoneNewConfig*))((::PBYTE)hIl2Cpp + LLIAIIOKNFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIAIIOKNFI_DISPOSE_OFFSET))(this);
		}

		::System::Boolean GBKDEGGOKJI(::System::Int32 a1, ::System::Single a2, ::RPG::GameCore::AnimZoneType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::GameCore::AnimZoneType))((::PBYTE)hIl2Cpp + LLIAIIOKNFI_GBKDEGGOKJI_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AnimatorClipZoneNewConfig* LEEFMLEPGLB(::RPG::GameCore::AnimatorClipZoneNewConfig* a1, ::RPG::GameCore::AnimatorClipZoneNewConfig* a2)
		{
			return ((::RPG::GameCore::AnimatorClipZoneNewConfig*(*)(::PVOID, ::RPG::GameCore::AnimatorClipZoneNewConfig*, ::RPG::GameCore::AnimatorClipZoneNewConfig*))((::PBYTE)hIl2Cpp + LLIAIIOKNFI_LEEFMLEPGLB_OFFSET))(this, a1, a2);
		}

		::System::Void LCGEFPGFDHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIAIIOKNFI_LCGEFPGFDHM_OFFSET))(this);
		}

	};
