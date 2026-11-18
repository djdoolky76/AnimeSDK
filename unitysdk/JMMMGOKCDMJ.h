#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }

#define JMMMGOKCDMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155A5660)
#define JMMMGOKCDMJ_EJOMBKOOBIL_OFFSET UNITYSDK_OFFSET(0x155A5780)
#define JMMMGOKCDMJ_GECEMDBGJBG_OFFSET UNITYSDK_OFFSET(0x155A5A10)
#define JMMMGOKCDMJ_IOMCCJHJFAJ_OFFSET UNITYSDK_OFFSET(0x155A5920)
#define JMMMGOKCDMJ_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x155A5CA0)
#define JMMMGOKCDMJ_KCJMMJGLOBE_OFFSET UNITYSDK_OFFSET(0x155A54D0)
#define JMMMGOKCDMJ_KKPOCDOFJKB_OFFSET UNITYSDK_OFFSET(0x155A56F0)
#define JMMMGOKCDMJ_MABCPCCIDMB_OFFSET UNITYSDK_OFFSET(0x155A5AC0)
#define JMMMGOKCDMJ_NIJKOILNJAP_OFFSET UNITYSDK_OFFSET(0x155A5420)
#define JMMMGOKCDMJ_ONCREATE_OFFSET UNITYSDK_OFFSET(0x155A53B0)
#define JMMMGOKCDMJ_UPDATE_OFFSET UNITYSDK_OFFSET(0x155A5470)
#define JMMMGOKCDMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x155A5760)

inline static constexpr unsigned int JMMMGOKCDMJ_TypeDefinitionIndex = 61629;

class JMMMGOKCDMJ
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_PJIOHINPGCC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(JMMMGOKCDMJ_TypeDefinitionIndex)->GetStaticField(0x4BD50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single NJLILJMLPFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_UPDATE_OFFSET))(this, NJLILJMLPFF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_DISPOSE_OFFSET))(this);
	}

	::System::Void NIJKOILNJAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_NIJKOILNJAP_OFFSET))(this);
	}

	::System::Void EJOMBKOOBIL(::System::String* MCOHLHMKLIP, ::UnityEngine::AnimationClip* PHGBOCIDLEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_EJOMBKOOBIL_OFFSET))(this, MCOHLHMKLIP, PHGBOCIDLEI);
	}

	::System::Double GECEMDBGJBG(::System::Double FNIOPKPHDEH, ::System::Double IBGKEANAOFM, ::System::Double ELONEIIPPBB)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_GECEMDBGJBG_OFFSET))(this, FNIOPKPHDEH, IBGKEANAOFM, ELONEIIPPBB);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* IOMCCJHJFAJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)())((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_IOMCCJHJFAJ_OFFSET))();
	}

	::System::Nullable_1<::System::Single> MABCPCCIDMB(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_MABCPCCIDMB_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void KCJMMJGLOBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_KCJMMJGLOBE_OFFSET))(this);
	}

	::System::Void KKPOCDOFJKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_KKPOCDOFJKB_OFFSET))(this);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_JPOLBPCHLHK_OFFSET))();
	}
};
