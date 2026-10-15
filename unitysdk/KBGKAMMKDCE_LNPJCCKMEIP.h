#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelPedestrianFlowInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBGKAMMKDCE_LNPJCCKMEIP_CTOR_OFFSET UNITYSDK_OFFSET(0xB2FA390)
#define KBGKAMMKDCE_LNPJCCKMEIP_EPKMKNKGDDF_OFFSET UNITYSDK_OFFSET(0xB2FA4C0)

inline static constexpr unsigned int KBGKAMMKDCE_LNPJCCKMEIP_TypeDefinitionIndex = 69225;

	class KBGKAMMKDCE_LNPJCCKMEIP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* HFKCJMOBDNC; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>* PBPGMKIDFHP; // 0x18
		::System::Int32 INMOAMLBMPI; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>*))((::PBYTE)hIl2Cpp + KBGKAMMKDCE_LNPJCCKMEIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 EPKMKNKGDDF(::RPG::GameCore::LevelPedestrianFlowInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelPedestrianFlowInfo*))((::PBYTE)hIl2Cpp + KBGKAMMKDCE_LNPJCCKMEIP_EPKMKNKGDDF_OFFSET))(this, a1);
		}

	};
