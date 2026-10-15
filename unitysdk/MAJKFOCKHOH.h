#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODGPPIHLOFF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MAJKFOCKHOH_ABBDPNGJPMG_OFFSET UNITYSDK_OFFSET(0xB852100)
#define MAJKFOCKHOH_BDEEKDMIDJF_OFFSET UNITYSDK_OFFSET(0xB851480)
#define MAJKFOCKHOH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB852300)
#define MAJKFOCKHOH_ILGJPLFKGEG_1_OFFSET UNITYSDK_OFFSET(0xB851CF0)
#define MAJKFOCKHOH_ILGJPLFKGEG_OFFSET UNITYSDK_OFFSET(0xB8517D0)
#define MAJKFOCKHOH_LJIHFCICHOP_1_OFFSET UNITYSDK_OFFSET(0xB851AE0)
#define MAJKFOCKHOH_LJIHFCICHOP_OFFSET UNITYSDK_OFFSET(0xB8514C0)
#define MAJKFOCKHOH_PHIOPIOPMPF_OFFSET UNITYSDK_OFFSET(0xB851F00)

	class MAJKFOCKHOH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Object*>** StaticGet_DDMIGFCDDEC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Object*>**)UnitySDK::FromName("", "MAJKFOCKHOH")->GetStaticField(0x6E2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAJKFOCKHOH_CCTOR_OFFSET))();
		}

		static ::System::String* BDEEKDMIDJF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MAJKFOCKHOH_BDEEKDMIDJF_OFFSET))(a1);
		}

		static ::System::Void LJIHFCICHOP(::ODGPPIHLOFF* a1, ::ODGPPIHLOFF* a2)
		{
			return ((::System::Void(*)(::ODGPPIHLOFF*, ::ODGPPIHLOFF*))((::PBYTE)hIl2Cpp + MAJKFOCKHOH_LJIHFCICHOP_OFFSET))(a1, a2);
		}

		static ::System::Void ILGJPLFKGEG(::ODGPPIHLOFF* a1, ::ODGPPIHLOFF* a2)
		{
			return ((::System::Void(*)(::ODGPPIHLOFF*, ::ODGPPIHLOFF*))((::PBYTE)hIl2Cpp + MAJKFOCKHOH_ILGJPLFKGEG_OFFSET))(a1, a2);
		}

		static ::System::Void LJIHFCICHOP_1(::System::String* a1, ::ODGPPIHLOFF* a2)
		{
			return ((::System::Void(*)(::System::String*, ::ODGPPIHLOFF*))((::PBYTE)hIl2Cpp + MAJKFOCKHOH_LJIHFCICHOP_1_OFFSET))(a1, a2);
		}

		static ::System::Void ILGJPLFKGEG_1(::System::String* a1, ::ODGPPIHLOFF* a2)
		{
			return ((::System::Void(*)(::System::String*, ::ODGPPIHLOFF*))((::PBYTE)hIl2Cpp + MAJKFOCKHOH_ILGJPLFKGEG_1_OFFSET))(a1, a2);
		}

		static ::System::Void PHIOPIOPMPF(::ODGPPIHLOFF* a1)
		{
			return ((::System::Void(*)(::ODGPPIHLOFF*))((::PBYTE)hIl2Cpp + MAJKFOCKHOH_PHIOPIOPMPF_OFFSET))(a1);
		}

		static ::System::Void ABBDPNGJPMG(::ODGPPIHLOFF* a1)
		{
			return ((::System::Void(*)(::ODGPPIHLOFF*))((::PBYTE)hIl2Cpp + MAJKFOCKHOH_ABBDPNGJPMG_OFFSET))(a1);
		}

	};
