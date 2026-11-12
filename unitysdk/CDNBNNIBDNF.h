#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDNBNNIBDNF;
class OODACBBPJEJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CDNBNNIBDNF_COAHELMPGLI_OFFSET UNITYSDK_OFFSET(0xD0D8AC0)
#define CDNBNNIBDNF_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D8A90)
#define CDNBNNIBDNF_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xD0D8AB0)
#define CDNBNNIBDNF_GET_TALKGROUPID_OFFSET UNITYSDK_OFFSET(0xD0D8AA0)

inline static constexpr unsigned int CDNBNNIBDNF_TypeDefinitionIndex = 77064;

	class CDNBNNIBDNF : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::OODACBBPJEJ*>* _Entries_k__BackingField; // 0x10
		::System::UInt32 _TalkGroupId_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::OODACBBPJEJ*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::OODACBBPJEJ*>*))((::PBYTE)hIl2Cpp + CDNBNNIBDNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_TalkGroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNBNNIBDNF_GET_TALKGROUPID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::OODACBBPJEJ*>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::OODACBBPJEJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNBNNIBDNF_GET_ENTRIES_OFFSET))(this);
		}

		static ::CDNBNNIBDNF* COAHELMPGLI(::System::UInt32 a1)
		{
			return ((::CDNBNNIBDNF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CDNBNNIBDNF_COAHELMPGLI_OFFSET))(a1);
		}

	};
