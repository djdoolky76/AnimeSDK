#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEIKFPLBOMH;

#define NMAMEGFGAIF_EHIEEGPHKAI_OFFSET UNITYSDK_OFFSET(0x1EC89DC0)
#define NMAMEGFGAIF_PEMOEMHMHCA_OFFSET UNITYSDK_OFFSET(0x1EC658C0)

inline static constexpr unsigned int NMAMEGFGAIF_TypeDefinitionIndex = 44088;

	class NMAMEGFGAIF : public ::System::Object
	{
	public:
		static ::OEIKFPLBOMH** StaticGet_JKCNFDEAMDJ()
		{
			return (::OEIKFPLBOMH**)UnitySDK::FromName("", "NMAMEGFGAIF")->GetStaticField(0x4DDE0);
		}

		static ::OEIKFPLBOMH* PEMOEMHMHCA()
		{
			return ((::OEIKFPLBOMH*(*)())((::PBYTE)hIl2Cpp + NMAMEGFGAIF_PEMOEMHMHCA_OFFSET))();
		}

		static ::System::Void EHIEEGPHKAI(::OEIKFPLBOMH* a1)
		{
			return ((::System::Void(*)(::OEIKFPLBOMH*))((::PBYTE)hIl2Cpp + NMAMEGFGAIF_EHIEEGPHKAI_OFFSET))(a1);
		}

	};
