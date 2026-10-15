#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BPKHHEBKEOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC1A70B0)
#define BPKHHEBKEOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A70F0)
#define BPKHHEBKEOH___C___TRYAPPLY_B__5_1_OFFSET UNITYSDK_OFFSET(0xC1A7100)

inline static constexpr unsigned int BPKHHEBKEOH___c_TypeDefinitionIndex = 77449;

	class BPKHHEBKEOH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB7D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB7D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPKHHEBKEOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKHHEBKEOH___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __TryApply_b__5_1(::RPG::Client::ChimeraDuelChimeraData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + BPKHHEBKEOH___C___TRYAPPLY_B__5_1_OFFSET))(this, a1);
		}

	};
