#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define OBILNAMPNNB_AIIGNGJFNKC_OFFSET UNITYSDK_OFFSET(0xFB46BB0)
#define OBILNAMPNNB_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0xFB46E10)
#define OBILNAMPNNB_DMMHBCEDOOC_OFFSET UNITYSDK_OFFSET(0xFB46F80)
#define OBILNAMPNNB_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0xFB47110)
#define OBILNAMPNNB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xFB464C0)
#define OBILNAMPNNB__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB47040)
#define OBILNAMPNNB__CTOR_OFFSET UNITYSDK_OFFSET(0xFB47030)

inline static constexpr unsigned int OBILNAMPNNB_TypeDefinitionIndex = 73966;

class OBILNAMPNNB : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_BCEFCCECDIA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OBILNAMPNNB_TypeDefinitionIndex)->GetStaticField(0x51AC0);
	}
	static ::System::UInt64* StaticGet_DIDLACBMOFO()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(OBILNAMPNNB_TypeDefinitionIndex)->GetStaticField(0x13660);
	}
	::UnityEngine::GameObject* GLJLLBPMCIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBILNAMPNNB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBILNAMPNNB__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + OBILNAMPNNB_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	static ::System::Void ANPBCLAFCJB(::System::Int32 BBBFHGJLBKM)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + OBILNAMPNNB_ANPBCLAFCJB_OFFSET))(BBBFHGJLBKM);
	}

	::System::Boolean AIIGNGJFNKC(::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBILNAMPNNB_AIIGNGJFNKC_OFFSET))(this, NEEMKJBIIBC);
	}

	static ::System::Boolean DMMHBCEDOOC(::System::Int32 BBBFHGJLBKM)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + OBILNAMPNNB_DMMHBCEDOOC_OFFSET))(BBBFHGJLBKM);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + OBILNAMPNNB_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
