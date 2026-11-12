#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class EAIGLLEMOII;
class KEOMPOEIELK;
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }

#define EAIGLLEMOII_APKPCOKFMKH_OFFSET UNITYSDK_OFFSET(0x1346C240)
#define EAIGLLEMOII_CKEGLGBBPJO_OFFSET UNITYSDK_OFFSET(0x1346C130)
#define EAIGLLEMOII_CTOR_OFFSET UNITYSDK_OFFSET(0x1346BF70)
#define EAIGLLEMOII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1346C1B0)
#define EAIGLLEMOII_GMFAAFNPEIE_OFFSET UNITYSDK_OFFSET(0x1346BFD0)
#define EAIGLLEMOII_IGFLOJBBCNP_OFFSET UNITYSDK_OFFSET(0x1346C040)
#define EAIGLLEMOII_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x1346BFC0)
#define EAIGLLEMOII_NCPHFLBFDBD_OFFSET UNITYSDK_OFFSET(0x1346C0B0)

inline static constexpr unsigned int EAIGLLEMOII_TypeDefinitionIndex = 61947;

	class EAIGLLEMOII : public ::System::Object
	{
	public:
		::KEOMPOEIELK* JPNMOJGMOMF; // 0x10
		::System::Action* GPLLONMEDAC; // 0x18
		::System::Boolean GFAMGLFOMGI; // 0x20
		::System::Void _ctor(::System::Action* a1, ::KEOMPOEIELK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::KEOMPOEIELK*))((::PBYTE)hIl2Cpp + EAIGLLEMOII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIGLLEMOII_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Boolean GMFAAFNPEIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIGLLEMOII_GMFAAFNPEIE_OFFSET))(this);
		}

		::System::Boolean IGFLOJBBCNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIGLLEMOII_IGFLOJBBCNP_OFFSET))(this);
		}

		::System::IDisposable* NCPHFLBFDBD(::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*))((::PBYTE)hIl2Cpp + EAIGLLEMOII_NCPHFLBFDBD_OFFSET))(this, a1);
		}

		::System::IDisposable* CKEGLGBBPJO(::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*))((::PBYTE)hIl2Cpp + EAIGLLEMOII_CKEGLGBBPJO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIGLLEMOII_DISPOSE_OFFSET))(this);
		}

		static ::EAIGLLEMOII* APKPCOKFMKH()
		{
			return ((::EAIGLLEMOII*(*)())((::PBYTE)hIl2Cpp + EAIGLLEMOII_APKPCOKFMKH_OFFSET))();
		}

	};
