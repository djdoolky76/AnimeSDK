#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define JLIIPCHKOGK_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x1A093F10)
#define JLIIPCHKOGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A094080)

inline static constexpr unsigned int JLIIPCHKOGK_TypeDefinitionIndex = 85033;

	class JLIIPCHKOGK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIIPCHKOGK_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + JLIIPCHKOGK_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
