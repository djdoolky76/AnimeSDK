#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILFCBBADGKM;
class OMIOAJGHCAM;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BC24A0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC24E0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REBUILDROLEDATALIST_B__25_0_OFFSET UNITYSDK_OFFSET(0x19BC24F0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__41_0_OFFSET UNITYSDK_OFFSET(0x19BC2550)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex = 85719;

	class UIBangbooMicroWebRoleCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::OMIOAJGHCAM*>** StaticGet___9__41_0()
		{
			return (::System::Comparison_1<::OMIOAJGHCAM*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46EE0);
		}
		static ::System::Comparison_1<::ILFCBBADGKM*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::ILFCBBADGKM*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46EE8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RebuildRoleDataList_b__25_0(::ILFCBBADGKM* a, ::ILFCBBADGKM* b)
		{
			return ((::System::Int32(*)(::PVOID, ::ILFCBBADGKM*, ::ILFCBBADGKM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REBUILDROLEDATALIST_B__25_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshRewardPoints_b__41_0(::OMIOAJGHCAM* a, ::OMIOAJGHCAM* b)
		{
			return ((::System::Int32(*)(::PVOID, ::OMIOAJGHCAM*, ::OMIOAJGHCAM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__41_0_OFFSET))(this, a, b);
		}
	};
}
