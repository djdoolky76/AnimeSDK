#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ENKPMMANABG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x155B1DF0)
#define ENKPMMANABG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x155B1E30)
#define ENKPMMANABG___C___CHECKACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0x155B1E40)

	class ENKPMMANABG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51F40);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENKPMMANABG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKPMMANABG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckActive_b__1_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + ENKPMMANABG___C___CHECKACTIVE_B__1_0_OFFSET))(this, a1);
		}

	};
