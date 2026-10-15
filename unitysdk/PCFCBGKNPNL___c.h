#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
class KIIGKJKMCHP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCFCBGKNPNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFFEF00)
#define PCFCBGKNPNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFEF40)
#define PCFCBGKNPNL___C__CREATEPREVIEWCAR_B__3_0_OFFSET UNITYSDK_OFFSET(0xBFFEF50)
#define PCFCBGKNPNL___C__CREATEPREVIEWCAR_B__3_1_OFFSET UNITYSDK_OFFSET(0xBFFEF60)

	class PCFCBGKNPNL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::GameCore::B51RacingPartType>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::GameCore::B51RacingPartType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64E00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64E08);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::List_1<::KIIGKJKMCHP*>*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::List_1<::KIIGKJKMCHP*>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCFCBGKNPNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFCBGKNPNL___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::B51RacingPartType _CreatePreviewCar_b__3_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::RPG::GameCore::B51RacingPartType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + PCFCBGKNPNL___C__CREATEPREVIEWCAR_B__3_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KIIGKJKMCHP*>* _CreatePreviewCar_b__3_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Collections::Generic::List_1<::KIIGKJKMCHP*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + PCFCBGKNPNL___C__CREATEPREVIEWCAR_B__3_1_OFFSET))(this, a1);
		}

	};
