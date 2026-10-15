#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CBAJOJJBMMA_CTOR_OFFSET UNITYSDK_OFFSET(0xC49D6F0)

inline static constexpr unsigned int CBAJOJJBMMA_TypeDefinitionIndex = 48929;

	class CBAJOJJBMMA : public ::System::Object
	{
	public:
		::System::String* Description; // 0x10
		::System::String* Name; // 0x18
		::System::String* ConnectedPath; // 0x20
		::Il2CppArray<::System::Single>* Direction; // 0x28
		::Il2CppArray<::System::Single>* LocalPos; // 0x30
		::System::String* Id; // 0x38
		::System::Nullable_1<::System::Single> Radius; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAJOJJBMMA_CTOR_OFFSET))(this);
		}

	};
