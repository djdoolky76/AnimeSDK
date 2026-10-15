#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PPIDDPLCCHI_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3873D0)

inline static constexpr unsigned int PPIDDPLCCHI_TypeDefinitionIndex = 73872;

	class PPIDDPLCCHI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>** StaticGet_EAAFHBCOLCH()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>**)UnitySDK::FromName("", "PPIDDPLCCHI")->GetStaticField(0xD120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPIDDPLCCHI_CCTOR_OFFSET))();
		}

	};
