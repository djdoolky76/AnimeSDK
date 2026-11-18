#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PPAAHJMDPAO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJKGAKEAJHD_BGANJGJGIMK_OFFSET UNITYSDK_OFFSET(0x14DB8200)
#define LJKGAKEAJHD_FJJFMHBANNM_OFFSET UNITYSDK_OFFSET(0x14DB8190)
#define LJKGAKEAJHD_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x14DB8360)

inline static constexpr unsigned int LJKGAKEAJHD_TypeDefinitionIndex = 81323;

class LJKGAKEAJHD : public ::System::Object
{
public:
	static ::Cysharp::Threading::Tasks::UniTaskVoid FJJFMHBANNM(::PPAAHJMDPAO* HHHNJIMDFOG)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PPAAHJMDPAO*))((::PBYTE)hIl2Cpp + LJKGAKEAJHD_FJJFMHBANNM_OFFSET))(HHHNJIMDFOG);
	}

	static ::System::Void BGANJGJGIMK(::PPAAHJMDPAO* HHHNJIMDFOG, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IGAAKDOIPNN, ::System::Int32 KHCOCCKOFHI)
	{
		return ((::System::Void(*)(::PPAAHJMDPAO*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + LJKGAKEAJHD_BGANJGJGIMK_OFFSET))(HHHNJIMDFOG, IGAAKDOIPNN, KHCOCCKOFHI);
	}

	static ::System::Void MBKDOMFJFIG(::PPAAHJMDPAO* HHHNJIMDFOG)
	{
		return ((::System::Void(*)(::PPAAHJMDPAO*))((::PBYTE)hIl2Cpp + LJKGAKEAJHD_MBKDOMFJFIG_OFFSET))(HHHNJIMDFOG);
	}
};
