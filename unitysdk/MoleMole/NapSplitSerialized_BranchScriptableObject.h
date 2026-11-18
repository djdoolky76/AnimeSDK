#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class NapSplitSerialized_MainScriptableObject; }
namespace System { class String; }

#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONCONVERTTOSPLIT_OFFSET UNITYSDK_OFFSET(0x10D4B290)
#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONMERGESPLIT_OFFSET UNITYSDK_OFFSET(0x10D4B240)
#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONRUNTIMEPREPARE_OFFSET UNITYSDK_OFFSET(0x10D4B370)
#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4B400)
#define MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT__LOGERR_OFFSET UNITYSDK_OFFSET(0x10D4B320)

namespace MoleMole
{
	inline static constexpr unsigned int NapSplitSerialized_BranchScriptableObject_TypeDefinitionIndex = 79947;

	class NapSplitSerialized_BranchScriptableObject : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnMergeSplit(::MoleMole::NapSplitSerialized_MainScriptableObject* main)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONMERGESPLIT_OFFSET))(this, main);
		}

		::System::Void OnConvertToSplit(::MoleMole::NapSplitSerialized_MainScriptableObject* main)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONCONVERTTOSPLIT_OFFSET))(this, main);
		}

		::System::Void OnRuntimePrepare(::MoleMole::NapSplitSerialized_MainScriptableObject* main)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NapSplitSerialized_MainScriptableObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT_ONRUNTIMEPREPARE_OFFSET))(this, main);
		}

		::System::Void _LogErr(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSPLITSERIALIZED_BRANCHSCRIPTABLEOBJECT__LOGERR_OFFSET))(this, msg);
		}
	};
}
