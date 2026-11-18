#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLGBJEBFPNE.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_AOPJCIEHMOJ_OFFSET UNITYSDK_OFFSET(0x1246F4D0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1246E170)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_DISABLEMAP3DZENKOVFOGAREAEFFECT_OFFSET UNITYSDK_OFFSET(0x1246E6C0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ENABLEMAP3DZENKOVFOGAREAEFFECT_1_OFFSET UNITYSDK_OFFSET(0x1246E7A0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ENABLEMAP3DZENKOVFOGAREAEFFECT_OFFSET UNITYSDK_OFFSET(0x1246E740)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_FADCLGCEBOB_OFFSET UNITYSDK_OFFSET(0x1246F2C0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1246DFC0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_KGHLBPBOINJ_OFFSET UNITYSDK_OFFSET(0x1246E380)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_MLBCPDEDAKD_OFFSET UNITYSDK_OFFSET(0x1246F230)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1246E590)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1246E320)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONKLLMBGPLI_OFFSET UNITYSDK_OFFSET(0x1246E9A0)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER_SETMAP3DZENKOVFOGCOLOR_OFFSET UNITYSDK_OFFSET(0x1246F030)
#define MOLEMOLE_MAP3DZENKOVFOGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1246F0E0)

namespace MoleMole
{
	inline static constexpr unsigned int Map3DZenkovFogManager_TypeDefinitionIndex = 42864;

	class Map3DZenkovFogManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Map3DZenkovFogManager** StaticGet_PMKINFHDLFD()
		{
			return (::MoleMole::Map3DZenkovFogManager**)Il2CppClass::FromTypeDefinitionIndex(Map3DZenkovFogManager_TypeDefinitionIndex)->GetStaticField(0x41BA0);
		}
		// static const ::System::String* IKCPKJKPPMF; // 0x0
		// static const ::System::String* JIBDMNDNEJD; // 0x0
		// static const ::System::String* HMMFEMGHMOH; // 0x0
		// static const ::System::String* JAOLKNJABKA; // 0x0
		// static const ::System::String* ONAJIDHNNLM; // 0x0
		// static const ::System::String* PINFBPHGNGG; // 0x0
		// static const ::System::String* GDAOGEPHAIC; // 0x0
		// static const ::System::String* ILIPCKDBDPK; // 0x0
		// static const ::System::String* GNHJKDKHANC; // 0x0
		// static const ::System::String* OFHJGNMMAOM; // 0x0
		// static const ::System::String* CKFKOHFOPKJ; // 0x0
		// static const ::System::String* HGEBNPHOKKH; // 0x0
		// static const ::System::String* OFBHAELJNBG; // 0x0
		// static const ::System::String* FFMJHPJJMFO; // 0x0
		// static const ::System::Int32 MAJOJDILPFO = 0x40; // 0x0
		// static const ::System::Int32 CJGJJGFLLEP = 0x80; // 0x0
		// static const ::System::Int32 FGCDPHNIKEL = 0xC; // 0x0
		::UnityEngine::Color _map3DZenkovFogColor; // 0x18
		::UnityEngine::Color _map3DZenkovFogEndColor; // 0x28
		::UnityEngine::Color _map3DZenkovPendingFogColor; // 0x38
		::UnityEngine::Color _map3DZenkovPendingFogEndColor; // 0x48
		::System::Single _map3DZenkovFogGradientDirection; // 0x58
		::System::Single _map3DZenkovPendingFogBreathSpeed; // 0x5C
		::UnityEngine::Color _map3DZenkovFogOutlineColor; // 0x60
		::System::Single _map3DZenkovFogOutlineWidth; // 0x70
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector4>* NNEFEBDJECL; // 0x78
		::Il2CppArray<::System::Single>* CICPGOJBANA; // 0x80
		::Il2CppArray<::System::Single>* GKBHDOMPPNI; // 0x88
		::Il2CppArray<::System::Single>* MAHNMEPLKLJ; // 0x90
		::Il2CppArray<::UnityEngine::Vector4>* LKKLGCPLNIP; // 0x98
		::Il2CppArray<::UnityEngine::Vector2>* OMDOCELOFNL; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Map3DZenkovFogManager* get_Instance()
		{
			return ((::MoleMole::Map3DZenkovFogManager*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean EnableMap3DZenKovFogAreaEffect(::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* JLKFFJEIMAP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ENABLEMAP3DZENKOVFOGAREAEFFECT_OFFSET))(this, JLKFFJEIMAP);
		}

		::System::Boolean EnableMap3DZenKovFogAreaEffect_1(::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* JLKFFJEIMAP, ::System::Collections::Generic::List_1<::FLGBJEBFPNE>* NEIIIOGEKEC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::FLGBJEBFPNE>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ENABLEMAP3DZENKOVFOGAREAEFFECT_1_OFFSET))(this, JLKFFJEIMAP, NEIIIOGEKEC);
		}

		::System::Void DisableMap3DZenKovFogAreaEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_DISABLEMAP3DZENKOVFOGAREAEFFECT_OFFSET))(this);
		}

		::System::Void SetMap3DZenkovFogColor(::UnityEngine::Color JBBFCGAMDHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_SETMAP3DZENKOVFOGCOLOR_OFFSET))(this, JBBFCGAMDHI);
		}

		::UnityEngine::Vector2 MLBCPDEDAKD()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_MLBCPDEDAKD_OFFSET))(this);
		}

		static ::System::Void FADCLGCEBOB(::Il2CppArray<::UnityEngine::Vector2>* CELGKCKLPJC, ::System::Int32 FKGNDKNHAEH, ::System::Int32 CLNNEACLCEH, ::UnityEngine::Vector2 LIFDHPJOPHB, ::UnityEngine::Vector2& MPLDDNMCECG, ::System::Single& NCCDJLDKFGA)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_FADCLGCEBOB_OFFSET))(CELGKCKLPJC, FKGNDKNHAEH, CLNNEACLCEH, LIFDHPJOPHB, MPLDDNMCECG, NCCDJLDKFGA);
		}

		static ::System::Single AOPJCIEHMOJ(::System::Collections::Generic::List_1<::FLGBJEBFPNE>* NEIIIOGEKEC, ::System::Int32 IBGBGDCFMLI)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::FLGBJEBFPNE>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_AOPJCIEHMOJ_OFFSET))(NEIIIOGEKEC, IBGBGDCFMLI);
		}

		::System::Void KGHLBPBOINJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_KGHLBPBOINJ_OFFSET))(this);
		}

		::System::Boolean ONKLLMBGPLI(::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* JLKFFJEIMAP, ::System::Collections::Generic::List_1<::FLGBJEBFPNE>* NEIIIOGEKEC, ::System::Int32& KBBPPPKGFIH)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::FLGBJEBFPNE>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MAP3DZENKOVFOGMANAGER_ONKLLMBGPLI_OFFSET))(this, JLKFFJEIMAP, NEIIIOGEKEC, KBBPPPKGFIH);
		}
	};
}
