#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCKGKFIBHGB;
class DJPKJFABKMI;
namespace MoleMole::Arcade::BallPit { class BallPitParticleParamOverride; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer; }

#define AOHDFNNOLEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB545E0)

inline static constexpr unsigned int AOHDFNNOLEH_TypeDefinitionIndex = 95012;

class AOHDFNNOLEH : public ::System::Object
{
public:
	::MoleMole::Arcade::BallPit::BallPitParticleParamOverride* IIBDAOJLLMK; // 0x10
	::UnityEngine::GameObject* LNFCNHNJLEF; // 0x18
	::System::String* HFJFGEEFOED; // 0x20
	::DJPKJFABKMI* NPLGILLEDLA; // 0x28
	::UnityEngine::Rendering::Universal::TextureSheetRenderer* MEGONMDLBNC; // 0x30
	::System::Collections::Generic::List_1<::BCKGKFIBHGB*>* OMALCHCJMBK; // 0x38
	::Il2CppArray<::UnityEngine::ParticleSystem*>* KIFBADMCIIN; // 0x40
	::System::Single CJLKFOGFONE; // 0x48
	::System::Single CCDNKBONPLB; // 0x4C
	::System::Int32 IIJHIGNEDDJ; // 0x50
	::System::Boolean GNGNBHOHOAI; // 0x54
	::System::Boolean GKICGBDLFKF; // 0x55
	::System::Boolean EEENJLMHKDH; // 0x56
	::System::Boolean BKFFPJOMGBO; // 0x57
	::System::Int32 PIOFNLCOBFN; // 0x58
	::System::UInt32 HGKNBLJCJKD; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHDFNNOLEH__CTOR_OFFSET))(this);
	}
};
