#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/OAIDDDKMKEJ_AAGCADNFNLH.h"
#include "unitysdk/OAIDDDKMKEJ_LADLHOAKMDL.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JLJFLLKCPKE.h"
#include "unitysdk/OAIDDDKMKEJ_LBJJBOAJIGA.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace System { class Object; }

#define OAIDDDKMKEJ_AGHBPJNGGBK_OFFSET UNITYSDK_OFFSET(0x49A080)
#define OAIDDDKMKEJ_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x49A0C0)
#define OAIDDDKMKEJ_CJFHOLMAAMJ_OFFSET UNITYSDK_OFFSET(0x49A120)
#define OAIDDDKMKEJ_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x499FD0)
#define OAIDDDKMKEJ_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x49A0B0)
#define OAIDDDKMKEJ_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x49A000)
#define OAIDDDKMKEJ_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x49A050)
#define OAIDDDKMKEJ_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x49A090)
#define OAIDDDKMKEJ_KGGLMGMMGPH_OFFSET UNITYSDK_OFFSET(0x49A070)
#define OAIDDDKMKEJ_KNBODHEJLPG_OFFSET UNITYSDK_OFFSET(0x49A100)
#define OAIDDDKMKEJ_MLHLBLCIKBC_OFFSET UNITYSDK_OFFSET(0x49A0D0)
#define OAIDDDKMKEJ_MNFHAFGBKPL_OFFSET UNITYSDK_OFFSET(0x49A0F0)
#define OAIDDDKMKEJ_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x49A040)
#define OAIDDDKMKEJ_NMPOAMIJFPN_OFFSET UNITYSDK_OFFSET(0x49A0A0)
#define OAIDDDKMKEJ_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x499F50)
#define OAIDDDKMKEJ_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x499F90)
#define OAIDDDKMKEJ__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3060C0)
#define OAIDDDKMKEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x499EE0)

inline static constexpr unsigned int OAIDDDKMKEJ_TypeDefinitionIndex = 62787;

struct alignas(8) OAIDDDKMKEJ
{
	static ::OAIDDDKMKEJ* StaticGet_FGBLILBNEHG()
	{
		return (::OAIDDDKMKEJ*)Il2CppClass::FromTypeDefinitionIndex(OAIDDDKMKEJ_TypeDefinitionIndex)->GetStaticField(0x12500);
	}
	::Foundation::NativeVariableArray_1<::System::Object*> LBOLLEJEIJC; // 0x10
	::System::Byte _padding0[0x8];
	::OAIDDDKMKEJ_AAGCADNFNLH HKDDGGHGFLF; // 0x20
	::System::Byte _padding1[0x4];
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::System::Object*>> NJBAECOFFIJ; // 0x28
	::System::Byte _padding2[0x8];
	::System::Single BMJBDKMOOLM; // 0x38
	::System::Single KKJKPJEGKJC; // 0x3C
	::System::Single OMIOKKNHHPI; // 0x40
	::System::Byte _padding3[0x4];
	::OAIDDDKMKEJ_LADLHOAKMDL HOLBDAGIPLF; // 0x48
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x60
	::System::Int32 LFIBMHMKOBJ; // 0xF0
	::System::Byte _padding4[0x4];
	::System::Double FODKKEGIFMI; // 0xF8

	::System::Void _ctor(::PMBCHGNJMKF AAOCANGHBDG, ::Foundation::NativeVariableArray_1<::System::Object*> MOEKEKKJGBB, ::Foundation::NativeVariableArray_1<::System::Object*> EFMNHHJHPII, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::System::Object*>> FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF, ::Foundation::NativeVariableArray_1<::System::Object*>, ::Foundation::NativeVariableArray_1<::System::Object*>, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::System::Object*>>))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ__CTOR_OFFSET))(this, AAOCANGHBDG, MOEKEKKJGBB, EFMNHHJHPII, FCEIKAIDHPM);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAIDDDKMKEJ__CCTOR_OFFSET))();
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_IJMOICJDPPG_OFFSET))(this);
	}

	::System::Int32 KGGLMGMMGPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_KGGLMGMMGPH_OFFSET))(this);
	}

	::System::Double AGHBPJNGGBK(::System::Double BEKLCLFIDKF, ::System::Double DMIIFMDONDA)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_AGHBPJNGGBK_OFFSET))(this, BEKLCLFIDKF, DMIIFMDONDA);
	}

	::System::Void JLIMOLHLFAK(::JLJFLLKCPKE& ILIPMAMEFLF)
	{
		return ((::System::Void(*)(::PVOID, ::JLJFLLKCPKE&))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_JLIMOLHLFAK_OFFSET))(this, ILIPMAMEFLF);
	}

	::System::Void NMPOAMIJFPN(::JLJFLLKCPKE& MOEKEKKJGBB, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::JLJFLLKCPKE&, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_NMPOAMIJFPN_OFFSET))(this, MOEKEKKJGBB, PMNLNNGEIFM);
	}

	::System::Void EDEFLFIKNFK(::JLJFLLKCPKE& MOEKEKKJGBB)
	{
		return ((::System::Void(*)(::PVOID, ::JLJFLLKCPKE&))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_EDEFLFIKNFK_OFFSET))(this, MOEKEKKJGBB);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_BMGEEIJFLIJ_OFFSET))(this);
	}

	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::System::Object*>> MLHLBLCIKBC()
	{
		return ((::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::System::Object*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_MLHLBLCIKBC_OFFSET))(this);
	}

	::System::Void MNFHAFGBKPL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_MNFHAFGBKPL_OFFSET))(this, PMNLNNGEIFM);
	}

	::OAIDDDKMKEJ_LBJJBOAJIGA KNBODHEJLPG(::System::Int32 GOMPNMDMHCG)
	{
		return ((::OAIDDDKMKEJ_LBJJBOAJIGA(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_KNBODHEJLPG_OFFSET))(this, GOMPNMDMHCG);
	}

	::System::Void CJFHOLMAAMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIDDDKMKEJ_CJFHOLMAAMJ_OFFSET))(this);
	}
};
