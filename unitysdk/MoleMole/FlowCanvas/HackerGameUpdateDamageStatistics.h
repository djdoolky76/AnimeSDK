#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEDAMAGESTATISTICS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1622D540)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEDAMAGESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1622D740)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameUpdateDamageStatistics_TypeDefinitionIndex = 44883;

	class HackerGameUpdateDamageStatistics
	{
	public:
		// static const ::System::String* UnknownDamageSourceKey; // 0x0
		// static const ::System::String* LaserDamageSourceKey; // 0x0
		// static const ::System::String* TrapDamageSourceKey; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEDAMAGESTATISTICS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* damageSource, ::System::Int32 damageIn, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* damageStatistics)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEDAMAGESTATISTICS_INVOKE_OFFSET))(this, damageSource, damageIn, damageStatistics);
		}
	};
}
