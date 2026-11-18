#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167C1A20)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CLEARMATERIAL_B__42_0_OFFSET UNITYSDK_OFFSET(0x167C1B90)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167C1A60)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__SETCONSUME_B__41_0_OFFSET UNITYSDK_OFFSET(0x167C1B40)
#define MOLEMOLE_UIROLELEVELUPCONTROLLER___C__SHOWBACKITEMLISTDIALOG_B__26_0_OFFSET UNITYSDK_OFFSET(0x167C1A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleLevelupController___c_TypeDefinitionIndex = 72624;

	class UIRoleLevelupController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::FOLOGHLENFB*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x48CB0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x48CB8);
		}
		static ::System::Comparison_1<::FOLOGHLENFB*>** StaticGet___9__41_0()
		{
			return (::System::Comparison_1<::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x48CC0);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x48CC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBackItemListDialog_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__SHOWBACKITEMLISTDIALOG_B__26_0_OFFSET))(this);
		}

		::System::Int32 _SetConsume_b__41_0(::FOLOGHLENFB* ext, ::FOLOGHLENFB* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::FOLOGHLENFB*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__SETCONSUME_B__41_0_OFFSET))(this, ext, templateExt);
		}

		::System::Int32 _ClearMaterial_b__42_0(::FOLOGHLENFB* ext, ::FOLOGHLENFB* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::FOLOGHLENFB*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLELEVELUPCONTROLLER___C__CLEARMATERIAL_B__42_0_OFFSET))(this, ext, templateExt);
		}
	};
}
