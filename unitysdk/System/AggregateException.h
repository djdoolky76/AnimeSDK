#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
class E98AF858C32293BC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class FAC5EDF6DB9C4EFE;

#define SYSTEM_AGGREGATEEXCEPTION_FLATTEN_OFFSET UNITYSDK_OFFSET(0x3B75160)
#define SYSTEM_AGGREGATEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3B75390)
#define SYSTEM_AGGREGATEEXCEPTION_GET_INNEREXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x17919E0)
#define SYSTEM_AGGREGATEEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3B76310)
#define SYSTEM_AGGREGATEEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B754D0)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B75AC0)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B75C40)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B761C0)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3B75720)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x3B76210)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x3B759D0)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x3B75FD0)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x3B75AB0)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x3B75B80)
#define SYSTEM_AGGREGATEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B75EF0)

namespace System
{
	inline static constexpr unsigned int AggregateException_TypeDefinitionIndex = 11033;

	class AggregateException : public ::System::Exception
	{
	public:
		::FAC5EDF6DB9C4EFE<::System::Exception*>* m_innerExceptions; // 0x90

		::System::AggregateException* Flatten()
		{
			return ((::System::AggregateException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_FLATTEN_OFFSET))(this);
		}

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::E98AF858C32293BC*>* B38DEEE6D14A721D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::E98AF858C32293BC*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_OFFSET))(this, B38DEEE6D14A721D);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4, ::System::Collections::Generic::IEnumerable_1<::E98AF858C32293BC*>* B38DEEE6D14A721D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::E98AF858C32293BC*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4, B38DEEE6D14A721D);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4, ::System::Collections::Generic::IList_1<::System::Exception*>* A6A1B335A7C98BEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4, A6A1B335A7C98BEA);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Exception*>* A6A1B335A7C98BEA)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_3_OFFSET))(this, A6A1B335A7C98BEA);
		}

		::System::Void _ctor_4(::System::String* B083BE7841B347C4, ::System::Collections::Generic::IList_1<::E98AF858C32293BC*>* B38DEEE6D14A721D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::E98AF858C32293BC*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_4_OFFSET))(this, B083BE7841B347C4, B38DEEE6D14A721D);
		}

		::System::Void _ctor_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_5_OFFSET))(this);
		}

		::FAC5EDF6DB9C4EFE<::System::Exception*>* get_InnerExceptions()
		{
			return ((::FAC5EDF6DB9C4EFE<::System::Exception*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GET_INNEREXCEPTIONS_OFFSET))(this);
		}

		::System::Void _ctor_6(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* A6A1B335A7C98BEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_6_OFFSET))(this, A6A1B335A7C98BEA);
		}

		::System::Void _ctor_7(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_7_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_8(::System::String* B083BE7841B347C4, ::Il2CppArray<::System::Exception*>* A6A1B335A7C98BEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_8_OFFSET))(this, B083BE7841B347C4, A6A1B335A7C98BEA);
		}

		::System::Void _ctor_9(::System::String* B083BE7841B347C4, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* A6A1B335A7C98BEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION__CTOR_9_OFFSET))(this, B083BE7841B347C4, A6A1B335A7C98BEA);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
