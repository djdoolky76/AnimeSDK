#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F00D975466190277;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E8C932FC42A3F77E_A3793F4BE0631E06_OFFSET UNITYSDK_OFFSET(0x396FFF0)
#define E8C932FC42A3F77E_A66245FDD0182C57_1_OFFSET UNITYSDK_OFFSET(0x396DDB0)
#define E8C932FC42A3F77E_A66245FDD0182C57_2_OFFSET UNITYSDK_OFFSET(0x396DCD0)
#define E8C932FC42A3F77E_A66245FDD0182C57_3_OFFSET UNITYSDK_OFFSET(0x396DFA0)
#define E8C932FC42A3F77E_A66245FDD0182C57_4_OFFSET UNITYSDK_OFFSET(0x396E0A0)
#define E8C932FC42A3F77E_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x396DEA0)
#define E8C932FC42A3F77E_A6BCC96738E62068_OFFSET UNITYSDK_OFFSET(0x3970170)
#define E8C932FC42A3F77E_AA8FEEEBF7C13C95_1_OFFSET UNITYSDK_OFFSET(0x396D8F0)
#define E8C932FC42A3F77E_AA8FEEEBF7C13C95_2_OFFSET UNITYSDK_OFFSET(0x396DAE0)
#define E8C932FC42A3F77E_AA8FEEEBF7C13C95_OFFSET UNITYSDK_OFFSET(0x396D710)
#define E8C932FC42A3F77E_AE445CECF8B0E532_1_OFFSET UNITYSDK_OFFSET(0x396F730)
#define E8C932FC42A3F77E_AE445CECF8B0E532_2_OFFSET UNITYSDK_OFFSET(0x396FA20)
#define E8C932FC42A3F77E_AE445CECF8B0E532_3_OFFSET UNITYSDK_OFFSET(0x396F830)
#define E8C932FC42A3F77E_AE445CECF8B0E532_4_OFFSET UNITYSDK_OFFSET(0x396F920)
#define E8C932FC42A3F77E_AE445CECF8B0E532_5_OFFSET UNITYSDK_OFFSET(0x396F630)
#define E8C932FC42A3F77E_AE445CECF8B0E532_OFFSET UNITYSDK_OFFSET(0x396F540)
#define E8C932FC42A3F77E_AF3861FD08A9F766_OFFSET UNITYSDK_OFFSET(0x396D100)
#define E8C932FC42A3F77E_B0A93EAF20FED4ED_OFFSET UNITYSDK_OFFSET(0x3970280)
#define E8C932FC42A3F77E_B0F8AF5CB2B2CD85_OFFSET UNITYSDK_OFFSET(0x396E910)
#define E8C932FC42A3F77E_B57D4F66D430C477_OFFSET UNITYSDK_OFFSET(0x3970370)
#define E8C932FC42A3F77E_B5CF31C44AEABCA6_1_OFFSET UNITYSDK_OFFSET(0x396E9C0)
#define E8C932FC42A3F77E_B5CF31C44AEABCA6_2_OFFSET UNITYSDK_OFFSET(0x396EBB0)
#define E8C932FC42A3F77E_B5CF31C44AEABCA6_OFFSET UNITYSDK_OFFSET(0x396ED90)
#define E8C932FC42A3F77E_B734259F6C2635F1_OFFSET UNITYSDK_OFFSET(0x396E820)
#define E8C932FC42A3F77E_BA1BE213017C6E59_OFFSET UNITYSDK_OFFSET(0x39700B0)
#define E8C932FC42A3F77E_BAA63A9296AC9A08_OFFSET UNITYSDK_OFFSET(0x3970E00)
#define E8C932FC42A3F77E_E205432A87A72170_OFFSET UNITYSDK_OFFSET(0x396FC90)
#define E8C932FC42A3F77E_E31959AA6A942D6E_OFFSET UNITYSDK_OFFSET(0x396FB20)
#define E8C932FC42A3F77E_E35FBAB0DF7E7F68_1_OFFSET UNITYSDK_OFFSET(0x396F350)
#define E8C932FC42A3F77E_E35FBAB0DF7E7F68_2_OFFSET UNITYSDK_OFFSET(0x396EF80)
#define E8C932FC42A3F77E_E35FBAB0DF7E7F68_OFFSET UNITYSDK_OFFSET(0x396F160)
#define E8C932FC42A3F77E_E92BF29988BF2F9C_OFFSET UNITYSDK_OFFSET(0x396FE60)
#define E8C932FC42A3F77E_EC3A0C67B6341165_OFFSET UNITYSDK_OFFSET(0x396FC00)
#define E8C932FC42A3F77E_ED0B93A915431802_OFFSET UNITYSDK_OFFSET(0x396FD90)
#define E8C932FC42A3F77E_F0A55C87545B6ED1_OFFSET UNITYSDK_OFFSET(0x396D500)
#define E8C932FC42A3F77E_F151C38CA75BE7B0_OFFSET UNITYSDK_OFFSET(0x396FF10)
#define E8C932FC42A3F77E_F70A8E6D5F11EAFD_1_OFFSET UNITYSDK_OFFSET(0x396E1A0)
#define E8C932FC42A3F77E_F70A8E6D5F11EAFD_OFFSET UNITYSDK_OFFSET(0x396E4F0)
#define E8C932FC42A3F77E_F832468715ECEF8F_OFFSET UNITYSDK_OFFSET(0x39704B0)
#define E8C932FC42A3F77E_F9B9C825BF8BADF3_OFFSET UNITYSDK_OFFSET(0x374BB70)
#define E8C932FC42A3F77E_FCFAF096E66E38FF_1_OFFSET UNITYSDK_OFFSET(0x2950DA0)
#define E8C932FC42A3F77E_FCFAF096E66E38FF_OFFSET UNITYSDK_OFFSET(0x2950DA0)
#define E8C932FC42A3F77E__CCTOR_OFFSET UNITYSDK_OFFSET(0x3970E70)
#define E8C932FC42A3F77E__CTOR_OFFSET UNITYSDK_OFFSET(0x3970F60)

inline static constexpr unsigned int E8C932FC42A3F77E_TypeDefinitionIndex = 12478;

class E8C932FC42A3F77E : public ::System::Object
{
public:
	static ::E8C932FC42A3F77E** StaticGet_EE999965A1D2099B()
	{
		return (::E8C932FC42A3F77E**)Il2CppClass::FromTypeDefinitionIndex(E8C932FC42A3F77E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E734BA46CBA523FB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* F19E59B9731CD70D; // 0x18

	::System::Void ED0B93A915431802()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_ED0B93A915431802_OFFSET))(this);
	}

	::MiHoYo::SDK::NetworkResponseModel* F70A8E6D5F11EAFD(::System::String* A9B0E744486424C1)
	{
		return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F70A8E6D5F11EAFD_OFFSET))(this, A9B0E744486424C1);
	}

	::System::Void B0A93EAF20FED4ED(::System::Boolean A3E26351629B9EF8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B0A93EAF20FED4ED_OFFSET))(this, A3E26351629B9EF8);
	}

	::System::Collections::IEnumerator* AE445CECF8B0E532(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AE445CECF8B0E532_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, E5753F48089F9529, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void AA8FEEEBF7C13C95(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AA8FEEEBF7C13C95_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, E04D2BE64FCE9814, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void A3793F4BE0631E06(::System::String* B730A671D66EB905)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_A3793F4BE0631E06_OFFSET))(this, B730A671D66EB905);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* F9B9C825BF8BADF3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F9B9C825BF8BADF3_OFFSET))(this);
	}

	::System::Void BA1BE213017C6E59(::System::Int32 F3851C787B08F75B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_BA1BE213017C6E59_OFFSET))(this, F3851C787B08F75B);
	}

	::MiHoYo::SDK::NetworkResponseModel* B0F8AF5CB2B2CD85()
	{
		return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B0F8AF5CB2B2CD85_OFFSET))(this);
	}

	::System::Void E35FBAB0DF7E7F68(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814, ::System::String* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_E35FBAB0DF7E7F68_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Collections::IEnumerator* AE445CECF8B0E532_1(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::String* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AE445CECF8B0E532_1_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, E5753F48089F9529, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void F151C38CA75BE7B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F151C38CA75BE7B0_OFFSET))(this);
	}

	::System::Void FCFAF096E66E38FF(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814, ::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_FCFAF096E66E38FF_OFFSET))(this, E04D2BE64FCE9814, A6CAE7339066B0FB);
	}

	::MiHoYo::SDK::NetworkResponseModelEx* F70A8E6D5F11EAFD_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E96FF67B7586C927, ::System::String* A9B0E744486424C1)
	{
		return ((::MiHoYo::SDK::NetworkResponseModelEx*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F70A8E6D5F11EAFD_1_OFFSET))(this, E96FF67B7586C927, A9B0E744486424C1);
	}

	::System::Collections::IEnumerator* AE445CECF8B0E532_2(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AE445CECF8B0E532_2_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, E5753F48089F9529, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Collections::IEnumerator* A66245FDD0182C57(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::String* B96568F0005B4255, ::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_A66245FDD0182C57_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, B96568F0005B4255, E04D2BE64FCE9814, E5753F48089F9529, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void B5CF31C44AEABCA6(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* E04D2BE64FCE9814, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B5CF31C44AEABCA6_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E__CTOR_OFFSET))(this);
	}

	::MiHoYo::SDK::NetworkResponseModelEx* B734259F6C2635F1()
	{
		return ((::MiHoYo::SDK::NetworkResponseModelEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B734259F6C2635F1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* A66245FDD0182C57_1(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_A66245FDD0182C57_1_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, E04D2BE64FCE9814, E5753F48089F9529, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void F832468715ECEF8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F832468715ECEF8F_OFFSET))(this);
	}

	::System::Void E35FBAB0DF7E7F68_1(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_E35FBAB0DF7E7F68_1_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void AA8FEEEBF7C13C95_1(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AA8FEEEBF7C13C95_1_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, E04D2BE64FCE9814, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Collections::IEnumerator* AE445CECF8B0E532_3(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AE445CECF8B0E532_3_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, E5753F48089F9529, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Collections::IEnumerator* A66245FDD0182C57_2(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Boolean AD8C295CE3EE87C1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_A66245FDD0182C57_2_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, E04D2BE64FCE9814, E5753F48089F9529, AD8C295CE3EE87C1);
	}

	::System::Void FCFAF096E66E38FF_1(::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* E04D2BE64FCE9814, ::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_FCFAF096E66E38FF_1_OFFSET))(this, E04D2BE64FCE9814, A6CAE7339066B0FB);
	}

	::System::Void E35FBAB0DF7E7F68_2(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_E35FBAB0DF7E7F68_2_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	static ::System::Void B57D4F66D430C477(::System::Int32 B714679C324FF96E, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B57D4F66D430C477_OFFSET))(B714679C324FF96E, B083BE7841B347C4);
	}

	::System::Void E31959AA6A942D6E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_E31959AA6A942D6E_OFFSET))(this);
	}

	::System::Collections::IEnumerator* A66245FDD0182C57_3(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B96568F0005B4255, ::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_A66245FDD0182C57_3_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, B96568F0005B4255, E04D2BE64FCE9814, E5753F48089F9529, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Collections::IEnumerator* AE445CECF8B0E532_4(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::String* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AE445CECF8B0E532_4_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, E5753F48089F9529, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8C932FC42A3F77E__CCTOR_OFFSET))();
	}

	::System::Collections::IEnumerator* A66245FDD0182C57_4(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B96568F0005B4255, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_A66245FDD0182C57_4_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, B96568F0005B4255, E04D2BE64FCE9814, E5753F48089F9529, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void E205432A87A72170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_E205432A87A72170_OFFSET))(this);
	}

	::System::Void AA8FEEEBF7C13C95_2(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814, ::System::String* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AA8FEEEBF7C13C95_2_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, E04D2BE64FCE9814, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void B5CF31C44AEABCA6_1(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* E04D2BE64FCE9814, ::System::String* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B5CF31C44AEABCA6_1_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void BAA63A9296AC9A08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_BAA63A9296AC9A08_OFFSET))(this);
	}

	::System::Void E92BF29988BF2F9C(::System::String* A425703AF4E04C72)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_E92BF29988BF2F9C_OFFSET))(this, A425703AF4E04C72);
	}

	::System::Void B5CF31C44AEABCA6_2(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* E04D2BE64FCE9814, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_B5CF31C44AEABCA6_2_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void F0A55C87545B6ED1(::System::String* AF821F194E6AF0BA, ::F00D975466190277* B38A9B2983CE63FE, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* E04D2BE64FCE9814, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::F00D975466190277*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F0A55C87545B6ED1_OFFSET))(this, AF821F194E6AF0BA, B38A9B2983CE63FE, E04D2BE64FCE9814, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::Void A6BCC96738E62068(::System::String* FFC9C7B35CB33555)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_A6BCC96738E62068_OFFSET))(this, FFC9C7B35CB33555);
	}

	::System::Void EC3A0C67B6341165(::System::Boolean A3E26351629B9EF8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_EC3A0C67B6341165_OFFSET))(this, A3E26351629B9EF8);
	}

	::System::Collections::IEnumerator* AE445CECF8B0E532_5(::System::String* AF821F194E6AF0BA, ::System::String* E7E685A9390734EE, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* E04D2BE64FCE9814, ::System::Action* E5753F48089F9529, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* B96568F0005B4255, ::System::Single B8CEFF124B3872B8, ::System::Int32 A42E6C8E59968368)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AE445CECF8B0E532_5_OFFSET))(this, AF821F194E6AF0BA, E7E685A9390734EE, E04D2BE64FCE9814, E5753F48089F9529, B96568F0005B4255, B8CEFF124B3872B8, A42E6C8E59968368);
	}

	::System::String* AF3861FD08A9F766(::System::String* B960AC235824C6C8, ::F00D975466190277* BD099A5B7B0B54D1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::F00D975466190277*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_AF3861FD08A9F766_OFFSET))(this, B960AC235824C6C8, BD099A5B7B0B54D1);
	}
};
