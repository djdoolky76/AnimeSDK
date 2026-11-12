#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class BLPLICDMFEL;
class MGFAALHCHEF;
class MJEIKNGOCJO;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FCNJLLIIOBD_BDKCCOAIOAH_OFFSET UNITYSDK_OFFSET(0x165E8BE0)
#define FCNJLLIIOBD_CTOR_OFFSET UNITYSDK_OFFSET(0x165E8EE0)
#define FCNJLLIIOBD_DENHFIIGFEF_OFFSET UNITYSDK_OFFSET(0x165E8E80)
#define FCNJLLIIOBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165E8400)
#define FCNJLLIIOBD_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x165E89C0)
#define FCNJLLIIOBD_HIHNDPLNGNP_OFFSET UNITYSDK_OFFSET(0x165E87B0)
#define FCNJLLIIOBD_INIT_OFFSET UNITYSDK_OFFSET(0x165E83B0)
#define FCNJLLIIOBD_JLKBLNIOOKA_OFFSET UNITYSDK_OFFSET(0x165E84D0)
#define FCNJLLIIOBD_JOIPEEHNPNE_OFFSET UNITYSDK_OFFSET(0x165E8D40)
#define FCNJLLIIOBD_KEJLOPAGANL_OFFSET UNITYSDK_OFFSET(0x165E8E00)
#define FCNJLLIIOBD_LKFBHLBHPDI_OFFSET UNITYSDK_OFFSET(0x165E88F0)
#define FCNJLLIIOBD_NKLFONIFAAH_OFFSET UNITYSDK_OFFSET(0x165E8A10)
#define FCNJLLIIOBD_PLICLLCNJBO_OFFSET UNITYSDK_OFFSET(0x165E8830)
#define FCNJLLIIOBD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x165E8650)
#define FCNJLLIIOBD__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x165E8570)

inline static constexpr unsigned int FCNJLLIIOBD_TypeDefinitionIndex = 64973;

	class FCNJLLIIOBD : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DDMJPOODGDG; // 0x10
		::BLPLICDMFEL* FFFIENGKLIC; // 0x18
		::System::UInt32 ADFMJDJNAGB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJLLIIOBD__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJLLIIOBD__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void HIHNDPLNGNP(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_HIHNDPLNGNP_OFFSET))(this, a1, a2);
		}

		::System::Void LKFBHLBHPDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_LKFBHLBHPDI_OFFSET))(this, a1);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Boolean BDKCCOAIOAH(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_BDKCCOAIOAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PLICLLCNJBO(::MGFAALHCHEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGFAALHCHEF*))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_PLICLLCNJBO_OFFSET))(this, a1);
		}

		::System::Void JLKBLNIOOKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_JLKBLNIOOKA_OFFSET))(this);
		}

		::System::Void NKLFONIFAAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_NKLFONIFAAH_OFFSET))(this);
		}

		::MJEIKNGOCJO* JOIPEEHNPNE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::MJEIKNGOCJO*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_JOIPEEHNPNE_OFFSET))(this, a1, a2);
		}

		::System::Void KEJLOPAGANL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_KEJLOPAGANL_OFFSET))(this, a1);
		}

		::System::Boolean DENHFIIGFEF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCNJLLIIOBD_DENHFIIGFEF_OFFSET))(this, a1);
		}

	};
