#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGDJANDMKOB.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AENGHANIAFE;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class LevelNavmapArea; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_MINIMAPZONE_ADDICONTOSECTION_OFFSET UNITYSDK_OFFSET(0x1965AB90)
#define RPG_CLIENT_MINIMAPZONE_CONVERTTOIMAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1965CE20)
#define RPG_CLIENT_MINIMAPZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x19651520)
#define RPG_CLIENT_MINIMAPZONE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1964EFE0)
#define RPG_CLIENT_MINIMAPZONE_ENABLESECTIONCLIP_OFFSET UNITYSDK_OFFSET(0x1965C140)
#define RPG_CLIENT_MINIMAPZONE_ENLIGHTENSECTION_OFFSET UNITYSDK_OFFSET(0x196564D0)
#define RPG_CLIENT_MINIMAPZONE_GETBACKGROUNDPATH_OFFSET UNITYSDK_OFFSET(0x1965C270)
#define RPG_CLIENT_MINIMAPZONE_GETCURPLAYERLEVELNAVMAPAREA_OFFSET UNITYSDK_OFFSET(0x1965C300)
#define RPG_CLIENT_MINIMAPZONE_GETDYNAMICSECTIONLINK_OFFSET UNITYSDK_OFFSET(0x1965C9E0)
#define RPG_CLIENT_MINIMAPZONE_GETLEVELNAVMAPAREABYSECTIONID_OFFSET UNITYSDK_OFFSET(0x1965C640)
#define RPG_CLIENT_MINIMAPZONE_GETLOCATESECTIONIDXS_OFFSET UNITYSDK_OFFSET(0x19655D90)
#define RPG_CLIENT_MINIMAPZONE_GETPOSITIONINCANVAS_OFFSET UNITYSDK_OFFSET(0x1965BE80)
#define RPG_CLIENT_MINIMAPZONE_GETSCALEINCANVAS_OFFSET UNITYSDK_OFFSET(0x1965BFD0)
#define RPG_CLIENT_MINIMAPZONE_GETSECTIONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1965BD80)
#define RPG_CLIENT_MINIMAPZONE_GETSECTIONIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1965C0E0)
#define RPG_CLIENT_MINIMAPZONE_GETSECTIONNUM_OFFSET UNITYSDK_OFFSET(0x1965AC60)
#define RPG_CLIENT_MINIMAPZONE_GETSECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0x1965C060)
#define RPG_CLIENT_MINIMAPZONE_GETSECTION_OFFSET UNITYSDK_OFFSET(0x1965AAE0)
#define RPG_CLIENT_MINIMAPZONE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1965CAD0)
#define RPG_CLIENT_MINIMAPZONE_GET_HASSECTION_OFFSET UNITYSDK_OFFSET(0x19655310)
#define RPG_CLIENT_MINIMAPZONE_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x1965D690)
#define RPG_CLIENT_MINIMAPZONE_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x1965C260)
#define RPG_CLIENT_MINIMAPZONE_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1965D640)
#define RPG_CLIENT_MINIMAPZONE_GET_SECTIONNUM_OFFSET UNITYSDK_OFFSET(0x1965D6B0)
#define RPG_CLIENT_MINIMAPZONE_IFSECTIONHASICON_OFFSET UNITYSDK_OFFSET(0x1965CF20)
#define RPG_CLIENT_MINIMAPZONE_ISINSECTION_OFFSET UNITYSDK_OFFSET(0x19655C00)
#define RPG_CLIENT_MINIMAPZONE_ISSECTIONDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1965C980)
#define RPG_CLIENT_MINIMAPZONE_REMOVEICONINSECTION_OFFSET UNITYSDK_OFFSET(0x1965ACE0)
#define RPG_CLIENT_MINIMAPZONE_SETUPSECTIONINFO_OFFSET UNITYSDK_OFFSET(0x19654970)
#define RPG_CLIENT_MINIMAPZONE_TICKDYNAMICSECTIONS_OFFSET UNITYSDK_OFFSET(0x19655370)
#define RPG_CLIENT_MINIMAPZONE__CALCBOUNDS_OFFSET UNITYSDK_OFFSET(0x1965BB40)
#define RPG_CLIENT_MINIMAPZONE__COMPARESECTIONIDXS_OFFSET UNITYSDK_OFFSET(0x1965D410)
#define RPG_CLIENT_MINIMAPZONE__GETLEVELNAVMAPAREA_OFFSET UNITYSDK_OFFSET(0x1965BF30)
#define RPG_CLIENT_MINIMAPZONE__ISINPOLYGONSECTION_OFFSET UNITYSDK_OFFSET(0x1965C780)
#define RPG_CLIENT_MINIMAPZONE__ISINPOLYGON_OFFSET UNITYSDK_OFFSET(0x1965D010)
#define RPG_CLIENT_MINIMAPZONE__ISLEFT_OFFSET UNITYSDK_OFFSET(0x1965D370)
#define RPG_CLIENT_MINIMAPZONE__ISSECTIONRECT_OFFSET UNITYSDK_OFFSET(0x1965C720)
#define RPG_CLIENT_MINIMAPZONE__SORTVISIBLESECTIONIDXS_OFFSET UNITYSDK_OFFSET(0x1965BCD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapZone_TypeDefinitionIndex = 62029;

	class MiniMapZone : public ::System::Object
	{
	public:
		::RPG::Client::Map* _Map; // 0x10
		::RPG::GameCore::LevelNavmapConfig* _NavMapConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _SectionSortingIDDic; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* VisibleSectionIdxs; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _VisibleSectionIDs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>* _IconsInSectionsDic; // 0x38
		::System::Collections::Generic::List_1<::AENGHANIAFE*>* _DynamicSectionLinks; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _SectionIDDic; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::MVector2>*>* _WorldSectionVerticesDic; // 0x50
		::UnityEngine::Sprite* Image; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int16>* _DynamicLinkIdxDic; // 0x60
		::System::String* ImagePath; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::JGDJANDMKOB>* SectionBoundsDic; // 0x70
		::UnityEngine::Bounds ZoneBounds; // 0x78
		::System::Single BasicScale; // 0x90
		::System::Single AdditiveScale; // 0x94
		::System::Int32 ID; // 0x98
		::System::Int32 Depth; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupSectionInfo(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::RPG::Client::Map* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_SETUPSECTIONINFO_OFFSET))(this, a1, a2, a3);
		}

		::JGDJANDMKOB GetSectionBounds(::System::Int32 a1)
		{
			return ((::JGDJANDMKOB(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTIONBOUNDS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPositionInCanvas(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETPOSITIONINCANVAS_OFFSET))(this, a1);
		}

		::System::Single GetScaleInCanvas(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSCALEINCANVAS_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelMinimapSection* GetSection(::System::Int32 a1)
		{
			return ((::RPG::GameCore::LevelMinimapSection*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTION_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::MVector2>* GetSectionVertices(::System::Int32 a1)
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTIONVERTICES_OFFSET))(this, a1);
		}

		::System::UInt32 GetSectionIDByIndex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTIONIDBYINDEX_OFFSET))(this, a1);
		}

		::System::Boolean EnableSectionClip(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ENABLESECTIONCLIP_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavmapConfig* get_NavMapConfig()
		{
			return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_NAVMAPCONFIG_OFFSET))(this);
		}

		::System::String* GetBackgroundPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETBACKGROUNDPATH_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapArea* GetCurPlayerLevelNavmapArea()
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETCURPLAYERLEVELNAVMAPAREA_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapArea* GetLevelNavmapAreaBySectionID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETLEVELNAVMAPAREABYSECTIONID_OFFSET))(this, a1);
		}

		::System::Int32 GetSectionNum(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETSECTIONNUM_OFFSET))(this, a1);
		}

		::System::Boolean IsInSection(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ISINSECTION_OFFSET))(this, a1, a2);
		}

		::System::Void GetLocateSectionIdxs(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::JGDJANDMKOB a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::Int32>*, ::JGDJANDMKOB))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETLOCATESECTIONIDXS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnlightenSection(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ENLIGHTENSECTION_OFFSET))(this, a1);
		}

		::System::Boolean IsSectionDynamic(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ISSECTIONDYNAMIC_OFFSET))(this, a1);
		}

		::AENGHANIAFE* GetDynamicSectionLink(::System::Int32 a1)
		{
			return ((::AENGHANIAFE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETDYNAMICSECTIONLINK_OFFSET))(this, a1);
		}

		::System::Void TickDynamicSections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_TICKDYNAMICSECTIONS_OFFSET))(this);
		}

		::System::Void GetVertices(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::MVector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GETVERTICES_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 ConvertToImagePosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_CONVERTTOIMAGEPOSITION_OFFSET))(this, a1);
		}

		::System::Void AddIconToSection(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_ADDICONTOSECTION_OFFSET))(this, a1, a2);
		}

		::System::Boolean IfSectionHasIcon(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_IFSECTIONHASICON_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveIconInSection(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_REMOVEICONINSECTION_OFFSET))(this, a1);
		}

		::System::Boolean _IsInPolygonSection(::System::Int32 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__ISINPOLYGONSECTION_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean _IsInPolygon(::RPG::MVector2 a1, ::Il2CppArray<::RPG::MVector2>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__ISINPOLYGON_OFFSET))(a1, a2, a3);
		}

		static ::System::Single _IsLeft(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__ISLEFT_OFFSET))(a1, a2, a3);
		}

		static ::JGDJANDMKOB _CalcBounds(::Il2CppArray<::RPG::MVector2>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::JGDJANDMKOB(*)(::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__CALCBOUNDS_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsSectionRect(::RPG::GameCore::LevelMinimapSection* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__ISSECTIONRECT_OFFSET))(a1);
		}

		::RPG::GameCore::LevelNavmapArea* _GetLevelNavMapArea(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__GETLEVELNAVMAPAREA_OFFSET))(this, a1);
		}

		::System::Void _SortVisibleSectionIdxs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__SORTVISIBLESECTIONIDXS_OFFSET))(this);
		}

		::System::Int32 _CompareSectionIdxs(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE__COMPARESECTIONIDXS_OFFSET))(this, a1, a2);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_SCALE_OFFSET))(this);
		}

		::System::Single get_MapRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_MAPROTATION_OFFSET))(this);
		}

		::System::Int32 get_SectionNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_SECTIONNUM_OFFSET))(this);
		}

		::System::Boolean get_HasSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPZONE_GET_HASSECTION_OFFSET))(this);
		}

	};
}
