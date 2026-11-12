#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KANKEPCJION;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HEBPDEBLECH_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x16B87CD0)
#define HEBPDEBLECH_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x16B87C50)
#define HEBPDEBLECH_CTOR_OFFSET UNITYSDK_OFFSET(0x16B88000)
#define HEBPDEBLECH_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x16B87D60)
#define HEBPDEBLECH_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x16B87F60)
#define HEBPDEBLECH_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x16B87F10)
#define HEBPDEBLECH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16B87990)
#define HEBPDEBLECH_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x16B87A30)
#define HEBPDEBLECH_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x16B87E30)
#define HEBPDEBLECH_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x16B87EA0)
#define HEBPDEBLECH_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x16B87FB0)
#define HEBPDEBLECH_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x16B87DD0)
#define HEBPDEBLECH_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x16B87B40)
#define HEBPDEBLECH_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x16B87A90)
#define HEBPDEBLECH__ONBIND_OFFSET UNITYSDK_OFFSET(0x16B877A0)
#define HEBPDEBLECH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16B87940)

inline static constexpr unsigned int HEBPDEBLECH_TypeDefinitionIndex = 73931;

	class HEBPDEBLECH : public ::FMPCODLIOLG
	{
	public:
		::KANKEPCJION* HPADAGJIHAO; // 0x60
		::UnityEngine::Transform* AIDIMEHEEMI; // 0x68
		::IGKFNIEJGLM PMECLILMEDH; // 0x70
		::UnityEngine::Transform* EPBGHBLAOCO; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HEBPDEBLECH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEBPDEBLECH_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + HEBPDEBLECH_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPDEBLECH_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEBPDEBLECH_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEBPDEBLECH_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HEBPDEBLECH_KKHOMFOPFJA_OFFSET))(this, a1);
		}

	};
