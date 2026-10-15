#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define ILFMALDFDGO_CTOR_OFFSET UNITYSDK_OFFSET(0x164B02D0)
#define ILFMALDFDGO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x164B0810)

inline static constexpr unsigned int ILFMALDFDGO_TypeDefinitionIndex = 82283;

	class ILFMALDFDGO : public ::KAANKGHDHCB
	{
	public:
		::System::String* IIHFKAGKEMC; // 0x20
		::System::String* JIBMHCAGPNC; // 0x28
		::System::Single MINCCILIJNN; // 0x30
		::System::Boolean PAMMJBPMBMN; // 0x34
		::System::Boolean FBLABDAPFNK; // 0x35
		::System::Boolean GGCOENFCMOF; // 0x36
		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + ILFMALDFDGO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFMALDFDGO_HKKFFCBJOKM_OFFSET))(this);
		}

	};
