#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AOPLCFCANOO_DDJNCPIPDFP_OFFSET UNITYSDK_OFFSET(0x11BE0DB0)
#define AOPLCFCANOO_ICOELJNGAPB_OFFSET UNITYSDK_OFFSET(0x11BE18A0)
#define AOPLCFCANOO_IEOJHDHDIEN_OFFSET UNITYSDK_OFFSET(0x11BE1840)
#define AOPLCFCANOO_JOPCOMDLICP_OFFSET UNITYSDK_OFFSET(0x11BE1630)
#define AOPLCFCANOO_LHGGLPMPPKK_OFFSET UNITYSDK_OFFSET(0x11BE1890)
#define AOPLCFCANOO_MDMKMKAKEMA_OFFSET UNITYSDK_OFFSET(0x11BE18B0)
#define AOPLCFCANOO_NLEBLDKKCJN_OFFSET UNITYSDK_OFFSET(0x11BE10C0)
#define AOPLCFCANOO_OLHBPFJCELC_OFFSET UNITYSDK_OFFSET(0x11BE1C90)
#define AOPLCFCANOO__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE0D50)

inline static constexpr unsigned int AOPLCFCANOO_TypeDefinitionIndex = 77508;

class AOPLCFCANOO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BPHJMBNFBIP; // 0x10
	::UnityEngine::GameObject* PADBLNAIFAH; // 0x18
	::System::UInt32 ILELDGLIJIB; // 0x20
	::System::UInt32 ADBNJEEONIM; // 0x24
	::System::Int32 HBFIDLPOCMA; // 0x28
	::Foundation::Coroutine::CoroutineHandle MFGLKCHLGJD; // 0x2C
	::System::Int32 HMKBHLBEGPO; // 0x30
	::System::Boolean GJNBFDLIHFD; // 0x34
	::System::Boolean NPMLCEBKFJM; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPLCFCANOO__CTOR_OFFSET))(this);
	}

	::System::Void DDJNCPIPDFP(::System::UInt32 AMIHBBCNMGP, ::System::UInt32 ANPMJEOBEPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOPLCFCANOO_DDJNCPIPDFP_OFFSET))(this, AMIHBBCNMGP, ANPMJEOBEPM);
	}

	::System::Void JOPCOMDLICP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPLCFCANOO_JOPCOMDLICP_OFFSET))(this);
	}

	::System::Void IEOJHDHDIEN(::System::UInt32 AMIHBBCNMGP, ::System::UInt32 ANPMJEOBEPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOPLCFCANOO_IEOJHDHDIEN_OFFSET))(this, AMIHBBCNMGP, ANPMJEOBEPM);
	}

	::System::Void LHGGLPMPPKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPLCFCANOO_LHGGLPMPPKK_OFFSET))(this);
	}

	::System::UInt32 ICOELJNGAPB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPLCFCANOO_ICOELJNGAPB_OFFSET))(this);
	}

	::System::Void MDMKMKAKEMA(::System::Int32 AOCOIDIMLIH, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOPLCFCANOO_MDMKMKAKEMA_OFFSET))(this, AOCOIDIMLIH, BKLGNCBNEGM);
	}

	::System::Void OLHBPFJCELC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPLCFCANOO_OLHBPFJCELC_OFFSET))(this);
	}

	::System::Void NLEBLDKKCJN(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOPLCFCANOO_NLEBLDKKCJN_OFFSET))(this, ABHBKFJKINO);
	}
};
