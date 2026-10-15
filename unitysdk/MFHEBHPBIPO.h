#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
class HCMJGNAPIBD;
namespace System { class String; }

#define MFHEBHPBIPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F88B0)
#define MFHEBHPBIPO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB8F88C0)
#define MFHEBHPBIPO_NFAIKOJEIJP_OFFSET UNITYSDK_OFFSET(0xB8F8920)
#define MFHEBHPBIPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB8F8970)

inline static constexpr unsigned int MFHEBHPBIPO_TypeDefinitionIndex = 64148;

	class MFHEBHPBIPO : public ::HGMMFJHJECA
	{
	public:
		::HCMJGNAPIBD* COKDGBEABHP; // 0x10
		::RPG::GameCore::FateLevelParamType KECDAFAFJFA; // 0x18
		::System::Void _ctor(::RPG::GameCore::FateLevelParamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateLevelParamType))((::PBYTE)hIl2Cpp + MFHEBHPBIPO_CTOR_OFFSET))(this, a1);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHEBHPBIPO_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void NFAIKOJEIJP(::HCMJGNAPIBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCMJGNAPIBD*))((::PBYTE)hIl2Cpp + MFHEBHPBIPO_NFAIKOJEIJP_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHEBHPBIPO_TOSTRING_OFFSET))(this);
		}

	};
