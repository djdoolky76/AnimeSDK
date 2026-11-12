#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define MNGNKCEOKIF_FAIBBDONLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF7B960)

inline static constexpr unsigned int MNGNKCEOKIF_FAIBBDONLAE_TypeDefinitionIndex = 6268;

	class MNGNKCEOKIF_FAIBBDONLAE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* DEJPMFANBNK; // 0x10
		::Il2CppArray<::RPG::MVector2>* LJDHGFECMHJ; // 0x18
		::RPG::MVector2 EFNAJMADAHM; // 0x20
		::System::Boolean MFIOOONDGJF; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single EODLMJJCHJP; // 0x2C
		::RPG::MVector2 NKAACMGNNPK; // 0x30
		::System::Int32 EIHHMIHLGLE; // 0x38
		::RPG::MVector2 GNOKDJHJJAB; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_FAIBBDONLAE_CTOR_OFFSET))(this);
		}

	};
