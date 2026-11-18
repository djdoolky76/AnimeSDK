#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define OFEPJCHJCGK_KDHPFDIOLEA_GIFHEBFLBDA_OFFSET UNITYSDK_OFFSET(0x13A536D0)
#define OFEPJCHJCGK_KDHPFDIOLEA_HOMCKGLIBMF_OFFSET UNITYSDK_OFFSET(0x13A53680)
#define OFEPJCHJCGK_KDHPFDIOLEA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A53670)

inline static constexpr unsigned int OFEPJCHJCGK_KDHPFDIOLEA_TypeDefinitionIndex = 70708;

class OFEPJCHJCGK_KDHPFDIOLEA : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* HNFLNDEPPII; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_KDHPFDIOLEA__CTOR_OFFSET))(this);
	}

	::System::Void HOMCKGLIBMF(::UnityEngine::Object* EJCBEJMGFAJ, ::Foundation::AssetRequestHandle DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_KDHPFDIOLEA_HOMCKGLIBMF_OFFSET))(this, EJCBEJMGFAJ, DMIAICJPPDL);
	}

	::System::Void GIFHEBFLBDA(::UnityEngine::Object* EJCBEJMGFAJ, ::Foundation::AssetRequestHandle DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_KDHPFDIOLEA_GIFHEBFLBDA_OFFSET))(this, EJCBEJMGFAJ, DMIAICJPPDL);
	}
};
