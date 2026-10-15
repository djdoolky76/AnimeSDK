#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class ILILKFMOKEB;
class JPMKMMMGNJN;

#define AELJNMLKHFK_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1C8793E0)
#define AELJNMLKHFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8792D0)
#define AELJNMLKHFK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C8792E0)
#define AELJNMLKHFK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1C879390)

inline static constexpr unsigned int AELJNMLKHFK_TypeDefinitionIndex = 42527;

	class AELJNMLKHFK : public ::System::Object
	{
	public:
		::ILILKFMOKEB* PJJIDEMDPAP; // 0x10
		::JPMKMMMGNJN* PDENFEFCAGN; // 0x18
		::FDPALAEIHPB* FKINCGODJEP; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::JPMKMMMGNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::JPMKMMMGNJN*))((::PBYTE)hIl2Cpp + AELJNMLKHFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELJNMLKHFK_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELJNMLKHFK_TEARDOWN_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELJNMLKHFK_CLEANUP_OFFSET))(this);
		}

	};
