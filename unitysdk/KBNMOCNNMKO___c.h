#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EvolveBuildCard; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define KBNMOCNNMKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBADD50)
#define KBNMOCNNMKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBBADD80)
#define KBNMOCNNMKO___C__CREATECARDS_B__1_0_OFFSET UNITYSDK_OFFSET(0xBBADD90)

inline static constexpr unsigned int KBNMOCNNMKO___c_TypeDefinitionIndex = 65236;

	class KBNMOCNNMKO___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::EvolveBuildCard*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::EvolveBuildCard*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29290);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNMOCNNMKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNMOCNNMKO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateCards_b__1_0(::RPG::Client::EvolveBuildCard* a1, ::RPG::Client::EvolveBuildCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCard*, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + KBNMOCNNMKO___C__CREATECARDS_B__1_0_OFFSET))(this, a1, a2);
		}

	};
