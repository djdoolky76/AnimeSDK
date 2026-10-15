#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMOFEOFNLDC;

#define JMHEMBCIHCE_CTOR_OFFSET UNITYSDK_OFFSET(0xB260390)
#define JMHEMBCIHCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB260610)

inline static constexpr unsigned int JMHEMBCIHCE_TypeDefinitionIndex = 69568;

	class JMHEMBCIHCE : public ::System::Object
	{
	public:
		::JMOFEOFNLDC* HIIDFGCPGOK; // 0x10
		::JMOFEOFNLDC* APNCACEJIFC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHEMBCIHCE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHEMBCIHCE_DISPOSE_OFFSET))(this);
		}

	};
