#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AFFHHHEJEFH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0B190)

inline static constexpr unsigned int AFFHHHEJEFH_TypeDefinitionIndex = 67785;

	class AFFHHHEJEFH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* FavoriteBuildRefIDs; // 0x10
		::System::UInt32 Version; // 0x18
		::System::UInt32 MaxFavoriteCount; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFHHHEJEFH_CTOR_OFFSET))(this);
		}

	};
