#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define NMMDCJGKHOB_MHDKKGCIPNN_CDHNHBNKCOG_OFFSET UNITYSDK_OFFSET(0x11F892E0)
#define NMMDCJGKHOB_MHDKKGCIPNN_FEEOMFKKPMJ_OFFSET UNITYSDK_OFFSET(0x11F89330)
#define NMMDCJGKHOB_MHDKKGCIPNN__CTOR_OFFSET UNITYSDK_OFFSET(0x11F892D0)

inline static constexpr unsigned int NMMDCJGKHOB_MHDKKGCIPNN_TypeDefinitionIndex = 54813;

class NMMDCJGKHOB_MHDKKGCIPNN : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_MHDKKGCIPNN__CTOR_OFFSET))(this);
	}

	::System::Void CDHNHBNKCOG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_MHDKKGCIPNN_CDHNHBNKCOG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FEEOMFKKPMJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_MHDKKGCIPNN_FEEOMFKKPMJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
