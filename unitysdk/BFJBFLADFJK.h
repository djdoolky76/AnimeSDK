#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IONFMLHCJFJ;
class MOEMPPDFFLE;
namespace RPG::Client { class PedestrianMemberExternalConfig_MaterialShowParts; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFJBFLADFJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB16CD10)
#define BFJBFLADFJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB16D010)
#define BFJBFLADFJK_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB16D1B0)

inline static constexpr unsigned int BFJBFLADFJK_TypeDefinitionIndex = 69261;

	class BFJBFLADFJK : public ::System::Object
	{
	public:
		::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts* IGHAHBNLIJA; // 0x10
		::System::Collections::Generic::List_1<::IONFMLHCJFJ*>* AHMGINCDBJG; // 0x18
		::System::Void _ctor(::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts* a1, ::System::String* a2, ::MOEMPPDFFLE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts*, ::System::String*, ::MOEMPPDFFLE*))((::PBYTE)hIl2Cpp + BFJBFLADFJK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFLADFJK_DISPOSE_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFLADFJK_PKADDEPKJFN_OFFSET))(this);
		}

	};
