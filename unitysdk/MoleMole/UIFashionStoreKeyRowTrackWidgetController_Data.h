#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PONBOHIGCJP_CNBLLJPHHGB;
class PONBOHIGCJP_LLMEMHEPIPF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_ADD_OFFSET UNITYSDK_OFFSET(0x1801B200)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_GET_FASHIONSTOREDATA_OFFSET UNITYSDK_OFFSET(0x1801AE20)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_GET_NOTES_OFFSET UNITYSDK_OFFSET(0x1801AE00)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_RESET_OFFSET UNITYSDK_OFFSET(0x1801AE40)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_SET_FASHIONSTOREDATA_OFFSET UNITYSDK_OFFSET(0x1801AE30)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_SET_NOTES_OFFSET UNITYSDK_OFFSET(0x1801AE10)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1801B4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyRowTrackWidgetController_Data_TypeDefinitionIndex = 69603;

	class UIFashionStoreKeyRowTrackWidgetController_Data : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _Notes_k__BackingField; // 0x10
		::PONBOHIGCJP_CNBLLJPHHGB* _FashionStoreData_k__BackingField; // 0x18
		::System::Action_1<::System::Object*>* OnTrackItemClick; // 0x20
		::System::Int32 BarIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_Notes()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_GET_NOTES_OFFSET))(this);
		}

		::System::Void set_Notes(::System::Collections::Generic::List_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_SET_NOTES_OFFSET))(this, value);
		}

		::PONBOHIGCJP_CNBLLJPHHGB* get_FashionStoreData()
		{
			return ((::PONBOHIGCJP_CNBLLJPHHGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_GET_FASHIONSTOREDATA_OFFSET))(this);
		}

		::System::Void set_FashionStoreData(::PONBOHIGCJP_CNBLLJPHHGB* value)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_CNBLLJPHHGB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_SET_FASHIONSTOREDATA_OFFSET))(this, value);
		}

		::System::Void Reset(::System::Int32 barIndex, ::System::Int32 dataCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_RESET_OFFSET))(this, barIndex, dataCount);
		}

		::System::Void Add(::PONBOHIGCJP_LLMEMHEPIPF* addData)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_LLMEMHEPIPF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_DATA_ADD_OFFSET))(this, addData);
		}
	};
}
