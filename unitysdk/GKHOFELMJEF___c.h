#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GKHOFELMJEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8D3B20)
#define GKHOFELMJEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D3B60)
#define GKHOFELMJEF___C___GETREMOVEDAFFIXNAME_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A8D3B70)

inline static constexpr unsigned int GKHOFELMJEF___c_TypeDefinitionIndex = 48219;

	class GKHOFELMJEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70220);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHOFELMJEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHOFELMJEF___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetRemovedAffixName_b__8_0(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + GKHOFELMJEF___C___GETREMOVEDAFFIXNAME_B__8_0_OFFSET))(this, a1);
		}

	};
