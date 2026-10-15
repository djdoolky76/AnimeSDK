#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define JNJGIGCFOFO_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xB286320)
#define JNJGIGCFOFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2863A0)

	class JNJGIGCFOFO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJGIGCFOFO_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + JNJGIGCFOFO_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
