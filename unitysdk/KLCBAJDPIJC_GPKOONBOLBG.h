#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace System { class Action; }
namespace UnityEngine { class Object; }

#define KLCBAJDPIJC_GPKOONBOLBG_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15169100)
#define KLCBAJDPIJC_GPKOONBOLBG__CTOR_OFFSET UNITYSDK_OFFSET(0x151690F0)

inline static constexpr unsigned int KLCBAJDPIJC_GPKOONBOLBG_TypeDefinitionIndex = 79034;

class KLCBAJDPIJC_GPKOONBOLBG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBAJDPIJC_GPKOONBOLBG__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + KLCBAJDPIJC_GPKOONBOLBG_OKKMJKOAIKG_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}
};
