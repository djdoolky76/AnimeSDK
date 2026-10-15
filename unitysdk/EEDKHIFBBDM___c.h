#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class VoracityInvasionProgressBuffData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EEDKHIFBBDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x13A2AD00)
#define EEDKHIFBBDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2AD40)
#define EEDKHIFBBDM___C__GETSORTEDBUFFLIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x13A2AD50)

inline static constexpr unsigned int EEDKHIFBBDM___c_TypeDefinitionIndex = 68269;

	class EEDKHIFBBDM___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::VoracityInvasionProgressBuffData*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::VoracityInvasionProgressBuffData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FEF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FEF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEDKHIFBBDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDKHIFBBDM___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedBuffList_b__2_0(::RPG::Client::VoracityInvasionProgressBuffData* a1, ::RPG::Client::VoracityInvasionProgressBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::VoracityInvasionProgressBuffData*, ::RPG::Client::VoracityInvasionProgressBuffData*))((::PBYTE)hIl2Cpp + EEDKHIFBBDM___C__GETSORTEDBUFFLIST_B__2_0_OFFSET))(this, a1, a2);
		}

	};
