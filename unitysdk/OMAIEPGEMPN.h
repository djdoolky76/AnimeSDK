#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJHCGAGNIKN;
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define OMAIEPGEMPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC94200)

inline static constexpr unsigned int OMAIEPGEMPN_TypeDefinitionIndex = 43881;

	class OMAIEPGEMPN : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::LJHCGAGNIKN*>** StaticGet_HFDLNJKMNKI()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::LJHCGAGNIKN*>**)UnitySDK::FromName("", "OMAIEPGEMPN")->GetStaticField(0xFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMAIEPGEMPN_CCTOR_OFFSET))();
		}

	};
