#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;

#define MOMNMLHNPLH_BIKABOFADBP_OFFSET UNITYSDK_OFFSET(0x1D1DCAB0)
#define MOMNMLHNPLH_DCDDKNNINEB_OFFSET UNITYSDK_OFFSET(0x1D1DCA00)

inline static constexpr unsigned int MOMNMLHNPLH_TypeDefinitionIndex = 10815;

	class MOMNMLHNPLH : public ::System::Object
	{
	public:
		// static const ::System::Object HGNNBEIHKCC; // 0x0
		static ::System::Void DCDDKNNINEB(::FCOEMCEDLNL* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt64))((::PBYTE)hIl2Cpp + MOMNMLHNPLH_DCDDKNNINEB_OFFSET))(a1, a2);
		}

		static ::System::UInt64 BIKABOFADBP(::FCOEMCEDLNL* a1)
		{
			return ((::System::UInt64(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MOMNMLHNPLH_BIKABOFADBP_OFFSET))(a1);
		}

	};
