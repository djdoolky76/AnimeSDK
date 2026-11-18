#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IPOHJBLJGDJ.h"

namespace System { class Random; }

#define CLPFAJHKCKK_CGJHLBGIPIL_OFFSET UNITYSDK_OFFSET(0x1EDEEA30)
#define CLPFAJHKCKK_DKBKLECLJBK_OFFSET UNITYSDK_OFFSET(0x1EDEEC20)
#define CLPFAJHKCKK_EMPNBCFNIID_OFFSET UNITYSDK_OFFSET(0x1EDEEE00)
#define CLPFAJHKCKK_GOENJOBMMJF_OFFSET UNITYSDK_OFFSET(0x1EDEE140)
#define CLPFAJHKCKK_NBCINBONEML_OFFSET UNITYSDK_OFFSET(0x1EDEE2F0)
#define CLPFAJHKCKK_NIDBMIJCCKE_OFFSET UNITYSDK_OFFSET(0x1EDEE790)
#define CLPFAJHKCKK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDEE0F0)
#define CLPFAJHKCKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDEE2E0)

inline static constexpr unsigned int CLPFAJHKCKK_TypeDefinitionIndex = 18766;

class CLPFAJHKCKK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Double>** StaticGet_EGGECEDBLDA()
	{
		return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CLPFAJHKCKK_TypeDefinitionIndex)->GetStaticField(0x8F10);
	}
	::System::Random* MFEPCLGOHPI; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLPFAJHKCKK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPFAJHKCKK__CTOR_OFFSET))(this);
	}

	static ::System::Double NBCINBONEML(::System::Double JNDDJMAHNAI)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + CLPFAJHKCKK_NBCINBONEML_OFFSET))(JNDDJMAHNAI);
	}

	static ::System::Void GOENJOBMMJF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLPFAJHKCKK_GOENJOBMMJF_OFFSET))();
	}

	::System::Void CGJHLBGIPIL(::System::Int32 GONODCOMIAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLPFAJHKCKK_CGJHLBGIPIL_OFFSET))(this, GONODCOMIAA);
	}

	::System::Boolean DKBKLECLJBK(::System::Int32 HHHPDKABJNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLPFAJHKCKK_DKBKLECLJBK_OFFSET))(this, HHHPDKABJNP);
	}

	::IPOHJBLJGDJ EMPNBCFNIID(::IPOHJBLJGDJ JNDDJMAHNAI)
	{
		return ((::IPOHJBLJGDJ(*)(::PVOID, ::IPOHJBLJGDJ))((::PBYTE)hIl2Cpp + CLPFAJHKCKK_EMPNBCFNIID_OFFSET))(this, JNDDJMAHNAI);
	}

	static ::System::Double NIDBMIJCCKE(::System::Double CBLGCIFLMKL)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + CLPFAJHKCKK_NIDBMIJCCKE_OFFSET))(CBLGCIFLMKL);
	}
};
