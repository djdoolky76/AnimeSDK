#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define AKFCOMPHBLJ_DPFPJOIOEIB_NCKNMJJNFAK_OFFSET UNITYSDK_OFFSET(0x144E56E0)
#define AKFCOMPHBLJ_DPFPJOIOEIB__CTOR_OFFSET UNITYSDK_OFFSET(0x144E56D0)

inline static constexpr unsigned int AKFCOMPHBLJ_DPFPJOIOEIB_TypeDefinitionIndex = 77059;

class AKFCOMPHBLJ_DPFPJOIOEIB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* BDHOILPIGKB; // 0x10
	::UnityEngine::Vector3 LLBACDLMCBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DPFPJOIOEIB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* NCKNMJJNFAK()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DPFPJOIOEIB_NCKNMJJNFAK_OFFSET))(this);
	}
};
