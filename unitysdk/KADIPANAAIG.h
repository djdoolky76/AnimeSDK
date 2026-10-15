#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define KADIPANAAIG_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xB2D2BA0)
#define KADIPANAAIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D2CA0)

inline static constexpr unsigned int KADIPANAAIG_TypeDefinitionIndex = 82159;

	class KADIPANAAIG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADIPANAAIG_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + KADIPANAAIG_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
