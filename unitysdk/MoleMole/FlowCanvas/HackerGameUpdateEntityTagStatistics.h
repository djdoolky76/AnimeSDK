#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEENTITYTAGSTATISTICS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4AA2E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEENTITYTAGSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AA580)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameUpdateEntityTagStatistics_TypeDefinitionIndex = 75343;

	class HackerGameUpdateEntityTagStatistics
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEENTITYTAGSTATISTICS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* entity, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* extraRetVariables)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEENTITYTAGSTATISTICS_INVOKE_OFFSET))(this, entity, extraRetVariables);
		}
	};
}
