#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHKGGCKICFI.h"
#include "unitysdk/System/Object.h"
class NOICEJKDOLF;
namespace RPG::GameCore { class ComicDessertForumCommentRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILLCGJBGEPK_AEFACGHJOOA_OFFSET UNITYSDK_OFFSET(0x1B5AA260)
#define ILLCGJBGEPK_CMDKBLLNMIB_OFFSET UNITYSDK_OFFSET(0x1B5AA920)
#define ILLCGJBGEPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5AAAA0)
#define ILLCGJBGEPK_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0x1B5AA370)

inline static constexpr unsigned int ILLCGJBGEPK_TypeDefinitionIndex = 77155;

	class ILLCGJBGEPK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::EHKGGCKICFI, ::NOICEJKDOLF*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLCGJBGEPK_CTOR_OFFSET))(this);
		}

		::NOICEJKDOLF* AEFACGHJOOA(::EHKGGCKICFI a1)
		{
			return ((::NOICEJKDOLF*(*)(::PVOID, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + ILLCGJBGEPK_AEFACGHJOOA_OFFSET))(this, a1);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLCGJBGEPK_HHNFFFMBIKD_OFFSET))(this);
		}

		static ::NOICEJKDOLF* CMDKBLLNMIB(::RPG::GameCore::ComicDessertForumCommentRow* a1, ::System::Collections::Generic::Dictionary_2<::EHKGGCKICFI, ::System::Collections::Generic::List_1<::EHKGGCKICFI>*>* a2)
		{
			return ((::NOICEJKDOLF*(*)(::RPG::GameCore::ComicDessertForumCommentRow*, ::System::Collections::Generic::Dictionary_2<::EHKGGCKICFI, ::System::Collections::Generic::List_1<::EHKGGCKICFI>*>*))((::PBYTE)hIl2Cpp + ILLCGJBGEPK_CMDKBLLNMIB_OFFSET))(a1, a2);
		}

	};
