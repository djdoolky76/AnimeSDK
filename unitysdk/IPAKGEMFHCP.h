#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ParamExprType.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;

#define IPAKGEMFHCP_LKEDAANNIAL_OFFSET UNITYSDK_OFFSET(0x1651D2C0)

inline static constexpr unsigned int IPAKGEMFHCP_TypeDefinitionIndex = 82158;

	class IPAKGEMFHCP : public ::System::Object
	{
	public:
		static ::MCDOIAPPMBF* LKEDAANNIAL(::RPG::GameCore::ParamExprType a1, ::MCDOIAPPMBF* a2, ::MCDOIAPPMBF* a3)
		{
			return ((::MCDOIAPPMBF*(*)(::RPG::GameCore::ParamExprType, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + IPAKGEMFHCP_LKEDAANNIAL_OFFSET))(a1, a2, a3);
		}

	};
