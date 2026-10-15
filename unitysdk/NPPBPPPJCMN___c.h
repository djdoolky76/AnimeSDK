#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateBuffData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPPBPPPJCMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD0C870)
#define NPPBPPPJCMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBD0C8B0)
#define NPPBPPPJCMN___C__EVALUATE_B__1_1_OFFSET UNITYSDK_OFFSET(0xBD0C8C0)

inline static constexpr unsigned int NPPBPPPJCMN___c_TypeDefinitionIndex = 64137;

	class NPPBPPPJCMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55D10);
		}

		static ::System::Func_2<::RPG::Client::FateBuffData*, ::System::Int64>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::FateBuffData*, ::System::Int64>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPBPPPJCMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBPPPJCMN___C_CTOR_OFFSET))(this);
		}

		::System::Int64 _Evaluate_b__1_1(::RPG::Client::FateBuffData* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + NPPBPPPJCMN___C__EVALUATE_B__1_1_OFFSET))(this, a1);
		}

	};
