#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Sofa { class BaseSofaControl; }
namespace System { class Type; }

#define PJANKEKLDKA_KEIJKAPOEOE_1_OFFSET UNITYSDK_OFFSET(0xC272660)
#define PJANKEKLDKA_KPLLACOKKKL_1_OFFSET UNITYSDK_OFFSET(0xC2725F0)
#define PJANKEKLDKA_KPLLACOKKKL_OFFSET UNITYSDK_OFFSET(0xC272340)

inline static constexpr unsigned int PJANKEKLDKA_TypeDefinitionIndex = 49683;

	class PJANKEKLDKA : public ::System::Object
	{
	public:
		static ::System::Type* KPLLACOKKKL(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + PJANKEKLDKA_KPLLACOKKKL_OFFSET))(a1);
		}

		static ::System::Type* KPLLACOKKKL_1(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Type*(*)(::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + PJANKEKLDKA_KPLLACOKKKL_1_OFFSET))(a1);
		}

		static ::System::Boolean KEIJKAPOEOE_1(::Sofa::BaseSofaControl* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::Sofa::BaseSofaControl*, ::System::Type*))((::PBYTE)hIl2Cpp + PJANKEKLDKA_KEIJKAPOEOE_1_OFFSET))(a1, a2);
		}

	};
