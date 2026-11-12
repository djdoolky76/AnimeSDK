#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int DMPKDJKCHIL___O_TypeDefinitionIndex = 67193;

	class DMPKDJKCHIL___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::GameCore::FixPoint>** StaticGet__0____GetSortSpeed()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x587C0);
		}

	};
