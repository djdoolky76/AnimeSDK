#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAKCLAJLOB.h"
class AJHOBFAMAFO;
class BECMNNFPMCD;
class CNKMBDHCJAO;
class NJIMHPJHICM;
class NPMONFHGPBP;
namespace EnviromentSystemV2Space { class ImageCurveTestBehavior; }
namespace UnityEngine { class Texture; }

#define AANBMDMHDLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB735020)
#define AANBMDMHDLE_DHBFCHLKMHP_OFFSET UNITYSDK_OFFSET(0xB734D90)
#define AANBMDMHDLE_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0xB734B40)
#define AANBMDMHDLE_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB734ED0)
#define AANBMDMHDLE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB734A30)

inline static constexpr unsigned int AANBMDMHDLE_TypeDefinitionIndex = 50438;

	class AANBMDMHDLE : public ::KHAKCLAJLOB
	{
	public:
		::NPMONFHGPBP* CJEKKOLJDOO; // 0x70
		::EnviromentSystemV2Space::ImageCurveTestBehavior* GILKDHAHFDM; // 0x78
		::CNKMBDHCJAO* HBNBKCIGDNO; // 0x80
		::NJIMHPJHICM* FEJCAMPDIOM; // 0x88
		::AJHOBFAMAFO* PGPHFPDPOCG; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANBMDMHDLE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANBMDMHDLE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void EPNKLHCHFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANBMDMHDLE_EPNKLHCHFIH_OFFSET))(this);
		}

		::System::Void DHBFCHLKMHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANBMDMHDLE_DHBFCHLKMHP_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AANBMDMHDLE_HCCKBPDFINA_OFFSET))(this, a1);
		}

	};
