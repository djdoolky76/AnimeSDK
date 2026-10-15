#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLMPDOKOLAC;
class PEKCKMDIAFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLMPDOKOLAC_CKAACDILAEI_OFFSET UNITYSDK_OFFSET(0xB9B4E50)
#define MLMPDOKOLAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B4CF0)
#define MLMPDOKOLAC_EEIMBNHIAGG_OFFSET UNITYSDK_OFFSET(0xB9B4F90)
#define MLMPDOKOLAC_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB9B4C10)
#define MLMPDOKOLAC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB9B5090)
#define MLMPDOKOLAC_NDHLMGIFJEJ_OFFSET UNITYSDK_OFFSET(0xB9B4D70)
#define MLMPDOKOLAC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB9B5000)

inline static constexpr unsigned int MLMPDOKOLAC_TypeDefinitionIndex = 69793;

	class MLMPDOKOLAC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::PEKCKMDIAFL*>* BKOHNICILOJ; // 0x10
		static ::MLMPDOKOLAC** StaticGet_EMLNOINPICJ()
		{
			return (::MLMPDOKOLAC**)UnitySDK::FromName("", "MLMPDOKOLAC")->GetStaticField(0xD6F0);
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
