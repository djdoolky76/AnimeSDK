#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBBGNBBECCE.h"
#include "unitysdk/PJNIPDPCHMG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define OJJBIJLCNMK__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB91290)
#define OJJBIJLCNMK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x5FAE40)
#define OJJBIJLCNMK__CTOR_OFFSET UNITYSDK_OFFSET(0x5FAE20)

inline static constexpr unsigned int OJJBIJLCNMK_TypeDefinitionIndex = 54435;

struct alignas(8) OJJBIJLCNMK
{
	static ::OJJBIJLCNMK* StaticGet_DDGNFJDLOKA()
	{
		return (::OJJBIJLCNMK*)Il2CppClass::FromTypeDefinitionIndex(OJJBIJLCNMK_TypeDefinitionIndex)->GetStaticField(0x11F50);
	}
	::System::Int32 EFJNFKCBCOD; // 0x10
	::System::Int32 FGHCGCMHLEN; // 0x14
	::PJNIPDPCHMG HEPCHPDEFBJ; // 0x18
	::System::Nullable_1<::GBBGNBBECCE> JGGFDIMINPF; // 0x1C

	::System::Void _ctor(::System::Int32 OPCEHCJGNHK, ::System::Int32 BJOGOJHDNBD, ::PJNIPDPCHMG OBNIAHNMHPF, ::System::Nullable_1<::GBBGNBBECCE> FAFJLHEGMIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::PJNIPDPCHMG, ::System::Nullable_1<::GBBGNBBECCE>))((::PBYTE)hIl2Cpp + OJJBIJLCNMK__CTOR_OFFSET))(this, OPCEHCJGNHK, BJOGOJHDNBD, OBNIAHNMHPF, FAFJLHEGMIP);
	}

	::System::Void _ctor_1(::PJNIPDPCHMG OBNIAHNMHPF, ::GBBGNBBECCE FAFJLHEGMIP)
	{
		return ((::System::Void(*)(::PVOID, ::PJNIPDPCHMG, ::GBBGNBBECCE))((::PBYTE)hIl2Cpp + OJJBIJLCNMK__CTOR_1_OFFSET))(this, OBNIAHNMHPF, FAFJLHEGMIP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJJBIJLCNMK__CCTOR_OFFSET))();
	}
};
