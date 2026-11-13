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

#define AANBMDMHDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x18C81F10)
#define AANBMDMHDLE_DHBFCHLKMHP_OFFSET UNITYSDK_OFFSET(0x18C81C80)
#define AANBMDMHDLE_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0x18C81A30)
#define AANBMDMHDLE_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x18C81DC0)
#define AANBMDMHDLE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18C81920)

inline static constexpr unsigned int AANBMDMHDLE_TypeDefinitionIndex = 50438;

	class AANBMDMHDLE : public ::KHAKCLAJLOB
	{
	public:
		::CNKMBDHCJAO* HBNBKCIGDNO; // 0x70
		::NJIMHPJHICM* FEJCAMPDIOM; // 0x78
		::NPMONFHGPBP* CJEKKOLJDOO; // 0x80
		::AJHOBFAMAFO* PGPHFPDPOCG; // 0x88
		::EnviromentSystemV2Space::ImageCurveTestBehavior* GILKDHAHFDM; // 0x90
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
