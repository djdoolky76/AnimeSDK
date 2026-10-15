#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyDataBase.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class BlendingValBase; }
namespace EnviromentSystemV2Space { class LLGKeyValuePairs; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x156579A0)
#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x15657720)
#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15657770)
#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_FJGJDPKCKLK_OFFSET UNITYSDK_OFFSET(0x15657940)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int StructureData_TypeDefinitionIndex = 49403;

	class StructureData : public ::EnviromentSystemV2Space::PropertyDataBase
	{
	public:
		::EnviromentSystemV2Space::LLGKeyValuePairs* defVal; // 0x28
		::System::String* AssemblyQualifiedName; // 0x30
		::System::String* serializedInstance; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_FCMDLFKMBMH_OFFSET))(this);
		}

		::System::Void FJGJDPKCKLK(::EnviromentSystemV2Space::BlendingValBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::BlendingValBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_FJGJDPKCKLK_OFFSET))(this, a1);
		}

	};
}
