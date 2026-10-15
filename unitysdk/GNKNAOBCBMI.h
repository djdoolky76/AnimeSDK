#pragma once
#include "unitysdk/unitysdk.h"
class MOBLPGFPLEM;

#define GNKNAOBCBMI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B09860)
#define GNKNAOBCBMI_HCPBEPBKKGF_OFFSET UNITYSDK_OFFSET(0x15B09EB0)
#define GNKNAOBCBMI__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x15B09F00)
#define GNKNAOBCBMI__REBUILD_OFFSET UNITYSDK_OFFSET(0x15B098F0)

inline static constexpr unsigned int GNKNAOBCBMI_TypeDefinitionIndex = 75120;

	class GNKNAOBCBMI
	{
	public:
		::MOBLPGFPLEM* BIJLLNCPOKD; // 0x20
		::System::UInt32 FFFFJCOACPK; // 0x28
		::System::Void _ctor(::MOBLPGFPLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOBLPGFPLEM*))((::PBYTE)hIl2Cpp + GNKNAOBCBMI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKNAOBCBMI__REBUILD_OFFSET))(this);
		}

		::System::Void HCPBEPBKKGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKNAOBCBMI_HCPBEPBKKGF_OFFSET))(this);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKNAOBCBMI__CHECKNEEDREBUILD_OFFSET))(this);
		}

	};
