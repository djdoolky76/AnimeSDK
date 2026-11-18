#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNJEGEPBDPJ;
class EEEKNFFACJC;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UTILS_MONSTERCARDUTILS_GETCARDCOST_OFFSET UNITYSDK_OFFSET(0x13EB1D50)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS_GETMONSTERGROUPBYCARD_OFFSET UNITYSDK_OFFSET(0x13EB1150)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS_ISVALIDCARD_OFFSET UNITYSDK_OFFSET(0x13EB1BD0)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS_SORTMONSTERCARD_OFFSET UNITYSDK_OFFSET(0x13EB1200)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int MonsterCardUtils_TypeDefinitionIndex = 48898;

	class MonsterCardUtils : public ::System::Object
	{
	public:
		// static const ::System::String* DefaultMonsterCardGroupName; // 0x0

		static ::EEEKNFFACJC* GetMonsterGroupByCard(::System::Int32 cardId)
		{
			return ((::EEEKNFFACJC*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_GETMONSTERGROUPBYCARD_OFFSET))(cardId);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* SortMonsterCard(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* cardList, ::System::Func_2<::System::Int32, ::EEEKNFFACJC*>* getMonsterGroupByCardFunc)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::EEEKNFFACJC*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_SORTMONSTERCARD_OFFSET))(cardList, getMonsterGroupByCardFunc);
		}

		static ::System::Boolean IsValidCard(::System::Int32 cardId)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_ISVALIDCARD_OFFSET))(cardId);
		}

		static ::System::Int32 GetCardCost(::DNJEGEPBDPJ* template_)
		{
			return ((::System::Int32(*)(::DNJEGEPBDPJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_GETCARDCOST_OFFSET))(template_);
		}
	};
}
