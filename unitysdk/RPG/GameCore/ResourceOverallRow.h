#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResourceOverallRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESOURCEOVERALLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98E4F0)
#define RPG_GAMECORE_RESOURCEOVERALLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D98DF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResourceOverallRow_TypeDefinitionIndex = 14654;

	class ResourceOverallRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CurrencyIDList; // 0x10
		::System::String* PageKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResourceOverallRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResourceOverallRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEOVERALLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
