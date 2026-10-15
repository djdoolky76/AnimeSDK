#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
class AOGHMIFDBDC;
class KEPPEPNNLOH;

#define KEPPEPNNLOH_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB387DB0)
#define KEPPEPNNLOH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB387690)
#define KEPPEPNNLOH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB388080)
#define KEPPEPNNLOH_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB387740)
#define KEPPEPNNLOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB387720)
#define KEPPEPNNLOH_ENHLBFGAELM_OFFSET UNITYSDK_OFFSET(0xB387E70)
#define KEPPEPNNLOH_GET_ENDANGLE_OFFSET UNITYSDK_OFFSET(0xB387670)
#define KEPPEPNNLOH_GET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0xB387650)
#define KEPPEPNNLOH_HGOMGKIKDLE_OFFSET UNITYSDK_OFFSET(0xB387FE0)
#define KEPPEPNNLOH_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xB387640)
#define KEPPEPNNLOH_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB3879E0)
#define KEPPEPNNLOH_MAAHIJNFOFM_OFFSET UNITYSDK_OFFSET(0xB387790)
#define KEPPEPNNLOH_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0xB387C70)
#define KEPPEPNNLOH_SET_ENDANGLE_OFFSET UNITYSDK_OFFSET(0xB387680)
#define KEPPEPNNLOH_SET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0xB387660)

inline static constexpr unsigned int KEPPEPNNLOH_TypeDefinitionIndex = 78122;

	class KEPPEPNNLOH : public ::DEHLMHKDEKC
	{
	public:
		::System::Single OIEADOBJGOI; // 0x40
		::System::Single _StartAngle_k__BackingField; // 0x44
		::System::Single _EndAngle_k__BackingField; // 0x48
		::System::Boolean KGPEFPPCKFI; // 0x4C
		static ::System::Int32* StaticGet_GMHHHPJALLI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KEPPEPNNLOH")->GetStaticField(0x10620);
		}

		// static const ::System::Object ALJJIJELLGL; // 0x0
		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEPPEPNNLOH_CCTOR_OFFSET))();
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Single get_StartAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_GET_STARTANGLE_OFFSET))(this);
		}

		::System::Void set_StartAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_SET_STARTANGLE_OFFSET))(this, a1);
		}

		::System::Single get_EndAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_GET_ENDANGLE_OFFSET))(this);
		}

		::System::Void set_EndAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_SET_ENDANGLE_OFFSET))(this, a1);
		}

		static ::KEPPEPNNLOH* BPLPBPMEODA(::AOGHMIFDBDC* a1)
		{
			return ((::KEPPEPNNLOH*(*)(::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void ENHLBFGAELM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_ENHLBFGAELM_OFFSET))(this, a1, a2);
		}

		::System::Boolean OMJCIPOOJNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_OMJCIPOOJNF_OFFSET))(this);
		}

		::System::Single HGOMGKIKDLE(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_HGOMGKIKDLE_OFFSET))(this, a1);
		}

		::System::Void MAAHIJNFOFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPPEPNNLOH_MAAHIJNFOFM_OFFSET))(this);
		}

	};
