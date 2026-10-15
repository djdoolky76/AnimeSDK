#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJHCGAGNIKN;
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define JGNNDCJGPDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC64E80)

inline static constexpr unsigned int JGNNDCJGPDA_TypeDefinitionIndex = 43883;

	class JGNNDCJGPDA : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::LJHCGAGNIKN*>** StaticGet_HFDLNJKMNKI()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::LJHCGAGNIKN*>**)UnitySDK::FromName("", "JGNNDCJGPDA")->GetStaticField(0xF80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGNNDCJGPDA_CCTOR_OFFSET))();
		}

	};
