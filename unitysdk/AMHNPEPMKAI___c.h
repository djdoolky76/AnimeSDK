#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class DFJBJEENEBN;
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define AMHNPEPMKAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15575C40)
#define AMHNPEPMKAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15575C80)
#define AMHNPEPMKAI___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x15575C90)
#define AMHNPEPMKAI___C__CREATE_B__1_1_OFFSET UNITYSDK_OFFSET(0x15575CB0)
#define AMHNPEPMKAI___C__CREATE_B__1_2_OFFSET UNITYSDK_OFFSET(0x15575CE0)
#define AMHNPEPMKAI___C___SELECTCAROUSELPETS_B__4_0_OFFSET UNITYSDK_OFFSET(0x15575D10)

inline static constexpr unsigned int AMHNPEPMKAI___c_TypeDefinitionIndex = 74934;

	class AMHNPEPMKAI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DFJBJEENEBN*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::DFJBJEENEBN*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE60);
		}

		static ::System::Func_2<::DFJBJEENEBN*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::DFJBJEENEBN*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE68);
		}

		static ::System::Comparison_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE78);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHNPEPMKAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHNPEPMKAI___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__1_0(::DFJBJEENEBN* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::DFJBJEENEBN*))((::PBYTE)hIl2Cpp + AMHNPEPMKAI___C__CREATE_B__1_0_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _Create_b__1_1(::DFJBJEENEBN* a1)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::DFJBJEENEBN*))((::PBYTE)hIl2Cpp + AMHNPEPMKAI___C__CREATE_B__1_1_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _Create_b__1_2(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + AMHNPEPMKAI___C__CREATE_B__1_2_OFFSET))(this, a1);
		}

		::System::Int32 __SelectCarouselPets_b__4_0(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + AMHNPEPMKAI___C___SELECTCAROUSELPETS_B__4_0_OFFSET))(this, a1, a2);
		}

	};
