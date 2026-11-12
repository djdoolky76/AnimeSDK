#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class MOAMMLKNHOA;
namespace System { class Object; }
namespace System { class String; }

#define EEKGPHOPONF_BELMAPLFCCK_OFFSET UNITYSDK_OFFSET(0x147F4050)
#define EEKGPHOPONF_CHAMHFBICKC_OFFSET UNITYSDK_OFFSET(0x147F3D80)
#define EEKGPHOPONF_CTOR_OFFSET UNITYSDK_OFFSET(0x147F2C00)
#define EEKGPHOPONF_DICAMBHOFBB_OFFSET UNITYSDK_OFFSET(0x147F4590)
#define EEKGPHOPONF_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x147F4220)
#define EEKGPHOPONF_GKHJFNAKAPA_OFFSET UNITYSDK_OFFSET(0x147F2F40)
#define EEKGPHOPONF_JPCFLIGBBHH_OFFSET UNITYSDK_OFFSET(0x147F3740)
#define EEKGPHOPONF_LCOGBAGIFIF_OFFSET UNITYSDK_OFFSET(0x147F3040)
#define EEKGPHOPONF_NAHOCHALOHH_OFFSET UNITYSDK_OFFSET(0x147F3B50)
#define EEKGPHOPONF_OBBBGMEIDIJ_OFFSET UNITYSDK_OFFSET(0x147F43E0)
#define EEKGPHOPONF_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x147F2D20)
#define EEKGPHOPONF__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x147F3970)
#define EEKGPHOPONF__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x147F2C80)
#define EEKGPHOPONF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x147F2D90)

inline static constexpr unsigned int EEKGPHOPONF_TypeDefinitionIndex = 74886;

	class EEKGPHOPONF : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKGPHOPONF_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKGPHOPONF__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKGPHOPONF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKGPHOPONF__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void NAHOCHALOHH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + EEKGPHOPONF_NAHOCHALOHH_OFFSET))(this, a1, a2);
		}

		::System::Void CHAMHFBICKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEKGPHOPONF_CHAMHFBICKC_OFFSET))(this, a1);
		}

		::System::Void BELMAPLFCCK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEKGPHOPONF_BELMAPLFCCK_OFFSET))(this, a1);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEKGPHOPONF_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void OBBBGMEIDIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEKGPHOPONF_OBBBGMEIDIJ_OFFSET))(this, a1);
		}

		::System::String* LCOGBAGIFIF(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEKGPHOPONF_LCOGBAGIFIF_OFFSET))(this, a1);
		}

		::System::Void JPCFLIGBBHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKGPHOPONF_JPCFLIGBBHH_OFFSET))(this);
		}

		::System::Boolean DICAMBHOFBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKGPHOPONF_DICAMBHOFBB_OFFSET))(this);
		}

		::System::Boolean GKHJFNAKAPA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKGPHOPONF_GKHJFNAKAPA_OFFSET))(this);
		}

		::MOAMMLKNHOA* OICGPNAMNAI()
		{
			return ((::MOAMMLKNHOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKGPHOPONF_OICGPNAMNAI_OFFSET))(this);
		}

	};
