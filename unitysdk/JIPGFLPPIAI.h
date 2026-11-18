#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JIPGFLPPIAI_CNGJANJELCP_OFFSET UNITYSDK_OFFSET(0x823390)
#define JIPGFLPPIAI_DEHDPBKPJLE_OFFSET UNITYSDK_OFFSET(0x8232B0)
#define JIPGFLPPIAI_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x823330)
#define JIPGFLPPIAI_FPDIPEBPGOA_OFFSET UNITYSDK_OFFSET(0x3581C0)
#define JIPGFLPPIAI_GET_NAME_OFFSET UNITYSDK_OFFSET(0x282350)
#define JIPGFLPPIAI_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x823370)
#define JIPGFLPPIAI_JBLOBEFDCLP_OFFSET UNITYSDK_OFFSET(0x823260)
#define JIPGFLPPIAI_PJEFJMKCLBL_OFFSET UNITYSDK_OFFSET(0x823480)
#define JIPGFLPPIAI_POPLEDFHNJE_OFFSET UNITYSDK_OFFSET(0x374A70)
#define JIPGFLPPIAI_RESET_OFFSET UNITYSDK_OFFSET(0x8231F0)
#define JIPGFLPPIAI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C362FA0)

inline static constexpr unsigned int JIPGFLPPIAI_TypeDefinitionIndex = 92490;

struct alignas(4) JIPGFLPPIAI
{
	static ::JIPGFLPPIAI* StaticGet_EFMCBKOMKIH()
	{
		return (::JIPGFLPPIAI*)Il2CppClass::FromTypeDefinitionIndex(JIPGFLPPIAI_TypeDefinitionIndex)->GetStaticField(0x12D20);
	}
	::Foundation::Unreal::FName NMOJBPAMAMJ; // 0x10
	::UnityEngine::Animations::TransformStreamHandle COFBPCLBNIN; // 0x18
	::HHDPDELCDNI KPGEIAJELNI; // 0x24
	::HHDPDELCDNI MLIMPHGDIPA; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIPGFLPPIAI__CCTOR_OFFSET))();
	}

	::Foundation::Unreal::FName get_Name()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_GET_NAME_OFFSET))(this);
	}

	::System::Void Reset(::Foundation::Unreal::FName HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_RESET_OFFSET))(this, HIAIKHDFCLN);
	}

	::HHDPDELCDNI POPLEDFHNJE()
	{
		return ((::HHDPDELCDNI(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_POPLEDFHNJE_OFFSET))(this);
	}

	::System::Boolean JBLOBEFDCLP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_JBLOBEFDCLP_OFFSET))(this, CPKODGLINAO);
	}

	::HHDPDELCDNI FPDIPEBPGOA()
	{
		return ((::HHDPDELCDNI(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_FPDIPEBPGOA_OFFSET))(this);
	}

	::System::Void DEHDPBKPJLE(::UnityEngine::Animations::AnimationStream CPKODGLINAO, ::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Quaternion& BFBELMDIAHI, ::UnityEngine::Vector3& CLMNLPKFBFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_DEHDPBKPJLE_OFFSET))(this, CPKODGLINAO, OHOGDOMNHNK, BFBELMDIAHI, CLMNLPKFBFA);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void IBBLCAOMCKF(::UnityEngine::Animations::TransformStreamHandle PHHDHIBOCKA, ::HHDPDELCDNI LAPCGCGEPNN, ::HHDPDELCDNI DMCMDBNMMPO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::TransformStreamHandle, ::HHDPDELCDNI, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_IBBLCAOMCKF_OFFSET))(this, PHHDHIBOCKA, LAPCGCGEPNN, DMCMDBNMMPO);
	}

	::System::Void CNGJANJELCP(::UnityEngine::Animations::AnimationStream CPKODGLINAO, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::UnityEngine::Vector3 CLMNLPKFBFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_CNGJANJELCP_OFFSET))(this, CPKODGLINAO, OHOGDOMNHNK, BFBELMDIAHI, CLMNLPKFBFA);
	}

	::System::Void PJEFJMKCLBL(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + JIPGFLPPIAI_PJEFJMKCLBL_OFFSET))(this, CPKODGLINAO);
	}
};
