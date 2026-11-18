#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJNGKDMBMDA;
class FJIFILPGMCF;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CC5A40)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC5A80)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__ONSELECTLEVEL_B__57_0_OFFSET UNITYSDK_OFFSET(0x14CC5C90)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__ONSELECTTAB_B__51_1_OFFSET UNITYSDK_OFFSET(0x14CC5BB0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__ONSETPASSIVESKILLS_B__19_0_OFFSET UNITYSDK_OFFSET(0x14CC5A90)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__REFRESHPASSIVESKILLVIEW_B__23_0_OFFSET UNITYSDK_OFFSET(0x14CC5AB0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__REFRESHVIEW_B__27_0_OFFSET UNITYSDK_OFFSET(0x14CC5AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c_TypeDefinitionIndex = 77074;

	class UIRidusGotBooSelectLevelPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FJIFILPGMCF*, ::System::Int32>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::FJIFILPGMCF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C620);
		}
		static ::System::Converter_2<::FJIFILPGMCF*, ::System::Int32>** StaticGet___9__19_0()
		{
			return (::System::Converter_2<::FJIFILPGMCF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C628);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C630);
		}
		static ::System::Converter_2<::System::Int32, ::FJIFILPGMCF*>** StaticGet___9__51_1()
		{
			return (::System::Converter_2<::System::Int32, ::FJIFILPGMCF*>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C638);
		}
		static ::System::Converter_2<::System::Int32, ::FJIFILPGMCF*>** StaticGet___9__57_0()
		{
			return (::System::Converter_2<::System::Int32, ::FJIFILPGMCF*>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C640);
		}
		static ::System::Converter_2<::System::Int32, ::CJNGKDMBMDA*>** StaticGet___9__27_0()
		{
			return (::System::Converter_2<::System::Int32, ::CJNGKDMBMDA*>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnSetPassiveSkills_b__19_0(::FJIFILPGMCF* x)
		{
			return ((::System::Int32(*)(::PVOID, ::FJIFILPGMCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__ONSETPASSIVESKILLS_B__19_0_OFFSET))(this, x);
		}

		::System::Int32 _RefreshPassiveSkillView_b__23_0(::FJIFILPGMCF* x)
		{
			return ((::System::Int32(*)(::PVOID, ::FJIFILPGMCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__REFRESHPASSIVESKILLVIEW_B__23_0_OFFSET))(this, x);
		}

		::CJNGKDMBMDA* _RefreshView_b__27_0(::System::Int32 x)
		{
			return ((::CJNGKDMBMDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__REFRESHVIEW_B__27_0_OFFSET))(this, x);
		}

		::FJIFILPGMCF* _OnSelectTab_b__51_1(::System::Int32 x)
		{
			return ((::FJIFILPGMCF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__ONSELECTTAB_B__51_1_OFFSET))(this, x);
		}

		::FJIFILPGMCF* _OnSelectLevel_b__57_0(::System::Int32 x)
		{
			return ((::FJIFILPGMCF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__ONSELECTLEVEL_B__57_0_OFFSET))(this, x);
		}
	};
}
