#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CJNDKGKDLLP_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xE08A770)
#define CJNDKGKDLLP_CTOR_OFFSET UNITYSDK_OFFSET(0xE08A7F0)

inline static constexpr unsigned int CJNDKGKDLLP_TypeDefinitionIndex = 65585;

	class CJNDKGKDLLP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNDKGKDLLP_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CJNDKGKDLLP_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
