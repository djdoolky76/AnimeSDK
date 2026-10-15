#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NDIAIOGCDEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB49AF0)
#define NDIAIOGCDEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBB49B30)
#define NDIAIOGCDEL___C___CHECKACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBB49B40)

inline static constexpr unsigned int NDIAIOGCDEL___c_TypeDefinitionIndex = 65492;

	class NDIAIOGCDEL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D450);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDIAIOGCDEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIAIOGCDEL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckActive_b__1_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + NDIAIOGCDEL___C___CHECKACTIVE_B__1_0_OFFSET))(this, a1);
		}

	};
