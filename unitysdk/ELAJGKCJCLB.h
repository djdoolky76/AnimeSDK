#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNameValueArray_1.h"
#include "unitysdk/JIPGFLPPIAI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/NameValueArray_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeMemoryRefEnumerator_1.h"
#include "unitysdk/HHDPDELCDNI.h"

#define ELAJGKCJCLB_FDDKOJNMCPL_OFFSET UNITYSDK_OFFSET(0x6AE0F0)
#define ELAJGKCJCLB_FMIHPAEGIMB_1_OFFSET UNITYSDK_OFFSET(0x6AE110)
#define ELAJGKCJCLB_FMIHPAEGIMB_OFFSET UNITYSDK_OFFSET(0x6ADFA0)
#define ELAJGKCJCLB_JNDPLMFGOOE_OFFSET UNITYSDK_OFFSET(0x6ADD40)
#define ELAJGKCJCLB_LMAMMFBGAJC_OFFSET UNITYSDK_OFFSET(0x6ADD10)
#define ELAJGKCJCLB_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x3D89E0)
#define ELAJGKCJCLB_OAKPLMJJEBM_1_OFFSET UNITYSDK_OFFSET(0x6AE0D0)
#define ELAJGKCJCLB_OAKPLMJJEBM_OFFSET UNITYSDK_OFFSET(0x6ADE70)
#define ELAJGKCJCLB_OJPLNGOJDIJ_OFFSET UNITYSDK_OFFSET(0x6ADD20)
#define ELAJGKCJCLB_ONBOLMKALAD_OFFSET UNITYSDK_OFFSET(0x363E30)
#define ELAJGKCJCLB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A99B90)
#define ELAJGKCJCLB__CTOR_OFFSET UNITYSDK_OFFSET(0x6ADC60)

inline static constexpr unsigned int ELAJGKCJCLB_TypeDefinitionIndex = 87258;

struct alignas(8) ELAJGKCJCLB
{
	static ::JIPGFLPPIAI* StaticGet_IDHECOGLAJJ()
	{
		return (::JIPGFLPPIAI*)Il2CppClass::FromTypeDefinitionIndex(ELAJGKCJCLB_TypeDefinitionIndex)->GetStaticField(0x133C0);
	}
	static ::ELAJGKCJCLB* StaticGet_FGBLILBNEHG()
	{
		return (::ELAJGKCJCLB*)Il2CppClass::FromTypeDefinitionIndex(ELAJGKCJCLB_TypeDefinitionIndex)->GetStaticField(0x133E0);
	}
	::Foundation::ReadOnlyNameValueArray_1<::JIPGFLPPIAI> LACGFCIBDFD; // 0x10
	::System::Byte _padding0[0x18];
	::System::Int32 PLBODMGKEIF; // 0x30
	::UnityEngine::Animations::TransformSceneHandle BMCABGEMEOP; // 0x34

	::System::Void _ctor(::Foundation::NameValueArray_1<::JIPGFLPPIAI> ILIPMAMEFLF, ::System::Int32 PGGOPKFGBOH, ::UnityEngine::Animations::TransformSceneHandle BEEGIMMGFPF)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NameValueArray_1<::JIPGFLPPIAI>, ::System::Int32, ::UnityEngine::Animations::TransformSceneHandle))((::PBYTE)hIl2Cpp + ELAJGKCJCLB__CTOR_OFFSET))(this, ILIPMAMEFLF, PGGOPKFGBOH, BEEGIMMGFPF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELAJGKCJCLB__CCTOR_OFFSET))();
	}

	::UnityEngine::Animations::TransformSceneHandle LMAMMFBGAJC()
	{
		return ((::UnityEngine::Animations::TransformSceneHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_LMAMMFBGAJC_OFFSET))(this);
	}

	::System::Int32 OJPLNGOJDIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_OJPLNGOJDIJ_OFFSET))(this);
	}

	::HHDPDELCDNI JNDPLMFGOOE(::Foundation::Unreal::FName OENEHOCPPLK)
	{
		return ((::HHDPDELCDNI(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_JNDPLMFGOOE_OFFSET))(this, OENEHOCPPLK);
	}

	::HHDPDELCDNI OAKPLMJJEBM(::Foundation::Unreal::FName OENEHOCPPLK)
	{
		return ((::HHDPDELCDNI(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_OAKPLMJJEBM_OFFSET))(this, OENEHOCPPLK);
	}

	::JIPGFLPPIAI& FMIHPAEGIMB(::Foundation::Unreal::FName OENEHOCPPLK)
	{
		return ((::JIPGFLPPIAI&(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_FMIHPAEGIMB_OFFSET))(this, OENEHOCPPLK);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_NKDCADABLCL_OFFSET))(this);
	}

	::HHDPDELCDNI OAKPLMJJEBM_1(::HHDPDELCDNI LAPCGCGEPNN)
	{
		return ((::HHDPDELCDNI(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_OAKPLMJJEBM_1_OFFSET))(this, LAPCGCGEPNN);
	}

	::System::Int32 FDDKOJNMCPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_FDDKOJNMCPL_OFFSET))(this);
	}

	::JIPGFLPPIAI& FMIHPAEGIMB_1(::HHDPDELCDNI LAPCGCGEPNN)
	{
		return ((::JIPGFLPPIAI&(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_FMIHPAEGIMB_1_OFFSET))(this, LAPCGCGEPNN);
	}

	::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::JIPGFLPPIAI> ONBOLMKALAD()
	{
		return ((::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::JIPGFLPPIAI>(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAJGKCJCLB_ONBOLMKALAD_OFFSET))(this);
	}
};
