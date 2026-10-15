#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }

#define MLDCHIAKLOC_NNFCCNGKPBI_OFFSET UNITYSDK_OFFSET(0xB9A7050)

inline static constexpr unsigned int MLDCHIAKLOC_TypeDefinitionIndex = 72996;

	class MLDCHIAKLOC : public ::System::Object
	{
	public:
		static ::Sofa::BaseSofaWindow* NNFCCNGKPBI(::Sofa::BaseSofaWindow* a1, ::Sofa::BaseSofaUI3DWindow* a2)
		{
			return ((::Sofa::BaseSofaWindow*(*)(::Sofa::BaseSofaWindow*, ::Sofa::BaseSofaUI3DWindow*))((::PBYTE)hIl2Cpp + MLDCHIAKLOC_NNFCCNGKPBI_OFFSET))(a1, a2);
		}

	};
