#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKOGPFKEOEI;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD3A4D00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___C__DISPLAYCLASS1_0__SETDEFAULTCONTENTID_B__0_OFFSET UNITYSDK_OFFSET(0xD3A5BD0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 80456;

	class LimaoNewsInterviewDetailViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::GKOGPFKEOEI*>* __9__0; // 0x10
		::System::UInt32 defaultContentID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SetDefaultContentID_b__0(::GKOGPFKEOEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKOGPFKEOEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___C__DISPLAYCLASS1_0__SETDEFAULTCONTENTID_B__0_OFFSET))(this, a1);
		}

	};
}
