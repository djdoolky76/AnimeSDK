#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5272709773EA72.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class F64EF3472044A5DA;

#define ABC_CUSTOMRENDERPIPELINE_TERRAINVTMANAGER_F5628F8349D4A8A6_FC1D5836EC85EC5F_OFFSET UNITYSDK_OFFSET(0x280E430)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINVTMANAGER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x280E770)
#define ABC_CUSTOMRENDERPIPELINE_TERRAINVTMANAGER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TerrainVTManager_F5628F8349D4A8A6_TypeDefinitionIndex = 16810;

	class TerrainVTManager_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ABC::CustomRenderPipeline::TerrainVTManager_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ABC::CustomRenderPipeline::TerrainVTManager_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(TerrainVTManager_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_3<::System::Collections::Generic::List_1<::System::Int32>*, ::F64EF3472044A5DA<::B07850EA97DBB75A<::System::Int32, ::AC5272709773EA72>>*, ::F64EF3472044A5DA<::B07850EA97DBB75A<::System::Int32, ::AC5272709773EA72>>*>** StaticGet_E1FF9CEFF46475BE()
		{
			return (::System::Action_3<::System::Collections::Generic::List_1<::System::Int32>*, ::F64EF3472044A5DA<::B07850EA97DBB75A<::System::Int32, ::AC5272709773EA72>>*, ::F64EF3472044A5DA<::B07850EA97DBB75A<::System::Int32, ::AC5272709773EA72>>*>**)Il2CppClass::FromTypeDefinitionIndex(TerrainVTManager_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINVTMANAGER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINVTMANAGER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void FC1D5836EC85EC5F(::System::Collections::Generic::List_1<::System::Int32>* E9C322A23C62D49E, ::F64EF3472044A5DA<::B07850EA97DBB75A<::System::Int32, ::AC5272709773EA72>>* EE9F39F349121A96, ::F64EF3472044A5DA<::B07850EA97DBB75A<::System::Int32, ::AC5272709773EA72>>* FF9F9A9023E3EC8C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::F64EF3472044A5DA<::B07850EA97DBB75A<::System::Int32, ::AC5272709773EA72>>*, ::F64EF3472044A5DA<::B07850EA97DBB75A<::System::Int32, ::AC5272709773EA72>>*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TERRAINVTMANAGER_F5628F8349D4A8A6_FC1D5836EC85EC5F_OFFSET))(this, E9C322A23C62D49E, EE9F39F349121A96, FF9F9A9023E3EC8C);
		}
	};
}
