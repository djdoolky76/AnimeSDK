#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IEntity; }

#define OPIEELJKGKM_BFGOLGGEKOD_OFFSET UNITYSDK_OFFSET(0x1C7B7ED0)

inline static constexpr unsigned int OPIEELJKGKM_TypeDefinitionIndex = 37012;

	class OPIEELJKGKM : public ::System::Object
	{
	public:
		static ::System::Int32 BFGOLGGEKOD(::Entitas::IEntity* a1)
		{
			return ((::System::Int32(*)(::Entitas::IEntity*))((::PBYTE)hIl2Cpp + OPIEELJKGKM_BFGOLGGEKOD_OFFSET))(a1);
		}

	};
