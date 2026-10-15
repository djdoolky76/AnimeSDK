#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJMEGHIEIN;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MNKMHNEAHLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA11590)
#define MNKMHNEAHLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA115D0)
#define MNKMHNEAHLA___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET UNITYSDK_OFFSET(0xBA115E0)

inline static constexpr unsigned int MNKMHNEAHLA___c_TypeDefinitionIndex = 81650;

	class MNKMHNEAHLA___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::BPJMEGHIEIN*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::BPJMEGHIEIN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11D80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11D88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNKMHNEAHLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKMHNEAHLA___C_CTOR_OFFSET))(this);
		}

		::System::Void _SendTrainCakeCatchCatGodInteractCsReq_b__2_0(::BPJMEGHIEIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJMEGHIEIN*))((::PBYTE)hIl2Cpp + MNKMHNEAHLA___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET))(this, a1);
		}

	};
