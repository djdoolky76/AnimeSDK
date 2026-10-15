#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CADIPFIINMF_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xC1BE070)
#define CADIPFIINMF_CTOR_OFFSET UNITYSDK_OFFSET(0xC1BE130)

	class CADIPFIINMF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADIPFIINMF_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CADIPFIINMF_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
