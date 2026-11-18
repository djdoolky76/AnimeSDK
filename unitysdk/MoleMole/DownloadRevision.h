#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define MOLEMOLE_DOWNLOADREVISION_BGNCEDFJPBG_OFFSET UNITYSDK_OFFSET(0x16203240)
#define MOLEMOLE_DOWNLOADREVISION_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16203110)
#define MOLEMOLE_DOWNLOADREVISION_GET_P4CHANGELIST_OFFSET UNITYSDK_OFFSET(0x16554A10)
#define MOLEMOLE_DOWNLOADREVISION_GET_SUFFIX_OFFSET UNITYSDK_OFFSET(0x165549D0)
#define MOLEMOLE_DOWNLOADREVISION_KDEHEAIDOPI_OFFSET UNITYSDK_OFFSET(0x16203150)
#define MOLEMOLE_DOWNLOADREVISION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16554A20)
#define MOLEMOLE_DOWNLOADREVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x16554980)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadRevision_TypeDefinitionIndex = 57973;

	class DownloadRevision : public ::System::Object
	{
	public:
		::Foundation::ResourceFileType fileType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* revisionCode; // 0x18
		::MoleMole::DownloadFileInfo* versions_fileInfo; // 0x20

		::System::Void _ctor(::Foundation::ResourceFileType FMCHIMDIKBB, ::System::String* PJDHDLMMCKH, ::MoleMole::DownloadFileInfo* KLPIADDEDOF)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::String*, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION__CTOR_OFFSET))(this, FMCHIMDIKBB, PJDHDLMMCKH, KLPIADDEDOF);
		}

		::System::String* get_Suffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_GET_SUFFIX_OFFSET))(this);
		}

		::System::String* get_p4changelist()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_GET_P4CHANGELIST_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_TOSTRING_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_DPIHOJBBGLA_OFFSET))(this);
		}

		static ::System::String* KDEHEAIDOPI(::System::String* OPDAGPDIFFD)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_KDEHEAIDOPI_OFFSET))(OPDAGPDIFFD);
		}

		static ::System::String* BGNCEDFJPBG(::System::String* OPDAGPDIFFD)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_BGNCEDFJPBG_OFFSET))(OPDAGPDIFFD);
		}
	};
}
