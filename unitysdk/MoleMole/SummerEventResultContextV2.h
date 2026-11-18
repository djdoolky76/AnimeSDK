#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKHCGCJIMHC.h"
#include "unitysdk/MoleMole/UIHollowHollowLayerResultDialogContext.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"

class NFGHOLFKEPK;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ADD_OFFSET UNITYSDK_OFFSET(0x19CEFC60)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_EXITGAME_OFFSET UNITYSDK_OFFSET(0x19CEFB50)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_RANK_OFFSET UNITYSDK_OFFSET(0x19CEFC50)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0x19CEFD10)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_HANDLERESPONSE_OFFSET UNITYSDK_OFFSET(0x19CEF940)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_RESTART_OFFSET UNITYSDK_OFFSET(0x19CEF7F0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ROWDATA_OFFSET UNITYSDK_OFFSET(0x19CEFEF0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEF6E0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultContextV2_TypeDefinitionIndex = 71262;

	class SummerEventResultContextV2 : public ::MoleMole::UIHollowHollowLayerResultDialogContext
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* _items; // 0x40
		::JKHCGCJIMHC _Rank_k__BackingField; // 0x48

		::System::Void _ctor(::MoleMole::UILevelResultPageContext* context, ::JKHCGCJIMHC rank)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultPageContext*, ::JKHCGCJIMHC))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2__CTOR_OFFSET))(this, context, rank);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_RESTART_OFFSET))(this);
		}

		static ::System::Void HandleResponse(::NFGHOLFKEPK* msg)
		{
			return ((::System::Void(*)(::NFGHOLFKEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_HANDLERESPONSE_OFFSET))(msg);
		}

		static ::System::Void ExitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_EXITGAME_OFFSET))();
		}

		::JKHCGCJIMHC get_Rank()
		{
			return ((::JKHCGCJIMHC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_RANK_OFFSET))(this);
		}

		::System::Void Add(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ADD_OFFSET))(this, key, value);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_RowDataList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_GET_ROWDATALIST_OFFSET))(this);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData RowData(::System::String* key, ::System::String* value)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXTV2_ROWDATA_OFFSET))(key, value);
		}
	};
}
