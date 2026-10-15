#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAHPCEMFND;
class PLEODCMINJF;
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APAHPCEMFND_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x158C8B90)
#define APAHPCEMFND_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158C8C20)
#define APAHPCEMFND_CTOR_OFFSET UNITYSDK_OFFSET(0x158C8DB0)
#define APAHPCEMFND_DEPMCJLEAPE_OFFSET UNITYSDK_OFFSET(0x158C9250)
#define APAHPCEMFND_FPMOEHJELID_OFFSET UNITYSDK_OFFSET(0x158C8B40)
#define APAHPCEMFND_GDJGAAHFKGK_OFFSET UNITYSDK_OFFSET(0x158C8B00)
#define APAHPCEMFND_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0x158C8AF0)
#define APAHPCEMFND_GET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0x158C8A90)
#define APAHPCEMFND_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0x158C8A70)
#define APAHPCEMFND_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x158C8A80)
#define APAHPCEMFND_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0x158C8AB0)
#define APAHPCEMFND_GET_UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0x158C8AD0)
#define APAHPCEMFND_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158C91A0)
#define APAHPCEMFND_MPCAKCIPHPH_OFFSET UNITYSDK_OFFSET(0x158C8F80)
#define APAHPCEMFND_MPCMNCGAGLJ_OFFSET UNITYSDK_OFFSET(0x158C8E10)
#define APAHPCEMFND_NFMEMFCKAFC_OFFSET UNITYSDK_OFFSET(0x158C9350)
#define APAHPCEMFND_NNFMMCJIPFN_OFFSET UNITYSDK_OFFSET(0x158C8E60)
#define APAHPCEMFND_PDDAGDIDHIK_OFFSET UNITYSDK_OFFSET(0x158C9420)
#define APAHPCEMFND_SET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0x158C8AA0)
#define APAHPCEMFND_SET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0x158C8AC0)
#define APAHPCEMFND_SET_UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0x158C8AE0)

	class APAHPCEMFND : public ::System::Object
	{
	public:
		::PLEODCMINJF* _CheatSheet_k__BackingField; // 0x10
		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* _Cartography_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::Face*>* EBJICJCMKCJ; // 0x20
		::System::UInt32 _ContainerInstanceID_k__BackingField; // 0x28
		::System::Int16 _UnitPixelCount_k__BackingField; // 0x2C
		::System::Byte _padding0[0x2];
		::System::Single _UnitLength_k__BackingField; // 0x30
		::System::UInt32 _ContainerGroupID_k__BackingField; // 0x34
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::PLEODCMINJF* a3, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::PLEODCMINJF*, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + APAHPCEMFND_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_ContainerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_GET_CONTAINERGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_GET_CONTAINERINSTANCEID_OFFSET))(this);
		}

		::PLEODCMINJF* get_CheatSheet()
		{
			return ((::PLEODCMINJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_GET_CHEATSHEET_OFFSET))(this);
		}

		::System::Void set_CheatSheet(::PLEODCMINJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLEODCMINJF*))((::PBYTE)hIl2Cpp + APAHPCEMFND_SET_CHEATSHEET_OFFSET))(this, a1);
		}

		::System::Single get_UnitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_GET_UNITLENGTH_OFFSET))(this);
		}

		::System::Void set_UnitLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APAHPCEMFND_SET_UNITLENGTH_OFFSET))(this, a1);
		}

		::System::Int16 get_UnitPixelCount()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_GET_UNITPIXELCOUNT_OFFSET))(this);
		}

		::System::Void set_UnitPixelCount(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + APAHPCEMFND_SET_UNITPIXELCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* get_Cartography()
		{
			return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_GET_CARTOGRAPHY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::FiveDim::Face*>* GDJGAAHFKGK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::FiveDim::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_GDJGAAHFKGK_OFFSET))(this);
		}

		::RPG::Client::NavMap::MapData* FPMOEHJELID()
		{
			return ((::RPG::Client::NavMap::MapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_FPMOEHJELID_OFFSET))(this);
		}

		::System::Int32 AFDDABNNLJP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_AFDDABNNLJP_OFFSET))(this);
		}

		static ::APAHPCEMFND* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a3)
		{
			return ((::APAHPCEMFND*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + APAHPCEMFND_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void MPCMNCGAGLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_MPCMNCGAGLJ_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NNFMMCJIPFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_NNFMMCJIPFN_OFFSET))(this);
		}

		::System::Void MPCAKCIPHPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND_MPCAKCIPHPH_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::Face* DEPMCJLEAPE(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APAHPCEMFND_DEPMCJLEAPE_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::FiveDim::Face* NFMEMFCKAFC(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APAHPCEMFND_NFMEMFCKAFC_OFFSET))(this, a1);
		}

		::System::Boolean PDDAGDIDHIK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APAHPCEMFND_PDDAGDIDHIK_OFFSET))(this, a1);
		}

	};
