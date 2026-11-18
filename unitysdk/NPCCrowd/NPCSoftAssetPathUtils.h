#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCSOFTASSETPATHUTILS_GET_ISNPCUNLOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xF1596A0)
#define NPCCROWD_NPCSOFTASSETPATHUTILS_SET_ISNPCUNLOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xF159700)
#define NPCCROWD_NPCSOFTASSETPATHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xF159760)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAssetPathUtils_TypeDefinitionIndex = 69508;

	class NPCSoftAssetPathUtils : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__IsNpcUnloadImmediate_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCSoftAssetPathUtils_TypeDefinitionIndex)->GetStaticField(0x10760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTASSETPATHUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsNpcUnloadImmediate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTASSETPATHUTILS_GET_ISNPCUNLOADIMMEDIATE_OFFSET))();
		}

		static ::System::Void set_IsNpcUnloadImmediate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTASSETPATHUTILS_SET_ISNPCUNLOADIMMEDIATE_OFFSET))(value);
		}
	};
}
