#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAILGJFIPKP.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OEFPAPEMOHA_DENCCGFBKMB_OFFSET UNITYSDK_OFFSET(0x1B77B1D0)
#define OEFPAPEMOHA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1B77AF20)
#define OEFPAPEMOHA_FLBEIFPCEHL_OFFSET UNITYSDK_OFFSET(0x1B77B1E0)
#define OEFPAPEMOHA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1B77B3D0)
#define OEFPAPEMOHA_KFIGHPKIJNI_OFFSET UNITYSDK_OFFSET(0x1B77B1C0)
#define OEFPAPEMOHA_LAGMLLKLIBE_OFFSET UNITYSDK_OFFSET(0x1B77B190)
#define OEFPAPEMOHA_MJJGKJCCNHH_OFFSET UNITYSDK_OFFSET(0x1B77B1A0)
#define OEFPAPEMOHA_MOEOHPLDJDB_OFFSET UNITYSDK_OFFSET(0x1B77B1B0)
#define OEFPAPEMOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77B1F0)

inline static constexpr unsigned int OEFPAPEMOHA_TypeDefinitionIndex = 91151;

class OEFPAPEMOHA : public ::HAILGJFIPKP
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* EDPAEGPHODJ; // 0x28
	::KCMIFNGABDC_1<::System::Single>* BCCDLOMEJKM; // 0x30
	::KCMIFNGABDC_1<::System::Single>* DEGMIJJADNP; // 0x38
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OHLMDACCBOC; // 0x40
	::KCMIFNGABDC_1<::System::String*>* FBJACFCCMBH; // 0x48
	::KCMIFNGABDC_1<::System::Single>* KKJKPJEGKJC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA_FEDNEKFMGNF_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::UnityEngine::Vector3>* LAGMLLKLIBE()
	{
		return ((::KCMIFNGABDC_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA_LAGMLLKLIBE_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::UnityEngine::Vector3>* MJJGKJCCNHH()
	{
		return ((::KCMIFNGABDC_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA_MJJGKJCCNHH_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::Single>* MOEOHPLDJDB()
	{
		return ((::KCMIFNGABDC_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA_MOEOHPLDJDB_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::String*>* KFIGHPKIJNI()
	{
		return ((::KCMIFNGABDC_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA_KFIGHPKIJNI_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::Single>* DENCCGFBKMB()
	{
		return ((::KCMIFNGABDC_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA_DENCCGFBKMB_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::Single>* FLBEIFPCEHL()
	{
		return ((::KCMIFNGABDC_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA_FLBEIFPCEHL_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFPAPEMOHA_GDEOPIBNOIN_OFFSET))(this);
	}
};
