#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLMPDOKOLAC;
class PEKCKMDIAFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLMPDOKOLAC_CKAACDILAEI_OFFSET UNITYSDK_OFFSET(0xC276700)
#define MLMPDOKOLAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC2765A0)
#define MLMPDOKOLAC_EEIMBNHIAGG_OFFSET UNITYSDK_OFFSET(0xC276840)
#define MLMPDOKOLAC_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC2764C0)
#define MLMPDOKOLAC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC276940)
#define MLMPDOKOLAC_NDHLMGIFJEJ_OFFSET UNITYSDK_OFFSET(0xC276620)
#define MLMPDOKOLAC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC2768B0)

inline static constexpr unsigned int MLMPDOKOLAC_TypeDefinitionIndex = 71752;

	class MLMPDOKOLAC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::PEKCKMDIAFL*>* BKOHNICILOJ; // 0x10
		static ::MLMPDOKOLAC** StaticGet_EMLNOINPICJ()
		{
			return (::MLMPDOKOLAC**)UnitySDK::FromName("", "MLMPDOKOLAC")->GetStaticField(0x73C10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMPDOKOLAC_CTOR_OFFSET))(this);
		}

		static ::MLMPDOKOLAC* GGBLHEHJBDO()
		{
			return ((::MLMPDOKOLAC*(*)())((::PBYTE)hIl2Cpp + MLMPDOKOLAC_GGBLHEHJBDO_OFFSET))();
		}

		::PEKCKMDIAFL* NDHLMGIFJEJ(::System::String* a1)
		{
			return ((::PEKCKMDIAFL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLMPDOKOLAC_NDHLMGIFJEJ_OFFSET))(this, a1);
		}

		::System::Void CKAACDILAEI(::PEKCKMDIAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEKCKMDIAFL*))((::PBYTE)hIl2Cpp + MLMPDOKOLAC_CKAACDILAEI_OFFSET))(this, a1);
		}

		::System::Void EEIMBNHIAGG(::PEKCKMDIAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEKCKMDIAFL*))((::PBYTE)hIl2Cpp + MLMPDOKOLAC_EEIMBNHIAGG_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMPDOKOLAC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMPDOKOLAC_JLANKNHFKCN_OFFSET))(this);
		}

	};
