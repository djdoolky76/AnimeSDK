#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class BKFOHAKAJLP;

#define NEIPCLPIJIB_NKCKKFAHKNN_OFFSET UNITYSDK_OFFSET(0xBB58650)

inline static constexpr unsigned int NEIPCLPIJIB_TypeDefinitionIndex = 78005;

	class NEIPCLPIJIB : public ::System::Object
	{
	public:
		static ::BKFOHAKAJLP* NKCKKFAHKNN(::AGCPAMNLCGN* a1, ::System::UInt64 a2)
		{
			return ((::BKFOHAKAJLP*(*)(::AGCPAMNLCGN*, ::System::UInt64))((::PBYTE)hIl2Cpp + NEIPCLPIJIB_NKCKKFAHKNN_OFFSET))(a1, a2);
		}

	};
