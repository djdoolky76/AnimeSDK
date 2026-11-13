#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class BLLEONBDOMJ;
class ENFDMFGIJDC;

#define FJFAMKEMGFO_NKCKKFAHKNN_OFFSET UNITYSDK_OFFSET(0x19821CA0)

inline static constexpr unsigned int FJFAMKEMGFO_TypeDefinitionIndex = 80721;

	class FJFAMKEMGFO : public ::System::Object
	{
	public:
		static ::BLLEONBDOMJ* NKCKKFAHKNN(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::BLLEONBDOMJ*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + FJFAMKEMGFO_NKCKKFAHKNN_OFFSET))(a1, a2);
		}

	};
