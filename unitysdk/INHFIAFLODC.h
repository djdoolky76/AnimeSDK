#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCMGMHEFMNH.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
class OAHMMNKIOFD;
namespace System { class String; }

#define INHFIAFLODC_CLDGGINEOFD_OFFSET UNITYSDK_OFFSET(0x208D78A0)
#define INHFIAFLODC_CTOR_OFFSET UNITYSDK_OFFSET(0x208DF1C0)

inline static constexpr unsigned int INHFIAFLODC_TypeDefinitionIndex = 44914;

	class INHFIAFLODC : public ::DCMGMHEFMNH
	{
	public:
		// static const ::System::String* LDHHNJHPLBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHFIAFLODC_CTOR_OFFSET))(this);
		}

		::OAHMMNKIOFD* CLDGGINEOFD(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Boolean a3)
		{
			return ((::OAHMMNKIOFD*(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + INHFIAFLODC_CLDGGINEOFD_OFFSET))(this, a1, a2, a3);
		}

	};
