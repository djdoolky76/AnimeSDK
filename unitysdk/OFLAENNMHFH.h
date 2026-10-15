#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFLAENNMHFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3E560)
#define OFLAENNMHFH_GET_RICHTEXTMESSAGENAME_OFFSET UNITYSDK_OFFSET(0xBE3E570)
#define OFLAENNMHFH_GET_RICHTEXTVALUEMAP_OFFSET UNITYSDK_OFFSET(0xBE3E5E0)

inline static constexpr unsigned int OFLAENNMHFH_TypeDefinitionIndex = 65038;

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
