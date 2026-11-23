#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ADDC09BE50EBD1E2 { class FEA7CA4B02ABDA64; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_FC5BD86DF36558D5_F2A5C97919A82DB4_E146A6648FEF7AA3_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define UNITYENGINE_FC5BD86DF36558D5_F2A5C97919A82DB4_EFE552F3C1201209_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_FC5BD86DF36558D5_F2A5C97919A82DB4_FC4FB4ED8ECFA41F_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_FC5BD86DF36558D5_F2A5C97919A82DB4__CTOR_OFFSET UNITYSDK_OFFSET(0x416F490)

namespace UnityEngine
{
	inline static constexpr unsigned int FC5BD86DF36558D5_F2A5C97919A82DB4_TypeDefinitionIndex = 17449;

	class FC5BD86DF36558D5_F2A5C97919A82DB4 : public ::System::Object
	{
	public:
		::ADDC09BE50EBD1E2::FEA7CA4B02ABDA64* EA14D86E7C2B1AEB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* B2590CE577E046EA; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BDAE340C184E452F; // 0x20

		::System::Void _ctor(::ADDC09BE50EBD1E2::FEA7CA4B02ABDA64* EFD09F0992A4635C)
		{
			return ((::System::Void(*)(::PVOID, ::ADDC09BE50EBD1E2::FEA7CA4B02ABDA64*))((::PBYTE)hIl2Cpp + UNITYENGINE_FC5BD86DF36558D5_F2A5C97919A82DB4__CTOR_OFFSET))(this, EFD09F0992A4635C);
		}

		::ADDC09BE50EBD1E2::FEA7CA4B02ABDA64* EFE552F3C1201209()
		{
			return ((::ADDC09BE50EBD1E2::FEA7CA4B02ABDA64*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FC5BD86DF36558D5_F2A5C97919A82DB4_EFE552F3C1201209_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* E146A6648FEF7AA3()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FC5BD86DF36558D5_F2A5C97919A82DB4_E146A6648FEF7AA3_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FC4FB4ED8ECFA41F()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FC5BD86DF36558D5_F2A5C97919A82DB4_FC4FB4ED8ECFA41F_OFFSET))(this);
		}
	};
}
