#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavVertexType.h"
#include "unitysdk/System/Object.h"
class FFCGHKGDAJF;
class GIJPBMMNJKO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPLGGNDACGL_CDFGGCGIKBM_OFFSET UNITYSDK_OFFSET(0x15B5DD30)
#define GPLGGNDACGL_GCKADCMDNJG_OFFSET UNITYSDK_OFFSET(0x15B5D7C0)
#define GPLGGNDACGL_JIBKHDGAEEP_OFFSET UNITYSDK_OFFSET(0x15B5D840)

	class GPLGGNDACGL : public ::System::Object
	{
	public:
		// static const ::System::String* CEINHPDDBJC; // 0x0
		// static const ::System::String* NOGGILOHMDB; // 0x0
		// static const ::System::String* JNKLOPFCHDD; // 0x0
		// static const ::System::String* MLIILKKGLHG; // 0x0
		// static const ::System::String* PEPMMFAEFIF; // 0x0
		// static const ::System::String* MHCMKBECLDO; // 0x0
		static ::GIJPBMMNJKO* GCKADCMDNJG(::FFCGHKGDAJF* a1, ::RPG::Client::NavMap::NavVertexType a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a3)
		{
			return ((::GIJPBMMNJKO*(*)(::FFCGHKGDAJF*, ::RPG::Client::NavMap::NavVertexType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + GPLGGNDACGL_GCKADCMDNJG_OFFSET))(a1, a2, a3);
		}

		static ::GIJPBMMNJKO* JIBKHDGAEEP(::FFCGHKGDAJF* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
		{
			return ((::GIJPBMMNJKO*(*)(::FFCGHKGDAJF*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + GPLGGNDACGL_JIBKHDGAEEP_OFFSET))(a1, a2);
		}

		static ::GIJPBMMNJKO* CDFGGCGIKBM(::FFCGHKGDAJF* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
		{
			return ((::GIJPBMMNJKO*(*)(::FFCGHKGDAJF*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + GPLGGNDACGL_CDFGGCGIKBM_OFFSET))(a1, a2);
		}

	};
