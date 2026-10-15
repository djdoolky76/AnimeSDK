#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelRankData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define POBNHFMGBMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC358130)
#define POBNHFMGBMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC358160)
#define POBNHFMGBMO___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xC358170)

	class POBNHFMGBMO___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ChimeraDuelRankData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChimeraDuelRankData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POBNHFMGBMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBNHFMGBMO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__1_0(::RPG::Client::ChimeraDuelRankData* a1, ::RPG::Client::ChimeraDuelRankData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelRankData*, ::RPG::Client::ChimeraDuelRankData*))((::PBYTE)hIl2Cpp + POBNHFMGBMO___C___CTOR_B__1_0_OFFSET))(this, a1, a2);
		}

	};
