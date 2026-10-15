#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
namespace RPG::GameCore { class RecordOperation; }
namespace System { class Object; }
namespace System { class String; }

#define INGNCPPMOFG_EFCCJOCAFEI_OFFSET UNITYSDK_OFFSET(0x2E82E70)
#define INGNCPPMOFG_ENABHOADDBM_OFFSET UNITYSDK_OFFSET(0x164EEB20)
#define INGNCPPMOFG_GBFLGCLCOFG_OFFSET UNITYSDK_OFFSET(0x2E82EC0)
#define INGNCPPMOFG_GET_EXTRAPARAMOBJ_OFFSET UNITYSDK_OFFSET(0xAD00)
#define INGNCPPMOFG_GNBDDBPJFEI_OFFSET UNITYSDK_OFFSET(0x2E82DA0)
#define INGNCPPMOFG_HKHLKJKGHPH_OFFSET UNITYSDK_OFFSET(0x2E82E20)
#define INGNCPPMOFG_NIIEBMAPPCA_OFFSET UNITYSDK_OFFSET(0x2070)
#define INGNCPPMOFG_SET_EXTRAPARAMOBJ_OFFSET UNITYSDK_OFFSET(0xAD10)
#define INGNCPPMOFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E82ED0)

	struct alignas(8) INGNCPPMOFG
	{
		::System::Single MFCHJFPOCIA; // 0x10
		::System::UInt32 FGIGJGGFIOP; // 0x14
		::RPG::GameCore::TurnState MEPFOEEGBEA; // 0x18
		::System::UInt32 FIFCCHKEHBB; // 0x1C
		::System::UInt32 OCOGFJKLICJ; // 0x20
		::System::UInt32 IEBGNBBLFMD; // 0x24
		::RPG::GameCore::OperationType IAIGJBJCFJO; // 0x28
		::System::Int32 KBAPBCNJHDB; // 0x2C
		::System::Object* _ExtraParamObj_k__BackingField; // 0x30
		::System::String* PLPLGNDLIPM; // 0x38
		::System::String* NIIEBMAPPCA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNCPPMOFG_NIIEBMAPPCA_OFFSET))(this);
		}

		::System::Void GNBDDBPJFEI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INGNCPPMOFG_GNBDDBPJFEI_OFFSET))(this, a1);
		}

		::System::Object* get_ExtraParamObj()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNCPPMOFG_GET_EXTRAPARAMOBJ_OFFSET))(this);
		}

		::System::Void set_ExtraParamObj(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INGNCPPMOFG_SET_EXTRAPARAMOBJ_OFFSET))(this, a1);
		}

		::System::Boolean HKHLKJKGHPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNCPPMOFG_HKHLKJKGHPH_OFFSET))(this);
		}

		::System::Boolean EFCCJOCAFEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNCPPMOFG_EFCCJOCAFEI_OFFSET))(this);
		}

		::System::Boolean GBFLGCLCOFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNCPPMOFG_GBFLGCLCOFG_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGNCPPMOFG_TOSTRING_OFFSET))(this);
		}

		/*
		static ::INGNCPPMOFG ENABHOADDBM(::RPG::GameCore::RecordOperation* a1)
		{
			return ((::INGNCPPMOFG(*)(::RPG::GameCore::RecordOperation*))((::PBYTE)hIl2Cpp + INGNCPPMOFG_ENABHOADDBM_OFFSET))(a1);
		}
		*/

	};
