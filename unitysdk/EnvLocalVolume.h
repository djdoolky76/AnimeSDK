#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GeometryEdit/Prism.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class COGBNIGPJPO;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVLOCALVOLUME_CTOR_OFFSET UNITYSDK_OFFSET(0x155D9320)
#define ENVLOCALVOLUME_FODDCCPLKBD_OFFSET UNITYSDK_OFFSET(0x155D8CD0)
#define ENVLOCALVOLUME_GETENVIROMENTPROFILESLIST_OFFSET UNITYSDK_OFFSET(0x155D8B90)
#define ENVLOCALVOLUME_GETENVIROMENTPROFILE_OFFSET UNITYSDK_OFFSET(0x155D8B50)
#define ENVLOCALVOLUME_GETINSIDE_OFFSET UNITYSDK_OFFSET(0x155D8F20)
#define ENVLOCALVOLUME_NKAPPIPMIKK_OFFSET UNITYSDK_OFFSET(0x155D8E90)
#define ENVLOCALVOLUME_OHMLABGPCOI_OFFSET UNITYSDK_OFFSET(0x155D8D50)
#define ENVLOCALVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x155D8C80)
#define ENVLOCALVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x155D8C30)

inline static constexpr unsigned int EnvLocalVolume_TypeDefinitionIndex = 47296;

	class EnvLocalVolume : public ::GeometryEdit::Prism
	{
	public:
		::System::Boolean UseProfileList; // 0x40
		::System::Byte _padding0[0x7];
		::EnviromentSystem::EnviromentProfile* TargetProfile; // 0x48
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviromentProfile*>* TargetProfileList; // 0x50
		::System::Collections::Generic::List_1<::COGBNIGPJPO*>* JJMMEBGMLAD; // 0x58
		::System::Int32 Priority; // 0x60
		::System::Single Duration; // 0x64
		::RPG::Client::EnvironmentSystem* LKDKHHMECAG; // 0x68
		::System::Boolean IsDynamicArea; // 0x70
		::System::Byte _padding1[0x3];
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_CTOR_OFFSET))(this);
		}

		::COGBNIGPJPO* GetEnviromentProfile()
		{
			return ((::COGBNIGPJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_GETENVIROMENTPROFILE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::COGBNIGPJPO*>* GetEnviromentProfilesList()
		{
			return ((::System::Collections::Generic::List_1<::COGBNIGPJPO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_GETENVIROMENTPROFILESLIST_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean FODDCCPLKBD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_FODDCCPLKBD_OFFSET))(this, a1);
		}

		::System::Int32 OHMLABGPCOI(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_OHMLABGPCOI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 NKAPPIPMIKK(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_NKAPPIPMIKK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetInside(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_GETINSIDE_OFFSET))(this, a1);
		}

	};
