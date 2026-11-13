#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFLAENNMHFH_CTOR_OFFSET UNITYSDK_OFFSET(0x18DEBF50)
#define OFLAENNMHFH_GET_RICHTEXTMESSAGENAME_OFFSET UNITYSDK_OFFSET(0x18DEBF60)
#define OFLAENNMHFH_GET_RICHTEXTVALUEMAP_OFFSET UNITYSDK_OFFSET(0x18DEBFD0)

inline static constexpr unsigned int OFLAENNMHFH_TypeDefinitionIndex = 66643;

	class OFLAENNMHFH : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + OFLAENNMHFH_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_RichTextMessageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLAENNMHFH_GET_RICHTEXTMESSAGENAME_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* get_RichTextValueMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLAENNMHFH_GET_RICHTEXTVALUEMAP_OFFSET))(this);
		}

	};
