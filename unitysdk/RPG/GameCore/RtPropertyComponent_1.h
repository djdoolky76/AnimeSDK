#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class BAPEBJHCHCC;
class FOAKMDKBOJJ;
class JEBFGDPAHDO;
class ODHMHHGKCJP;
namespace RPG::GameCore { template <typename T> class RtPropertyComponent_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtPropertyComponent_1_TypeDefinitionIndex = 54010;

	template <typename T>
	class RtPropertyComponent_1 : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::RtPropertyComponent_1<T>* _PropertyFollowTarget; // 0x0
		::BAPEBJHCHCC* _Mgr; // 0x0
		::Il2CppArray<::ODHMHHGKCJP*>* _Properties; // 0x0
		::JEBFGDPAHDO* _AnyPropertyListeners; // 0x0
		static ::FOAKMDKBOJJ** StaticGet_PropertyDescTable()
		{
			return (::FOAKMDKBOJJ**)UnitySDK::FromName("RPG.GameCore", "RtPropertyComponent`1")->GetStaticField(0x0);
		}

	};
}
