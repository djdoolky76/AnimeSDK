#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INJJKFAPLKE_BCBONPBIHNE_OFFSET UNITYSDK_OFFSET(0x1A5F1800)
#define INJJKFAPLKE_BEKPOPMKJBC_OFFSET UNITYSDK_OFFSET(0x1A5F2720)
#define INJJKFAPLKE_CFNGAEOGLEE_OFFSET UNITYSDK_OFFSET(0x1A5F38F0)
#define INJJKFAPLKE_GDEGLCOMMFN_OFFSET UNITYSDK_OFFSET(0x1A5F3090)
#define INJJKFAPLKE_JEEJAAPGJPO_OFFSET UNITYSDK_OFFSET(0x1A5F3A20)

inline static constexpr unsigned int INJJKFAPLKE_TypeDefinitionIndex = 68123;

	class INJJKFAPLKE : public ::System::Object
	{
	public:
		static ::System::Boolean BCBONPBIHNE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INJJKFAPLKE_BCBONPBIHNE_OFFSET))(a1);
		}

		static ::System::UInt32 CFNGAEOGLEE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INJJKFAPLKE_CFNGAEOGLEE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 GDEGLCOMMFN(::RPG::Client::NavMap::SubNavMapData* a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::SubNavMapData*, ::System::UInt32))((::PBYTE)hIl2Cpp + INJJKFAPLKE_GDEGLCOMMFN_OFFSET))(a1, a2);
		}

		static ::System::Single JEEJAAPGJPO(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INJJKFAPLKE_JEEJAAPGJPO_OFFSET))(a1, a2);
		}

		static ::System::Void BEKPOPMKJBC(::RPG::Client::NavMap::ICartography* a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::NavMap::ICartography*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + INJJKFAPLKE_BEKPOPMKJBC_OFFSET))(a1, a2, a3);
		}

	};
