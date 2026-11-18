#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/FixedPolynomial.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"

#define OAIDDDKMKEJ_GPGHADNLEBH_ALMOJNIOGFA_OFFSET UNITYSDK_OFFSET(0x709D90)
#define OAIDDDKMKEJ_GPGHADNLEBH_BLLAHDJHBOO_OFFSET UNITYSDK_OFFSET(0x709D70)
#define OAIDDDKMKEJ_GPGHADNLEBH_DDLPJFFDMJL_OFFSET UNITYSDK_OFFSET(0x709C80)
#define OAIDDDKMKEJ_GPGHADNLEBH_EIGDKGAFHPG_OFFSET UNITYSDK_OFFSET(0x70A0A0)
#define OAIDDDKMKEJ_GPGHADNLEBH_EMLDIHEBNBO_OFFSET UNITYSDK_OFFSET(0x709C70)
#define OAIDDDKMKEJ_GPGHADNLEBH_GEAEMFJBJKI_OFFSET UNITYSDK_OFFSET(0x709ED0)
#define OAIDDDKMKEJ_GPGHADNLEBH_HHIOCKLMKGI_OFFSET UNITYSDK_OFFSET(0x13662AD0)
#define OAIDDDKMKEJ_GPGHADNLEBH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13662170)
#define OAIDDDKMKEJ_GPGHADNLEBH_LMAJCANAPLJ_OFFSET UNITYSDK_OFFSET(0x709B30)
#define OAIDDDKMKEJ_GPGHADNLEBH_NGMNENHAEHJ_OFFSET UNITYSDK_OFFSET(0x709D80)

inline static constexpr unsigned int OAIDDDKMKEJ_GPGHADNLEBH_TypeDefinitionIndex = 62789;

struct alignas(4) OAIDDDKMKEJ_GPGHADNLEBH
{
	::UnityEngine::Vector3 BAMHBBKCMPJ; // 0x10
	::UnityEngine::Vector3 HNAAKFNBEHC; // 0x1C
	::UnityEngine::Vector3 GMGHCMCJCHO; // 0x28
	::Foundation::Function::FixedPolynomial CNNKCEDOBJI; // 0x34
	::System::Single LDAIODOAINK; // 0x58
	::Foundation::Function::FixedPolynomial KKDONOOCNHL; // 0x5C
	::System::Single CNINAMJGPCL; // 0x80
	::Foundation::Function::FixedPolynomial NHLIEMBLMJJ; // 0x84
	::System::Single JAEGILAGOEN; // 0xA8

	::System::Void LMAJCANAPLJ(::Foundation::Unreal::FTransform3D& OHJOMJCNNMC, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_LMAJCANAPLJ_OFFSET))(this, OHJOMJCNNMC, FNIOPKPHDEH);
	}

	::System::Void EMLDIHEBNBO(::Foundation::Unreal::FTransform3D& OHJOMJCNNMC, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_EMLDIHEBNBO_OFFSET))(this, OHJOMJCNNMC, FNIOPKPHDEH);
	}

	::System::Void DDLPJFFDMJL(::System::Single AEFMPOLANKK, ::Foundation::Unreal::FTransform3D& LDDJOFHAOHG, ::Foundation::Unreal::FTransform3D& NJCJPAFFBAN, ::Foundation::Unreal::FTransform3D& MKFJOLBEBHJ, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_DDLPJFFDMJL_OFFSET))(this, AEFMPOLANKK, LDDJOFHAOHG, NJCJPAFFBAN, MKFJOLBEBHJ, MDPPNMIPDMP);
	}

	::System::Void BLLAHDJHBOO(::System::Single PMNLNNGEIFM, ::Foundation::Unreal::FTransform3D& LDDJOFHAOHG, ::Foundation::Unreal::FTransform3D& NJCJPAFFBAN, ::Foundation::Unreal::FTransform3D& MKFJOLBEBHJ, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_BLLAHDJHBOO_OFFSET))(this, PMNLNNGEIFM, LDDJOFHAOHG, NJCJPAFFBAN, MKFJOLBEBHJ, MDPPNMIPDMP);
	}

	::System::Void NGMNENHAEHJ(::System::Single PMNLNNGEIFM, ::Foundation::Unreal::FTransform3D& LDDJOFHAOHG, ::Foundation::Unreal::FTransform3D& NJCJPAFFBAN, ::Foundation::Unreal::FTransform3D& MKFJOLBEBHJ, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_NGMNENHAEHJ_OFFSET))(this, PMNLNNGEIFM, LDDJOFHAOHG, NJCJPAFFBAN, MKFJOLBEBHJ, MDPPNMIPDMP);
	}

	/*
	static ::OAIDDDKMKEJ_GPGHADNLEBH JFDOOELFAOA()
	{
		return ((::OAIDDDKMKEJ_GPGHADNLEBH(*)())((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_JFDOOELFAOA_OFFSET))();
	}
	*/

	::System::Void ALMOJNIOGFA(::Foundation::Unreal::FTransform3D& OHJOMJCNNMC, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_ALMOJNIOGFA_OFFSET))(this, OHJOMJCNNMC, FNIOPKPHDEH);
	}

	::System::Void GEAEMFJBJKI(::Foundation::Unreal::FTransform3D& OHJOMJCNNMC, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_GEAEMFJBJKI_OFFSET))(this, OHJOMJCNNMC, FNIOPKPHDEH);
	}

	::System::Void EIGDKGAFHPG(::System::Single PMNLNNGEIFM, ::Foundation::Unreal::FTransform3D& LDDJOFHAOHG, ::Foundation::Unreal::FTransform3D& NJCJPAFFBAN, ::Foundation::Unreal::FTransform3D& MKFJOLBEBHJ, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::Foundation::Unreal::FTransform3D&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_EIGDKGAFHPG_OFFSET))(this, PMNLNNGEIFM, LDDJOFHAOHG, NJCJPAFFBAN, MKFJOLBEBHJ, MDPPNMIPDMP);
	}

	static ::Foundation::Function::FixedPolynomial HHIOCKLMKGI(::System::Single MDPPNMIPDMP, ::System::Single EGEGIMGMJHN, ::System::Single BLJDEMAJCBG, ::System::Single& JAKJFLEGFKH)
	{
		return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_GPGHADNLEBH_HHIOCKLMKGI_OFFSET))(MDPPNMIPDMP, EGEGIMGMJHN, BLJDEMAJCBG, JAKJFLEGFKH);
	}
};
