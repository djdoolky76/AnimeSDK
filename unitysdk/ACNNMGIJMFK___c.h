#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCJBFLKOJD;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ACNNMGIJMFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB12A000)
#define ACNNMGIJMFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB12A040)
#define ACNNMGIJMFK___C__CHECKHASAVATARCONFLICT_B__5_0_OFFSET UNITYSDK_OFFSET(0xB12A050)
#define ACNNMGIJMFK___C__CHECKHASAVATARCONFLICT_B__5_1_OFFSET UNITYSDK_OFFSET(0xB12A060)
#define ACNNMGIJMFK___C___CONFIRMEQUIPMENTCONFLICTCLEAR_B__8_0_OFFSET UNITYSDK_OFFSET(0xB12A150)
#define ACNNMGIJMFK___C___FILLCONFLICTSTAGEINDICESTO_B__12_0_OFFSET UNITYSDK_OFFSET(0xB12A1A0)
#define ACNNMGIJMFK___C___FILLCONFLICTSTAGEINDICESTO_B__12_2_OFFSET UNITYSDK_OFFSET(0xB12A1B0)

inline static constexpr unsigned int ACNNMGIJMFK___c_TypeDefinitionIndex = 81510;

	class ACNNMGIJMFK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x494B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x494B8);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x494C0);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__12_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x494C8);
		}

		static ::System::Func_2<::JLCJBFLKOJD*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::JLCJBFLKOJD*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x494D0);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::JLCJBFLKOJD*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::JLCJBFLKOJD*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x494D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckHasAvatarConflict_b__5_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C__CHECKHASAVATARCONFLICT_B__5_0_OFFSET))(this, a1);
		}

		::JLCJBFLKOJD* _CheckHasAvatarConflict_b__5_1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::JLCJBFLKOJD*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C__CHECKHASAVATARCONFLICT_B__5_1_OFFSET))(this, a1);
		}

		::System::String* __ConfirmEquipmentConflictClear_b__8_0(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C___CONFIRMEQUIPMENTCONFLICTCLEAR_B__8_0_OFFSET))(this, a1);
		}

		::System::Boolean __FillConflictStageIndicesTo_b__12_0(::JLCJBFLKOJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C___FILLCONFLICTSTAGEINDICESTO_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean __FillConflictStageIndicesTo_b__12_2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C___FILLCONFLICTSTAGEINDICESTO_B__12_2_OFFSET))(this, a1);
		}

	};
