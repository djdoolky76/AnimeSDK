#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJLAGKHGAOL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15638BD0)
#define MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15638C10)
#define MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__REFRESHSELECTEDVIEW_B__13_1_OFFSET UNITYSDK_OFFSET(0x15638C20)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleRewardListPopWindowController___c_TypeDefinitionIndex = 85495;

	class UITriDiceOracleRewardListPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NJLAGKHGAOL*, ::System::Int32>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::NJLAGKHGAOL*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleRewardListPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48DF0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleRewardListPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48DF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshSelectedView_b__13_1(::NJLAGKHGAOL* reward)
		{
			return ((::System::Int32(*)(::PVOID, ::NJLAGKHGAOL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__REFRESHSELECTEDVIEW_B__13_1_OFFSET))(this, reward);
		}
	};
}
