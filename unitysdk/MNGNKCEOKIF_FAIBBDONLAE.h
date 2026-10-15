#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define MNGNKCEOKIF_FAIBBDONLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD790C0)

inline static constexpr unsigned int MNGNKCEOKIF_FAIBBDONLAE_TypeDefinitionIndex = 6261;

	class MNGNKCEOKIF_FAIBBDONLAE : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::MVector2>* LJDHGFECMHJ; // 0x10
		::Il2CppArray<::System::Int32>* DEJPMFANBNK; // 0x18
		::System::Single EODLMJJCHJP; // 0x20
		::RPG::MVector2 GNOKDJHJJAB; // 0x24
		::RPG::MVector2 NKAACMGNNPK; // 0x2C
		::System::Boolean MFIOOONDGJF; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::MVector2 EFNAJMADAHM; // 0x38
		::System::Int32 EIHHMIHLGLE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_FAIBBDONLAE_CTOR_OFFSET))(this);
		}

	};
