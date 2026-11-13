#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/RegionType.h"
#include "unitysdk/RPGTools/LDWhiteBox/ShapeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Mesh; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ADBNBHOCLNO_OFFSET UNITYSDK_OFFSET(0x1BD48B30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_AIKKPCDHAID_OFFSET UNITYSDK_OFFSET(0x1BD48680)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_AKKEGEBPLNK_OFFSET UNITYSDK_OFFSET(0x1BD47550)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_CLAMPWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1BD43BC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_CPJANCJKPNG_OFFSET UNITYSDK_OFFSET(0x1BD48850)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD49140)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1BD479F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BD47390)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DIRECTCHILDREGIONS_OFFSET UNITYSDK_OFFSET(0x1BD47D50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_HASCHILDREGIONS_OFFSET UNITYSDK_OFFSET(0x1BD47BD0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_POLYGON_OFFSET UNITYSDK_OFFSET(0x1BD47A10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x1BD47350)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0x1BD47370)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1BD473B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BD47820)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BD47BB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ILILHJGADEI_OFFSET UNITYSDK_OFFSET(0x1BD48730)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_JHBMJFNOKJN_OFFSET UNITYSDK_OFFSET(0x1BD47E00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_MPONLMENEGO_OFFSET UNITYSDK_OFFSET(0x1BD489E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_NCJKIABLGMD_OFFSET UNITYSDK_OFFSET(0x1BD48CD0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BD490A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BD48E80)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BD48D30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BD48F00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1BD476A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1BD47A00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BD473A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_POLYGON_OFFSET UNITYSDK_OFFSET(0x1BD47A20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x1BD47360)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0x1BD47380)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1BD473C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BD47840)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BD47BC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_TRYGETSURFACENORMAL_OFFSET UNITYSDK_OFFSET(0x1BD480C0)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxRegion_TypeDefinitionIndex = 50018;

	class WhiteBoxRegion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _regionId; // 0x18
		::System::String* _regionName; // 0x20
		::System::String* _description; // 0x28
		::RPGTools::LDWhiteBox::ShapeType _shape; // 0x30
		::UnityEngine::Vector3 _size; // 0x34
		::System::Int32 _depth; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector2>* _polygon; // 0x48
		::RPGTools::LDWhiteBox::RegionType _type; // 0x50
		::System::Byte _padding1[0x4];
		::UnityEngine::Mesh* JJEOBACJEEO; // 0x58
		::UnityEngine::Mesh* HJBCPLNDNFK; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_CTOR_OFFSET))(this);
		}

		::System::String* get_RegionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONID_OFFSET))(this);
		}

		::System::Void set_RegionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONID_OFFSET))(this, a1);
		}

		::System::String* get_RegionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONNAME_OFFSET))(this);
		}

		::System::Void set_RegionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONNAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::RPGTools::LDWhiteBox::ShapeType get_Shape()
		{
			return ((::RPGTools::LDWhiteBox::ShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_Shape(::RPGTools::LDWhiteBox::ShapeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::ShapeType))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DEPTH_OFFSET))(this);
		}

		::System::Void set_Depth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DEPTH_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_Polygon()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_POLYGON_OFFSET))(this);
		}

		::System::Void set_Polygon(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_POLYGON_OFFSET))(this, a1);
		}

		::RPGTools::LDWhiteBox::RegionType get_Type()
		{
			return ((::RPGTools::LDWhiteBox::RegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPGTools::LDWhiteBox::RegionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::RegionType))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasChildRegions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_HASCHILDREGIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>* get_DirectChildRegions()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DIRECTCHILDREGIONS_OFFSET))(this);
		}

		::UnityEngine::Vector3 ClampWorldPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_CLAMPWORLDPOINT_OFFSET))(this, a1);
		}

		::System::Boolean TryGetSurfaceNormal(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_TRYGETSURFACENORMAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 JHBMJFNOKJN(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_JHBMJFNOKJN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 AIKKPCDHAID(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_AIKKPCDHAID_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 ILILHJGADEI(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ILILHJGADEI_OFFSET))(this, a1, a2);
		}

		::System::Void AKKEGEBPLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_AKKEGEBPLNK_OFFSET))(this);
		}

		::System::Void RebuildMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_REBUILDMESH_OFFSET))(this);
		}

		::System::Void MPONLMENEGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_MPONLMENEGO_OFFSET))(this);
		}

		::System::Void CPJANCJKPNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_CPJANCJKPNG_OFFSET))(this);
		}

		::System::Void ADBNBHOCLNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ADBNBHOCLNO_OFFSET))(this);
		}

		::System::Void NCJKIABLGMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_NCJKIABLGMD_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDESTROY_OFFSET))(this);
		}

	};
}
