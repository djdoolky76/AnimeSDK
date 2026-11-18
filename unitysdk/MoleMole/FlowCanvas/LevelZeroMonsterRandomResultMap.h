#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HPPKJEBHFEP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_AOKCGANPLJB_OFFSET UNITYSDK_OFFSET(0x124471C0)
#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_BKOLHKHILLK_OFFSET UNITYSDK_OFFSET(0x124472D0)
#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_GET_LIMITTHEME_OFFSET UNITYSDK_OFFSET(0x124470F0)
#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_SET_LIMITTHEME_OFFSET UNITYSDK_OFFSET(0x12447100)
#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12447110)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LevelZeroMonsterRandomResultMap_TypeDefinitionIndex = 51859;

	class LevelZeroMonsterRandomResultMap : public ::System::Object
	{
	public:
		// static const ::System::Int32 CommonTheme = 0x0; // 0x0
		// static const ::System::String* LevelZeroMonsterRandomResultMapKey; // 0x0
		::System::Int32 _limitTheme_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::HPPKJEBHFEP*>* monsterRandomResults; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* ExitedCamps; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_limitTheme()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_GET_LIMITTHEME_OFFSET))(this);
		}

		::System::Void set_limitTheme(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_SET_LIMITTHEME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean AOKCGANPLJB(::System::Int32 AELLPLBJELA, ::HPPKJEBHFEP*& IGAAKDOIPNN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPPKJEBHFEP*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_AOKCGANPLJB_OFFSET))(this, AELLPLBJELA, IGAAKDOIPNN);
		}

		::System::Void BKOLHKHILLK(::HPPKJEBHFEP* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::HPPKJEBHFEP*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_BKOLHKHILLK_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
