#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNBMAPNNDJL;

#define JIPCKPDMOCH_CTOR_OFFSET UNITYSDK_OFFSET(0x174284B0)
#define JIPCKPDMOCH_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x17428440)

inline static constexpr unsigned int JIPCKPDMOCH_TypeDefinitionIndex = 57266;

	class JIPCKPDMOCH : public ::System::Object
	{
	public:
		::System::Int32 PHDOPMDBHMO; // 0x10
		::System::Int32 FOBIANMEJKJ; // 0x14
		::System::Int32 JGEKNCNMHMP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPCKPDMOCH_CTOR_OFFSET))(this);
		}

		::KNBMAPNNDJL* HMPDCLHIPHI()
		{
			return ((::KNBMAPNNDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPCKPDMOCH_HMPDCLHIPHI_OFFSET))(this);
		}

	};
