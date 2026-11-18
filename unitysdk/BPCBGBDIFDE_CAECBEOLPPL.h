#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

class BPCBGBDIFDE;
namespace System { class Action; }
template <typename T> class NMANHEHIJAL_1;

#define BPCBGBDIFDE_CAECBEOLPPL_LEDLNFDCGNH_OFFSET UNITYSDK_OFFSET(0x10E1C950)
#define BPCBGBDIFDE_CAECBEOLPPL_OFPNNGELEFP_OFFSET UNITYSDK_OFFSET(0x10E1C410)
#define BPCBGBDIFDE_CAECBEOLPPL__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1C400)

inline static constexpr unsigned int BPCBGBDIFDE_CAECBEOLPPL_TypeDefinitionIndex = 78661;

class BPCBGBDIFDE_CAECBEOLPPL : public ::System::Object
{
public:
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::NMANHEHIJAL_1<::UnityEngine::Bounds>* DJLOKMMLFJC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_CAECBEOLPPL__CTOR_OFFSET))(this);
	}

	::System::Void OFPNNGELEFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_CAECBEOLPPL_OFPNNGELEFP_OFFSET))(this);
	}

	::System::Void LEDLNFDCGNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_CAECBEOLPPL_LEDLNFDCGNH_OFFSET))(this);
	}
};
