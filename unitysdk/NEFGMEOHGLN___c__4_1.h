#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

inline static constexpr unsigned int NEFGMEOHGLN___c__4_1_TypeDefinitionIndex = 49949;

	template <typename T>
	class NEFGMEOHGLN___c__4_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c__4`1")->GetStaticField(0x0);
		}

		static ::System::Action_2<::RPG::Client::LocalizedText*, ::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*>>** StaticGet___9__4_0()
		{
			return (::System::Action_2<::RPG::Client::LocalizedText*, ::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*>>**)UnitySDK::FromName("", "<>c__4`1")->GetStaticField(0x0);
		}

	};
