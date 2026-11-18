#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJFPOCNAOI.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class VESequenceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE_GETALLVEKEY_OFFSET UNITYSDK_OFFSET(0xFAC7FC0)
#define MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFAC7F40)
#define MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC8040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlaySequenceVENode_TypeDefinitionIndex = 63059;

	class ConfigPlaySequenceVENode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* SwitchEndEffectPath; // 0x18
		::System::String* SwitchStartEffectPath; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::VESequenceInfo*>* VESequenceInfoList; // 0x28
		::System::Boolean isOnlyVisbile; // 0x30
		::System::Byte _padding0[0x3];
		::BIJFPOCNAOI PlayMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetAllVEKey()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE_GETALLVEKEY_OFFSET))(this);
		}
	};
}
