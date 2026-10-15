#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAKGBLEMBLN_CGJJGIEBLNC.h"
#include "unitysdk/EAKGBLEMBLN_POBKNGEDFAF.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }

#define EAKGBLEMBLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1267CE90)
#define EAKGBLEMBLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1267CE80)
#define EAKGBLEMBLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1267BF90)
#define EAKGBLEMBLN_EJONFCLIPKJ_OFFSET UNITYSDK_OFFSET(0x1267CB50)
#define EAKGBLEMBLN_GBJGAIBJLBB_OFFSET UNITYSDK_OFFSET(0x1267BCB0)
#define EAKGBLEMBLN_HFJMKIGBNLP_OFFSET UNITYSDK_OFFSET(0x1267C540)
#define EAKGBLEMBLN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1267C5F0)
#define EAKGBLEMBLN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x1267BC40)
#define EAKGBLEMBLN_LMGHIKCBGEN_OFFSET UNITYSDK_OFFSET(0x1267CD20)
#define EAKGBLEMBLN_OALPGDIOIFD_OFFSET UNITYSDK_OFFSET(0x1267CE70)
#define EAKGBLEMBLN_PBGGFOOGNNN_OFFSET UNITYSDK_OFFSET(0x1267CD10)
#define EAKGBLEMBLN_PGGCHKDEEAL_OFFSET UNITYSDK_OFFSET(0x1267C710)
#define EAKGBLEMBLN_TICK_OFFSET UNITYSDK_OFFSET(0x1267C030)

inline static constexpr unsigned int EAKGBLEMBLN_TypeDefinitionIndex = 56909;

	class EAKGBLEMBLN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* DPDJLGOIALF; // 0x18
		::CFFPEAALCPH* PKEACAPJDGD; // 0x20
		::System::Boolean FAGJGLBFEOL; // 0x28
		::System::Byte _padding0[0x3];
		::EAKGBLEMBLN_CGJJGIEBLNC NFALAKBANLI; // 0x2C
		::EAKGBLEMBLN_POBKNGEDFAF CAANFNOMIDF; // 0x30
		::EAKGBLEMBLN_CGJJGIEBLNC JFJJFENJNHI; // 0x38
		static ::System::Int32* StaticGet_OHILMHHJGJJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EAKGBLEMBLN")->GetStaticField(0x15A90);
		}

		// static const ::System::String* POPHIILFKAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAKGBLEMBLN_CCTOR_OFFSET))();
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_DISPOSE_OFFSET))(this);
		}

		::System::Void GBJGAIBJLBB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_GBJGAIBJLBB_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_LATEUPDATE_OFFSET))(this, a1);
		}

		::CEBMNLPNKFL* HFJMKIGBNLP(::CFFPEAALCPH* a1)
		{
			return ((::CEBMNLPNKFL*(*)(::PVOID, ::CFFPEAALCPH*))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_HFJMKIGBNLP_OFFSET))(this, a1);
		}

		::System::Void PGGCHKDEEAL(::CFFPEAALCPH* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::CFFPEAALCPH*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_PGGCHKDEEAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EJONFCLIPKJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_EJONFCLIPKJ_OFFSET))(this, a1);
		}

		::System::Boolean PBGGFOOGNNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_PBGGFOOGNNN_OFFSET))(this);
		}

		::System::Void LMGHIKCBGEN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_LMGHIKCBGEN_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* OALPGDIOIFD()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_OALPGDIOIFD_OFFSET))(this);
		}

	};
