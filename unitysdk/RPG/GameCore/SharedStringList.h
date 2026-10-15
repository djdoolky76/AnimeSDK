#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SharedStringList; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SHAREDSTRINGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA35F0)
#define RPG_GAMECORE_SHAREDSTRINGLIST_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DAA3720)
#define RPG_GAMECORE_SHAREDSTRINGLIST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DAA3810)
#define RPG_GAMECORE_SHAREDSTRINGLIST_IMGLGAIIPCA_OFFSET UNITYSDK_OFFSET(0x1DAA3710)
#define RPG_GAMECORE_SHAREDSTRINGLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA3600)
#define RPG_GAMECORE_SHAREDSTRINGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA35C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedStringList_TypeDefinitionIndex = 18308;

	class SharedStringList : public ::RPG::GameCore::SharedValue
	{
	public:
		::Il2CppArray<::System::String*>* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedStringList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedStringList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType IMGLGAIIPCA()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_IMGLGAIIPCA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRINGLIST_GETHASHCODE_OFFSET))(this);
		}

	};
}
