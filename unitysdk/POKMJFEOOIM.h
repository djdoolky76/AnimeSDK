#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define POKMJFEOOIM__CTOR_OFFSET UNITYSDK_OFFSET(0x119A5890)

inline static constexpr unsigned int POKMJFEOOIM_TypeDefinitionIndex = 86649;

class POKMJFEOOIM : public ::System::Object
{
public:
	::Il2CppArray<::MoleMole::Battle::Entity*>* JJFGDOOAJKN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* HBDHAHMHJOJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BPBOIILLBMP; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MBMFMAPPBBP; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* OBMEBKJAGDP; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* BBOCGIKEIBB; // 0x38
	::System::Int32 JPKAPLOMNCK; // 0x40
	::System::Single BIBHBAPNOKO; // 0x44
	::System::Single CKILBEDGEDM; // 0x48
	::System::Single BFMMAJNLOCB; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKMJFEOOIM__CTOR_OFFSET))(this);
	}
};
