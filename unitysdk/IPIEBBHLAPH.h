#pragma once
#include "unitysdk/unitysdk.h"

class IABKJKNBCJF;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define IPIEBBHLAPH_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x160C3A40)
#define IPIEBBHLAPH_DJJCINEHGAA_OFFSET UNITYSDK_OFFSET(0x160C3870)
#define IPIEBBHLAPH_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x160C37B0)
#define IPIEBBHLAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x160C3700)

inline static constexpr unsigned int IPIEBBHLAPH_TypeDefinitionIndex = 63566;

class IPIEBBHLAPH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::ObjectPoolOfReusable_1<::MoleMole::UIHollowChessPieceParticle*>*>* JLGPJECBHJM; // 0x10
	::IABKJKNBCJF* EPIKABGEHLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIEBBHLAPH__CTOR_OFFSET))(this);
	}

	::MoleMole::UIHollowChessPieceParticle* OMPFLKCBFHF(::System::String* CJBJONJDOLI, ::MoleMole::Config::HollowChessboardParticleConfig* DFMKILICPFB, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IPIEBBHLAPH_OMPFLKCBFHF_OFFSET))(this, CJBJONJDOLI, DFMKILICPFB, JNLBPMKIFNK);
	}

	::System::Void DJJCINEHGAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIEBBHLAPH_DJJCINEHGAA_OFFSET))(this);
	}

	::System::Void DABGFBDHOGD(::MoleMole::UIHollowChessPieceParticle* JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle*))((::PBYTE)hIl2Cpp + IPIEBBHLAPH_DABGFBDHOGD_OFFSET))(this, JNDDJMAHNAI);
	}
};
