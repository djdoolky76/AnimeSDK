#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class B07D27203C69A8A5; }
namespace UnityEngine { class Texture2D; }

#define EE47AE4E33AE9478_A2F4DD1954D36446_OFFSET UNITYSDK_OFFSET(0x39B8AD0)
#define EE47AE4E33AE9478_A4A2160B779639F3_OFFSET UNITYSDK_OFFSET(0x39B90F0)
#define EE47AE4E33AE9478_A4F5552DE5FE336C_OFFSET UNITYSDK_OFFSET(0x39B8A50)
#define EE47AE4E33AE9478_ADC0F82A31E71DDA_OFFSET UNITYSDK_OFFSET(0x39B98B0)
#define EE47AE4E33AE9478_AED6DF94483EF6B2_OFFSET UNITYSDK_OFFSET(0x39B8CB0)
#define EE47AE4E33AE9478_AF7244E2F9D9A47F_OFFSET UNITYSDK_OFFSET(0x39B9090)
#define EE47AE4E33AE9478_B0408C1229E737B9_OFFSET UNITYSDK_OFFSET(0x39B8C10)
#define EE47AE4E33AE9478_B09B27A137514DA3_OFFSET UNITYSDK_OFFSET(0x39B85A0)
#define EE47AE4E33AE9478_B3568B24BC7D3350_OFFSET UNITYSDK_OFFSET(0x39B9920)
#define EE47AE4E33AE9478_B82E02AE7AF1EAFA_OFFSET UNITYSDK_OFFSET(0x39B9DE0)
#define EE47AE4E33AE9478_BEEBDB766A2970B7_OFFSET UNITYSDK_OFFSET(0x39B9D50)
#define EE47AE4E33AE9478_E0EAE4BF26D3D029_OFFSET UNITYSDK_OFFSET(0x39BA2E0)
#define EE47AE4E33AE9478_E9E4823B6541535F_OFFSET UNITYSDK_OFFSET(0x39B8A20)
#define EE47AE4E33AE9478_F31B3588511FEEB5_OFFSET UNITYSDK_OFFSET(0x39B9D90)
#define EE47AE4E33AE9478_F6CABF099C2C5D3D_OFFSET UNITYSDK_OFFSET(0x39B9600)
#define EE47AE4E33AE9478_F83D1F35D0DFA175_OFFSET UNITYSDK_OFFSET(0x39B9150)
#define EE47AE4E33AE9478__CCTOR_OFFSET UNITYSDK_OFFSET(0x39BA500)
#define EE47AE4E33AE9478__CTOR_OFFSET UNITYSDK_OFFSET(0x39BA580)

inline static constexpr unsigned int EE47AE4E33AE9478_TypeDefinitionIndex = 12572;

class EE47AE4E33AE9478 : public ::System::Object
{
public:
	static ::EE47AE4E33AE9478** StaticGet_EE999965A1D2099B()
	{
		return (::EE47AE4E33AE9478**)Il2CppClass::FromTypeDefinitionIndex(EE47AE4E33AE9478_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean EF050C9507C61C96; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 ADC048752C1391A3; // 0x14
	::System::Int32 BB9B1101B3CE35B9; // 0x18
	::System::Byte _padding1[0x4];
	::UnityEngine::Texture2D* B83B6A94B30A8F19; // 0x20
	::UnityEngine::B07D27203C69A8A5* A0CE25EBA03F2F8B; // 0x28
	::System::Boolean FD32F5AC318F2CAF; // 0x30
	::System::Boolean AB71385D0E94BE7E; // 0x31
	::System::Byte _padding2[0x6];
	::UnityEngine::B07D27203C69A8A5* E6DE593D52D04821; // 0x38
	::System::Single E9E443FD97ADF69B; // 0x40

	::System::Collections::IEnumerator* B0408C1229E737B9(::System::Single B69830282F31F639, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_B0408C1229E737B9_OFFSET))(this, B69830282F31F639, E04D2BE64FCE9814);
	}

	::System::Void BEEBDB766A2970B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_BEEBDB766A2970B7_OFFSET))(this);
	}

	::System::Void F83D1F35D0DFA175(::Il2CppArray<::System::Byte>* B5CF54381C4A69A1, ::System::Int32 AB46D6A196F8FF64, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_F83D1F35D0DFA175_OFFSET))(this, B5CF54381C4A69A1, AB46D6A196F8FF64, B083BE7841B347C4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EE47AE4E33AE9478__CCTOR_OFFSET))();
	}

	::System::Void E0EAE4BF26D3D029()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_E0EAE4BF26D3D029_OFFSET))(this);
	}

	::System::Void B3568B24BC7D3350(::System::String* A9B0E744486424C1, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_B3568B24BC7D3350_OFFSET))(this, A9B0E744486424C1, E04D2BE64FCE9814);
	}

	::System::Void ADC0F82A31E71DDA(::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_ADC0F82A31E71DDA_OFFSET))(this, E04D2BE64FCE9814);
	}

	::System::Void A2F4DD1954D36446(::System::Int32 FDEAE68E34FB39B4, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_A2F4DD1954D36446_OFFSET))(this, FDEAE68E34FB39B4, E04D2BE64FCE9814);
	}

	::System::Void F6CABF099C2C5D3D(::Il2CppArray<::System::Byte>* B5CF54381C4A69A1, ::System::Int32 AB46D6A196F8FF64, ::System::String* B083BE7841B347C4, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_F6CABF099C2C5D3D_OFFSET))(this, B5CF54381C4A69A1, AB46D6A196F8FF64, B083BE7841B347C4, E04D2BE64FCE9814);
	}

	::System::Void A4A2160B779639F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_A4A2160B779639F3_OFFSET))(this);
	}

	::System::Void B82E02AE7AF1EAFA(::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814, ::System::Single B8CEFF124B3872B8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::Single))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_B82E02AE7AF1EAFA_OFFSET))(this, F5EF7E29767E03BF, F0961C93719F7B0D, E04D2BE64FCE9814, B8CEFF124B3872B8);
	}

	::System::Void AF7244E2F9D9A47F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_AF7244E2F9D9A47F_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478__CTOR_OFFSET))(this);
	}

	::System::Void AED6DF94483EF6B2(::System::String* A9B0E744486424C1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_AED6DF94483EF6B2_OFFSET))(this, A9B0E744486424C1);
	}

	::System::Boolean E9E4823B6541535F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_E9E4823B6541535F_OFFSET))(this);
	}

	::System::Collections::IEnumerator* A4F5552DE5FE336C(::System::Single FFFF2E770B96FBA7)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_A4F5552DE5FE336C_OFFSET))(this, FFFF2E770B96FBA7);
	}

	::System::Void F31B3588511FEEB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_F31B3588511FEEB5_OFFSET))(this);
	}

	::System::Void B09B27A137514DA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_B09B27A137514DA3_OFFSET))(this);
	}
};
