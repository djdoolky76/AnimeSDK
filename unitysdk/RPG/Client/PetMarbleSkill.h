#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DOBOKPCPHCF;

#define RPG_CLIENT_PETMARBLESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0xDAEC4F0)
#define RPG_CLIENT_PETMARBLESKILL_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xDAEC5C0)
#define RPG_CLIENT_PETMARBLESKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDAEC550)
#define RPG_CLIENT_PETMARBLESKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0xDAEC500)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleSkill_TypeDefinitionIndex = 65835;

	class PetMarbleSkill : public ::System::Object
	{
	public:
		::DOBOKPCPHCF* _PetRow; // 0x10
		::System::Void _ctor(::DOBOKPCPHCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOBOKPCPHCF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESKILL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESKILL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESKILL_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_DescParams()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESKILL_GET_DESCPARAMS_OFFSET))(this);
		}

	};
}
