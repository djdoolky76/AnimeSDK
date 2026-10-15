#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"
namespace RPG::GameCore { class SetSkillTextDialogType; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLPGFGJKIAL_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA235B0)
#define CLPGFGJKIAL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA231D0)
#define CLPGFGJKIAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA23200)

inline static constexpr unsigned int CLPGFGJKIAL_TypeDefinitionIndex = 56425;

	class CLPGFGJKIAL
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillTextDialogType, ::System::String*>** StaticGet_APFIEOGGDIG()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillTextDialogType, ::System::String*>**)UnitySDK::FromName("", "CLPGFGJKIAL")->GetStaticField(0x4FF00);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTextDialogType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTextDialogType*))((::PBYTE)hIl2Cpp + CLPGFGJKIAL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLPGFGJKIAL_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPGFGJKIAL_ONTASKBEGIN_OFFSET))(this);
		}

	};
