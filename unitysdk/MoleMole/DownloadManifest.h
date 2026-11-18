#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

class AGLEKEKLCKC;
namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define MOLEMOLE_DOWNLOADMANIFEST_DOPENCMCDHL_OFFSET UNITYSDK_OFFSET(0x180CC460)
#define MOLEMOLE_DOWNLOADMANIFEST_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x180CC270)
#define MOLEMOLE_DOWNLOADMANIFEST_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x180CC230)
#define MOLEMOLE_DOWNLOADMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x180CC450)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadManifest_TypeDefinitionIndex = 84857;

	class DownloadManifest : public ::System::Object
	{
	public:
		::System::String* remoteParentDir; // 0x10
		::Il2CppArray<::MoleMole::DownloadFileInfo*>* files; // 0x18
		::Il2CppArray<::GPNHHGBPCGM>* packages; // 0x20
		::Il2CppArray<::GPNHHGBPCGM>* basePackages; // 0x28
		::Il2CppArray<::GPNHHGBPCGM>* baseOnlyPackages; // 0x30
		::Il2CppArray<::System::Int32>* baseOnlyTitles; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADMANIFEST__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADMANIFEST_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADMANIFEST_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::AGLEKEKLCKC* DOPENCMCDHL()
		{
			return ((::AGLEKEKLCKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADMANIFEST_DOPENCMCDHL_OFFSET))(this);
		}
	};
}
