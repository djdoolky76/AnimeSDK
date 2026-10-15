#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define BFBAKDHCMGG_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xB15DF20)
#define BFBAKDHCMGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB15DFF0)

	class BFBAKDHCMGG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBAKDHCMGG_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + BFBAKDHCMGG_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
