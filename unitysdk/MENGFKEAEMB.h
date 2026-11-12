#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKPPDDOFADO.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class AvatarPropertyValue; }

#define MENGFKEAEMB_CTOR_OFFSET UNITYSDK_OFFSET(0xC1937D0)
#define MENGFKEAEMB_FIPJEMDGMAO_OFFSET UNITYSDK_OFFSET(0xC194650)
#define MENGFKEAEMB_JKHEOBBHGNH_OFFSET UNITYSDK_OFFSET(0xC193FA0)
#define MENGFKEAEMB_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0xC193800)

inline static constexpr unsigned int MENGFKEAEMB_TypeDefinitionIndex = 66825;

	class MENGFKEAEMB : public ::KKPPDDOFADO
	{
	public:
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x20
		::NDPFOOJIAIJ* BABBJILOOAL; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + MENGFKEAEMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGFKEAEMB_LNEPAFGAPJH_OFFSET))(this);
		}

		::System::Void JKHEOBBHGNH(::RPG::Client::GridFightRole* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Boolean))((::PBYTE)hIl2Cpp + MENGFKEAEMB_JKHEOBBHGNH_OFFSET))(this, a1, a2);
		}

		::System::Void FIPJEMDGMAO(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + MENGFKEAEMB_FIPJEMDGMAO_OFFSET))(this, a1);
		}

	};
