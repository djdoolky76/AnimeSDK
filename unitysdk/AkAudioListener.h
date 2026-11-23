#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkAudioListener_B30566467733E569;
class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKAUDIOLISTENER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2914FE0)
#define AKAUDIOLISTENER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2914F80)
#define AKAUDIOLISTENER_BC3A510D3A96E2BB_OFFSET UNITYSDK_OFFSET(0x2915620)
#define AKAUDIOLISTENER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2915090)
#define AKAUDIOLISTENER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2915370)
#define AKAUDIOLISTENER_E80148BA2741CAE9_OFFSET UNITYSDK_OFFSET(0x2914ED0)
#define AKAUDIOLISTENER_E86CFE5B2ED5418A_OFFSET UNITYSDK_OFFSET(0x2915140)
#define AKAUDIOLISTENER_ECE7892DE7D686C4_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define AKAUDIOLISTENER_F086DC58E829CB46_OFFSET UNITYSDK_OFFSET(0x2915270)
#define AKAUDIOLISTENER_F51EC0EEFEFCE29D_OFFSET UNITYSDK_OFFSET(0x29152F0)
#define AKAUDIOLISTENER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2914E00)
#define AKAUDIOLISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x29154F0)
#define AKAUDIOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x2915560)

inline static constexpr unsigned int AkAudioListener_TypeDefinitionIndex = 20472;

class AkAudioListener : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkAudioListener_B30566467733E569** StaticGet_ABD214C88B0CEF18()
	{
		return (::AkAudioListener_B30566467733E569**)Il2CppClass::FromTypeDefinitionIndex(AkAudioListener_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::UInt64 F84D6FD96125DD48; // 0x20
	::System::Collections::Generic::List_1<::AkGameObj*>* A5EED0AD31886E8D; // 0x28
	::System::Collections::Generic::List_1<::AkGameObj*>* A73AC5876D392E72; // 0x30
	::System::Boolean isDefaultListener; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 listenerId; // 0x3C

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_AB36E0EE549986E5_OFFSET))(this);
	}

	::System::Void F086DC58E829CB46(::AkGameObj* A58BE6C51F48A0D9)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_F086DC58E829CB46_OFFSET))(this, A58BE6C51F48A0D9);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void E80148BA2741CAE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_E80148BA2741CAE9_OFFSET))(this);
	}

	static ::AkAudioListener_B30566467733E569* BC3A510D3A96E2BB()
	{
		return ((::AkAudioListener_B30566467733E569*(*)())((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BC3A510D3A96E2BB_OFFSET))();
	}

	::System::Void F51EC0EEFEFCE29D(::AkGameObj* A58BE6C51F48A0D9)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_F51EC0EEFEFCE29D_OFFSET))(this, A58BE6C51F48A0D9);
	}

	::System::Void E86CFE5B2ED5418A(::System::Boolean E301848B3F2D0747)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_E86CFE5B2ED5418A_OFFSET))(this, E301848B3F2D0747);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_E02954280801633F_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BF13C91AD80643D2_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAUDIOLISTENER__CCTOR_OFFSET))();
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::UInt64 ECE7892DE7D686C4()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_ECE7892DE7D686C4_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER__CTOR_OFFSET))(this);
	}
};
