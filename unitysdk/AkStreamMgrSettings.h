#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkStreamMgrSettings;

#define AKSTREAMMGRSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x208B9B40)
#define AKSTREAMMGRSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x208B9DE0)
#define AKSTREAMMGRSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x208B9C00)
#define AKSTREAMMGRSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x208B9D10)
#define AKSTREAMMGRSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x208B9B50)
#define AKSTREAMMGRSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x208B9BA0)

inline static constexpr unsigned int AkStreamMgrSettings_TypeDefinitionIndex = 45866;

	class AkStreamMgrSettings : public ::System::Object
	{
	public:
		::System::Boolean swigCMemOwn; // 0x10
		::System::Byte _padding0[0x7];
		::System::IntPtr swigCPtr; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::IntPtr getCPtr(::AkStreamMgrSettings* a1)
		{
			return ((::System::IntPtr(*)(::AkStreamMgrSettings*))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_DISPOSE_1_OFFSET))(this, a1);
		}

	};
