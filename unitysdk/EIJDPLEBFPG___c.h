#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EIJDPLEBFPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x154CE4D0)
#define EIJDPLEBFPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x154CE500)
#define EIJDPLEBFPG___C__CHOOSESLOT_B__7_0_OFFSET UNITYSDK_OFFSET(0x154CE510)

inline static constexpr unsigned int EIJDPLEBFPG___c_TypeDefinitionIndex = 52417;

	class EIJDPLEBFPG___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37AE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIJDPLEBFPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJDPLEBFPG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _ChooseSlot_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a1, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + EIJDPLEBFPG___C__CHOOSESLOT_B__7_0_OFFSET))(this, a1, a2);
		}

	};
