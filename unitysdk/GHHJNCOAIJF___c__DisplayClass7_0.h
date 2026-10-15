#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GHHJNCOAIJF___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A14760)
#define GHHJNCOAIJF___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__0_OFFSET UNITYSDK_OFFSET(0x15A15100)
#define GHHJNCOAIJF___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__1_OFFSET UNITYSDK_OFFSET(0x15A15190)
#define GHHJNCOAIJF___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__2_OFFSET UNITYSDK_OFFSET(0x15A15270)

inline static constexpr unsigned int GHHJNCOAIJF___c__DisplayClass7_0_TypeDefinitionIndex = 69356;

	class GHHJNCOAIJF___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Exception*>* onError; // 0x10
		::RPG::Client::Promises::Promise_1<::IHGIENOHBMJ*>* promise; // 0x18
		::GHHJNCOAIJF_KKHGKLOBDFN* retrySendParams; // 0x20
		::System::Action_1<::IHGIENOHBMJ*>* __9__2; // 0x28
		::System::Action_1<::System::Object*>* sendOnce; // 0x30
		::GHHJNCOAIJF* __4__this; // 0x38
		::GHHJNCOAIJF_KKHGKLOBDFN* sendParams; // 0x40
		::System::UInt32 curRetries; // 0x48
		::System::UInt32 retries; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _SendWithRetry_b__0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__0_OFFSET))(this, a1);
		}

		::System::Void _SendWithRetry_b__1(::GHHJNCOAIJF_KKHGKLOBDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF_KKHGKLOBDFN*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__1_OFFSET))(this, a1);
		}

		::System::Void _SendWithRetry_b__2(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF___C__DISPLAYCLASS7_0__SENDWITHRETRY_B__2_OFFSET))(this, a1);
		}

	};
