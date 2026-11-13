#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIMDJOBJCNE.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCBMNCANHAP;
class NOBBAHKMNDK;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KKDMAFCKLCB_AAJABKJOJOJ_OFFSET UNITYSDK_OFFSET(0x1733F480)
#define KKDMAFCKLCB_ACIFAANPLKF_OFFSET UNITYSDK_OFFSET(0x1733F610)
#define KKDMAFCKLCB_BIJGGHAKPJN_OFFSET UNITYSDK_OFFSET(0x1733E5A0)
#define KKDMAFCKLCB_BIJKJMIMCBM_OFFSET UNITYSDK_OFFSET(0x1733E7C0)
#define KKDMAFCKLCB_BIJKLFKDECJ_OFFSET UNITYSDK_OFFSET(0x1733F1A0)
#define KKDMAFCKLCB_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x1733E2E0)
#define KKDMAFCKLCB_CMNCIKIHACB_OFFSET UNITYSDK_OFFSET(0x1733E620)
#define KKDMAFCKLCB_CTOR_OFFSET UNITYSDK_OFFSET(0x17341010)
#define KKDMAFCKLCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1733DD00)
#define KKDMAFCKLCB_DLFDHOJLEBG_OFFSET UNITYSDK_OFFSET(0x1733F260)
#define KKDMAFCKLCB_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0x1733F300)
#define KKDMAFCKLCB_GET_FIRETIME_OFFSET UNITYSDK_OFFSET(0x17340FF0)
#define KKDMAFCKLCB_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1733E080)
#define KKDMAFCKLCB_HJPGKMHILFK_OFFSET UNITYSDK_OFFSET(0x1733F670)
#define KKDMAFCKLCB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1733EEE0)
#define KKDMAFCKLCB_JMMNFHLCBDN_OFFSET UNITYSDK_OFFSET(0x173406A0)
#define KKDMAFCKLCB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1733DD90)
#define KKDMAFCKLCB_LKKOCAHDDHL_OFFSET UNITYSDK_OFFSET(0x17340FE0)
#define KKDMAFCKLCB_MAAIMMBDJBE_OFFSET UNITYSDK_OFFSET(0x17340040)
#define KKDMAFCKLCB_MCLGPPLNFEC_OFFSET UNITYSDK_OFFSET(0x1733EC20)
#define KKDMAFCKLCB_MILDAIHIGAI_OFFSET UNITYSDK_OFFSET(0x1733F600)
#define KKDMAFCKLCB_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x1733E670)
#define KKDMAFCKLCB_NGIDAKDKANM_OFFSET UNITYSDK_OFFSET(0x1733F5A0)
#define KKDMAFCKLCB_PFAHCGGPAJH_OFFSET UNITYSDK_OFFSET(0x1733F1B0)
#define KKDMAFCKLCB_PPJPCGIMICH_OFFSET UNITYSDK_OFFSET(0x1733F2B0)
#define KKDMAFCKLCB_SET_FIRETIME_OFFSET UNITYSDK_OFFSET(0x17341000)

inline static constexpr unsigned int KKDMAFCKLCB_TypeDefinitionIndex = 61588;

	class KKDMAFCKLCB : public ::FIMDJOBJCNE
	{
	public:
		::NOBBAHKMNDK* COKDGBEABHP; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit>* CIECEBIKPMP; // 0x30
		::System::Int32 IJILNJHCMOK; // 0x38
		::System::Int32 AAHGILAGKGM; // 0x3C
		::System::Single HHFHJEBIOLH; // 0x40
		::System::Single KPEGMDAJKKB; // 0x44
		::System::Single _FireTime_k__BackingField; // 0x48
		::System::Boolean FJCBIOEJBLA; // 0x4C
		::System::Boolean HPEICGKCODK; // 0x4D
		static ::System::Action_1<::System::Boolean>** StaticGet_ILBKCMPABML()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("", "KKDMAFCKLCB")->GetStaticField(0x5CFC0);
		}

		// static const ::System::Object EFKHJFJLLOG; // 0x0
		// static const ::System::Object CFCAODFONPB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void BIJKJMIMCBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_BIJKJMIMCBM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DLFDHOJLEBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_DLFDHOJLEBG_OFFSET))(this, a1);
		}

		::System::Void PPJPCGIMICH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_PPJPCGIMICH_OFFSET))(this, a1);
		}

		::System::Void EPHFABNKFGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_EPHFABNKFGJ_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void AAJABKJOJOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_AAJABKJOJOJ_OFFSET))(this);
		}

		::System::Boolean NGIDAKDKANM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_NGIDAKDKANM_OFFSET))(this);
		}

		::JCBMNCANHAP* MILDAIHIGAI()
		{
			return ((::JCBMNCANHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_MILDAIHIGAI_OFFSET))(this);
		}

		::System::Void PFAHCGGPAJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_PFAHCGGPAJH_OFFSET))(this);
		}

		::System::Void CMNCIKIHACB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_CMNCIKIHACB_OFFSET))(this, a1);
		}

		::System::Void ACIFAANPLKF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_ACIFAANPLKF_OFFSET))(this, a1);
		}

		::System::Void HJPGKMHILFK(::System::Single a1, ::RPG::Client::MonoControllableHand* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::MonoControllableHand*))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_HJPGKMHILFK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 MCLGPPLNFEC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_MCLGPPLNFEC_OFFSET))(this);
		}

		::UnityEngine::Vector3 JMMNFHLCBDN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_JMMNFHLCBDN_OFFSET))(this);
		}

		::System::Boolean MAAIMMBDJBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_MAAIMMBDJBE_OFFSET))(this);
		}

		::System::Boolean BIJKLFKDECJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_BIJKLFKDECJ_OFFSET))(this);
		}

		::System::Boolean LKKOCAHDDHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_LKKOCAHDDHL_OFFSET))(this);
		}

		::System::Void BIJGGHAKPJN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_BIJGGHAKPJN_OFFSET))(this, a1);
		}

		::System::Single get_FireTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_GET_FIRETIME_OFFSET))(this);
		}

		::System::Void set_FireTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKDMAFCKLCB_SET_FIRETIME_OFFSET))(this, a1);
		}

	};
