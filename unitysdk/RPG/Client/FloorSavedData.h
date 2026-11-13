#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNJBNBIOLAJ;
class JBIGEIHIFDN;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FLOORSAVEDDATA_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x19AEABB0)
#define RPG_CLIENT_FLOORSAVEDDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x19AEA5E0)
#define RPG_CLIENT_FLOORSAVEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19AEA560)
#define RPG_CLIENT_FLOORSAVEDDATA_GETFLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0x19AEA6D0)
#define RPG_CLIENT_FLOORSAVEDDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0x19AEA710)
#define RPG_CLIENT_FLOORSAVEDDATA_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x19AEA670)
#define RPG_CLIENT_FLOORSAVEDDATA_REGISTERONSAVEDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x19AEB1A0)
#define RPG_CLIENT_FLOORSAVEDDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19AEAE50)
#define RPG_CLIENT_FLOORSAVEDDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x19AEAA20)
#define RPG_CLIENT_FLOORSAVEDDATA_UNREGISTERONSAVEDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x19AEB380)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorSavedData_TypeDefinitionIndex = 63506;

	class FloorSavedData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GNJBNBIOLAJ*>* _SavedValuesByNameHash; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_CLEAR_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_ISEMPTY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GNJBNBIOLAJ*>* GetFloorSavedValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::GNJBNBIOLAJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_GETFLOORSAVEDVALUES_OFFSET))(this);
		}

		::System::Int16 GetValue(::System::String* a1, ::JBIGEIHIFDN* a2)
		{
			return ((::System::Int16(*)(::PVOID, ::System::String*, ::JBIGEIHIFDN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_GETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetValue(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddValue(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_ADDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetValue(::System::String* a1, ::System::Int16 a2, ::JBIGEIHIFDN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16, ::JBIGEIHIFDN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_SETVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterOnSavedValueChange(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_REGISTERONSAVEDVALUECHANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnregisterOnSavedValueChange(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORSAVEDDATA_UNREGISTERONSAVEDVALUECHANGE_OFFSET))(this, a1, a2);
		}

	};
}
