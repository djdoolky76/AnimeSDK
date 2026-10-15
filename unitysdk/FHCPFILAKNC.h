#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class BGMGOKBDCDK;
class PGDOIOFMMEK;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FHCPFILAKNC_CBIAJALJDDN_OFFSET UNITYSDK_OFFSET(0x15768FD0)
#define FHCPFILAKNC_CTOR_OFFSET UNITYSDK_OFFSET(0x15768450)
#define FHCPFILAKNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15768A60)
#define FHCPFILAKNC_DMPEEIOPION_OFFSET UNITYSDK_OFFSET(0x15769A80)
#define FHCPFILAKNC_DOOFMDLAODN_OFFSET UNITYSDK_OFFSET(0x15769830)
#define FHCPFILAKNC_FJOBGPNAAJH_OFFSET UNITYSDK_OFFSET(0x157686E0)
#define FHCPFILAKNC_FKGKNHBLLLA_OFFSET UNITYSDK_OFFSET(0x15769430)
#define FHCPFILAKNC_GET_ISALLDATALOADED_OFFSET UNITYSDK_OFFSET(0x15769CF0)
#define FHCPFILAKNC_GNBEDACEBOC_OFFSET UNITYSDK_OFFSET(0x15768B90)
#define FHCPFILAKNC_GOMLNHEGLIB_OFFSET UNITYSDK_OFFSET(0x15769A30)
#define FHCPFILAKNC_IKHMHLJHKDI_OFFSET UNITYSDK_OFFSET(0x15769C40)
#define FHCPFILAKNC_INIT_OFFSET UNITYSDK_OFFSET(0x15768590)
#define FHCPFILAKNC_MKJOFNBDCKH_OFFSET UNITYSDK_OFFSET(0x15769BF0)
#define FHCPFILAKNC_NCJHJCAMLLL_OFFSET UNITYSDK_OFFSET(0x15768F40)
#define FHCPFILAKNC_SET_ISALLDATALOADED_OFFSET UNITYSDK_OFFSET(0x15769D00)
#define FHCPFILAKNC__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15768C50)
#define FHCPFILAKNC__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15768D20)

inline static constexpr unsigned int FHCPFILAKNC_TypeDefinitionIndex = 67911;

	class FHCPFILAKNC : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::PGDOIOFMMEK*>* HBKIJOOJKCJ; // 0x10
		::System::Collections::Generic::HashSet_1<::BGMGOKBDCDK*>* NAHIBIEBPKI; // 0x18
		::System::Boolean FMPDLMHLBJG; // 0x20
		::System::Boolean _IsAllDataLoaded_k__BackingField; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC_DISPOSE_OFFSET))(this);
		}

		::System::Void GNBEDACEBOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC_GNBEDACEBOC_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void NCJHJCAMLLL(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FHCPFILAKNC_NCJHJCAMLLL_OFFSET))(this, a1, a2);
		}

		::System::Void CBIAJALJDDN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FHCPFILAKNC_CBIAJALJDDN_OFFSET))(this, a1, a2);
		}

		::System::Void DOOFMDLAODN(::BGMGOKBDCDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGMGOKBDCDK*))((::PBYTE)hIl2Cpp + FHCPFILAKNC_DOOFMDLAODN_OFFSET))(this, a1);
		}

		::System::Void GOMLNHEGLIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC_GOMLNHEGLIB_OFFSET))(this);
		}

		::System::Void DMPEEIOPION(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHCPFILAKNC_DMPEEIOPION_OFFSET))(this, a1);
		}

		::System::Void FJOBGPNAAJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC_FJOBGPNAAJH_OFFSET))(this);
		}

		::System::Void MKJOFNBDCKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHCPFILAKNC_MKJOFNBDCKH_OFFSET))(this, a1);
		}

		::System::Void FKGKNHBLLLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC_FKGKNHBLLLA_OFFSET))(this);
		}

		::PGDOIOFMMEK* IKHMHLJHKDI(::System::String* a1)
		{
			return ((::PGDOIOFMMEK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FHCPFILAKNC_IKHMHLJHKDI_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllDataLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCPFILAKNC_GET_ISALLDATALOADED_OFFSET))(this);
		}

		::System::Void set_IsAllDataLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHCPFILAKNC_SET_ISALLDATALOADED_OFFSET))(this, a1);
		}

	};
