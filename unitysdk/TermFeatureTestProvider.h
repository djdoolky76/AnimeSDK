#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"
#include "unitysdk/UnityEngine/UI/Extension/TermID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TERMFEATURETESTPROVIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D204D00)
#define TERMFEATURETESTPROVIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D205030)
#define TERMFEATURETESTPROVIDER_REBUILDLOOKUP_OFFSET UNITYSDK_OFFSET(0x1D204DE0)
#define TERMFEATURETESTPROVIDER_TRYGETTERM_OFFSET UNITYSDK_OFFSET(0x1D2051A0)
#define TERMFEATURETESTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D205290)

inline static constexpr unsigned int TermFeatureTestProvider_TypeDefinitionIndex = 63989;

class TermFeatureTestProvider : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* _terms; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Extension::TermID, ::UnityEngine::UI::Extension::TermData>* _lookup; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER_ONDESTROY_OFFSET))(this);
	}

	::System::Void RebuildLookup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER_REBUILDLOOKUP_OFFSET))(this);
	}

	::System::Boolean TryGetTerm(::UnityEngine::UI::Extension::TermID termId, ::UnityEngine::UI::Extension::TermData& data)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::TermID, ::UnityEngine::UI::Extension::TermData&))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER_TRYGETTERM_OFFSET))(this, termId, data);
	}
};
