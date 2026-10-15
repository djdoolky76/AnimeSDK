#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNJBNBIOLAJ;
class JBIGEIHIFDN;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FLOORSAVEDDATA_ADDVALUE_OFFSET UNITYSDK_OFFSET(0xD03EA50)
#define RPG_CLIENT_FLOORSAVEDDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xD03E480)
#define RPG_CLIENT_FLOORSAVEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD03E400)
#define RPG_CLIENT_FLOORSAVEDDATA_GETFLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0xD03E570)
#define RPG_CLIENT_FLOORSAVEDDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0xD03E5B0)
#define RPG_CLIENT_FLOORSAVEDDATA_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xD03E510)
#define RPG_CLIENT_FLOORSAVEDDATA_REGISTERONSAVEDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xD03F040)
#define RPG_CLIENT_FLOORSAVEDDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD03ECF0)
#define RPG_CLIENT_FLOORSAVEDDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xD03E8C0)
#define RPG_CLIENT_FLOORSAVEDDATA_UNREGISTERONSAVEDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xD03F220)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorSavedData_TypeDefinitionIndex = 62093;

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
