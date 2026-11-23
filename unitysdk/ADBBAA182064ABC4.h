#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4E53FE9754442CB.h"

class FF25D157E21C4F1F;
namespace ABC::CustomRenderPipeline { class CapsuleOcclusionComp; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T1, typename T2> class A6D12413358F253D;

#define ADBBAA182064ABC4_A20B1CA78DB71171_OFFSET UNITYSDK_OFFSET(0x276B6C0)
#define ADBBAA182064ABC4_B180D86C62877D7E_1_OFFSET UNITYSDK_OFFSET(0x276BBA0)
#define ADBBAA182064ABC4_B180D86C62877D7E_OFFSET UNITYSDK_OFFSET(0x276BCA0)
#define ADBBAA182064ABC4_EC61F92C30598CFB_OFFSET UNITYSDK_OFFSET(0x276B590)
#define ADBBAA182064ABC4__CTOR_OFFSET UNITYSDK_OFFSET(0x276BD40)

inline static constexpr unsigned int ADBBAA182064ABC4_TypeDefinitionIndex = 16488;

class ADBBAA182064ABC4
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::CustomRenderPipeline::CapsuleOcclusionComp*>* ED0188336EAAF4DF; // 0x10
	::System::Boolean F0E2FF2C542AB9D8; // 0x18
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::FF25D157E21C4F1F*>* FB23562744A97D2A; // 0x20
	::A6D12413358F253D<::FF25D157E21C4F1F*, ::System::Single>* FF0DA0751A4842C6; // 0x28

	::System::Collections::Generic::List_1<::FF25D157E21C4F1F*>* A20B1CA78DB71171(::B4E53FE9754442CB& A54A3EA67F655834)
	{
		return ((::System::Collections::Generic::List_1<::FF25D157E21C4F1F*>*(*)(::PVOID, ::B4E53FE9754442CB&))((::PBYTE)hIl2Cpp + ADBBAA182064ABC4_A20B1CA78DB71171_OFFSET))(this, A54A3EA67F655834);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBBAA182064ABC4__CTOR_OFFSET))(this);
	}

	::System::Boolean B180D86C62877D7E(::System::Int32 BDB4BC647482806E)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADBBAA182064ABC4_B180D86C62877D7E_OFFSET))(this, BDB4BC647482806E);
	}

	::System::Boolean EC61F92C30598CFB(::UnityEngine::GameObject* BC63F4052E4478D7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ADBBAA182064ABC4_EC61F92C30598CFB_OFFSET))(this, BC63F4052E4478D7);
	}

	::System::Boolean B180D86C62877D7E_1(::UnityEngine::GameObject* BC63F4052E4478D7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ADBBAA182064ABC4_B180D86C62877D7E_1_OFFSET))(this, BC63F4052E4478D7);
	}
};
