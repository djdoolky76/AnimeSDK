#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIMDJOBJCNE.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCBMNCANHAP;
class NOBBAHKMNDK;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class Action; }
namespace System { class String; }

#define KKDMAFCKLCB_AAJABKJOJOJ_OFFSET UNITYSDK_OFFSET(0xB4B9550)
#define KKDMAFCKLCB_ACIFAANPLKF_OFFSET UNITYSDK_OFFSET(0xB4B96E0)
#define KKDMAFCKLCB_BIJGGHAKPJN_OFFSET UNITYSDK_OFFSET(0xB4B8660)
#define KKDMAFCKLCB_BIJKJMIMCBM_OFFSET UNITYSDK_OFFSET(0xB4B8880)
#define KKDMAFCKLCB_BIJKLFKDECJ_OFFSET UNITYSDK_OFFSET(0xB4B9270)
#define KKDMAFCKLCB_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB4B83A0)
#define KKDMAFCKLCB_CMNCIKIHACB_OFFSET UNITYSDK_OFFSET(0xB4B86E0)
#define KKDMAFCKLCB_CTOR_OFFSET UNITYSDK_OFFSET(0xB4BB0E0)
#define KKDMAFCKLCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4B7DC0)
#define KKDMAFCKLCB_DLFDHOJLEBG_OFFSET UNITYSDK_OFFSET(0xB4B9330)
#define KKDMAFCKLCB_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0xB4B93D0)
#define KKDMAFCKLCB_GET_FIRETIME_OFFSET UNITYSDK_OFFSET(0xB4BB0C0)
#define KKDMAFCKLCB_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB4B8140)
#define KKDMAFCKLCB_HJPGKMHILFK_OFFSET UNITYSDK_OFFSET(0xB4B9740)
#define KKDMAFCKLCB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB4B8FA0)
#define KKDMAFCKLCB_JMMNFHLCBDN_OFFSET UNITYSDK_OFFSET(0xB4BA780)
#define KKDMAFCKLCB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB4B7E50)
#define KKDMAFCKLCB_LKKOCAHDDHL_OFFSET UNITYSDK_OFFSET(0xB4BB0B0)
#define KKDMAFCKLCB_MAAIMMBDJBE_OFFSET UNITYSDK_OFFSET(0xB4BA110)
#define KKDMAFCKLCB_MCLGPPLNFEC_OFFSET UNITYSDK_OFFSET(0xB4B8CE0)
#define KKDMAFCKLCB_MILDAIHIGAI_OFFSET UNITYSDK_OFFSET(0xB4B96D0)
#define KKDMAFCKLCB_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0xB4B8730)
#define KKDMAFCKLCB_NGIDAKDKANM_OFFSET UNITYSDK_OFFSET(0xB4B9670)
#define KKDMAFCKLCB_PFAHCGGPAJH_OFFSET UNITYSDK_OFFSET(0xB4B9280)
#define KKDMAFCKLCB_PPJPCGIMICH_OFFSET UNITYSDK_OFFSET(0xB4B9380)
#define KKDMAFCKLCB_SET_FIRETIME_OFFSET UNITYSDK_OFFSET(0xB4BB0D0)

	class KKDMAFCKLCB : public ::FIMDJOBJCNE
	{
	public:
		::Il2CppArray<::UnityEngine::RaycastHit>* CIECEBIKPMP; // 0x28
		::NOBBAHKMNDK* COKDGBEABHP; // 0x30
		::System::Int32 IJILNJHCMOK; // 0x38
		::System::Int32 AAHGILAGKGM; // 0x3C
		::System::Single _FireTime_k__BackingField; // 0x40
		::System::Boolean HPEICGKCODK; // 0x44
		::System::Boolean FJCBIOEJBLA; // 0x45
		::System::Byte _padding0[0x2];
		::System::Single HHFHJEBIOLH; // 0x48
		::System::Single KPEGMDAJKKB; // 0x4C
		static ::System::Action** StaticGet_ILBKCMPABML()
		{
			return (::System::Action**)UnitySDK::FromName("", "KKDMAFCKLCB")->GetStaticField(0x59BF0);
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
