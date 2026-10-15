#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MatchThreeTemplateApplyRuleRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLBCLDOFCKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA2FC0)

inline static constexpr unsigned int JLBCLDOFCKH_TypeDefinitionIndex = 42234;

	class JLBCLDOFCKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::MatchThreeTemplateApplyRuleRow*>*>* DBEFEPBMBAK; // 0x10
		::System::String* FCGFFAJIBKA; // 0x18
		::System::UInt32 NNKJHABLACH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCLDOFCKH_CTOR_OFFSET))(this);
		}

	};
