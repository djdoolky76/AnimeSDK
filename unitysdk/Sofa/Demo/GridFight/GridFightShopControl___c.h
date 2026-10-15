#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFKBKMDMAEM.h"
#include "unitysdk/System/Object.h"
class BKJKLNIIMFM;
class CEEGMMCFCBG;
class EHBJBLKFBEA;
class EMHMHPFOBKI;
class FILMPEEMJED;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE97CFA0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE97CFE0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C___BINDING_B__3_0_OFFSET UNITYSDK_OFFSET(0xE97CFF0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C___BINDING_B__3_1_OFFSET UNITYSDK_OFFSET(0xE97D010)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C___POPULATING_B__4_0_OFFSET UNITYSDK_OFFSET(0xE97D030)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C___POPULATING_B__4_1_OFFSET UNITYSDK_OFFSET(0xE97D050)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightShopControl___c_TypeDefinitionIndex = 49710;

	class GridFightShopControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::LFKBKMDMAEM, ::CEEGMMCFCBG*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::LFKBKMDMAEM, ::CEEGMMCFCBG*>**)UnitySDK::FromName("Sofa.Demo.GridFight", "<>c")->GetStaticField(0xCD50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Sofa.Demo.GridFight", "<>c")->GetStaticField(0xCD58);
		}

		static ::System::Func_2<::LFKBKMDMAEM, ::CEEGMMCFCBG*>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::LFKBKMDMAEM, ::CEEGMMCFCBG*>**)UnitySDK::FromName("Sofa.Demo.GridFight", "<>c")->GetStaticField(0xCD60);
		}

		static ::System::Func_2<::EMHMHPFOBKI*, ::ObservableCollections::ObservableList_1<::EHBJBLKFBEA*>*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::EMHMHPFOBKI*, ::ObservableCollections::ObservableList_1<::EHBJBLKFBEA*>*>**)UnitySDK::FromName("Sofa.Demo.GridFight", "<>c")->GetStaticField(0xCD68);
		}

		static ::System::Func_2<::EMHMHPFOBKI*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::EMHMHPFOBKI*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("Sofa.Demo.GridFight", "<>c")->GetStaticField(0xCD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__3_0(::EMHMHPFOBKI* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::EMHMHPFOBKI*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C___BINDING_B__3_0_OFFSET))(this, a1);
		}

		::ObservableCollections::ObservableList_1<::EHBJBLKFBEA*>* __Binding_b__3_1(::EMHMHPFOBKI* a1)
		{
			return ((::ObservableCollections::ObservableList_1<::EHBJBLKFBEA*>*(*)(::PVOID, ::EMHMHPFOBKI*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C___BINDING_B__3_1_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* __Populating_b__4_0(::LFKBKMDMAEM a1)
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID, ::LFKBKMDMAEM))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C___POPULATING_B__4_0_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* __Populating_b__4_1(::LFKBKMDMAEM a1)
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID, ::LFKBKMDMAEM))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL___C___POPULATING_B__4_1_OFFSET))(this, a1);
		}

	};
}
