#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNPHOJBKNKB;
class OMIOAJGHCAM;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BC0B00)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC0B40)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__29_0_OFFSET UNITYSDK_OFFSET(0x19BC0BA0)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHRIGHTLISTFORCURRENTTAB_B__28_0_OFFSET UNITYSDK_OFFSET(0x19BC0B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex = 60374;

	class UIBangbooMicroWebEventPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AAE0);
		}
		static ::System::Comparison_1<::OMIOAJGHCAM*>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::OMIOAJGHCAM*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AAE8);
		}
		static ::System::Comparison_1<::FNPHOJBKNKB*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::FNPHOJBKNKB*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshRightListForCurrentTab_b__28_0(::FNPHOJBKNKB* a, ::FNPHOJBKNKB* b)
		{
			return ((::System::Int32(*)(::PVOID, ::FNPHOJBKNKB*, ::FNPHOJBKNKB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHRIGHTLISTFORCURRENTTAB_B__28_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshRewardPoints_b__29_0(::OMIOAJGHCAM* a, ::OMIOAJGHCAM* b)
		{
			return ((::System::Int32(*)(::PVOID, ::OMIOAJGHCAM*, ::OMIOAJGHCAM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__29_0_OFFSET))(this, a, b);
		}
	};
}
