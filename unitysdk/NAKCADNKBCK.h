#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class BACCOPOCMPC;
class KIBHANONAPI;
class LOHGLCEJONG;
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAKCADNKBCK_CCTOR_OFFSET UNITYSDK_OFFSET(0xC327C80)
#define NAKCADNKBCK_CPPJGFNMBAA_OFFSET UNITYSDK_OFFSET(0xC327C00)
#define NAKCADNKBCK_CTOR_OFFSET UNITYSDK_OFFSET(0xC327C20)
#define NAKCADNKBCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC326B00)
#define NAKCADNKBCK_HJMPEMFELKP_OFFSET UNITYSDK_OFFSET(0xC327C10)
#define NAKCADNKBCK_IELJMHMECCD_OFFSET UNITYSDK_OFFSET(0xC327920)
#define NAKCADNKBCK_JAIFCJGJBKI_OFFSET UNITYSDK_OFFSET(0xC327B20)
#define NAKCADNKBCK_JKIMLJLLOBB_OFFSET UNITYSDK_OFFSET(0xC327BC0)
#define NAKCADNKBCK_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC326D30)
#define NAKCADNKBCK_MHDKOFPMMDG_OFFSET UNITYSDK_OFFSET(0xC327840)
#define NAKCADNKBCK_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xC327740)
#define NAKCADNKBCK_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xC3277C0)
#define NAKCADNKBCK_TICK_OFFSET UNITYSDK_OFFSET(0xC3270C0)

inline static constexpr unsigned int NAKCADNKBCK_TypeDefinitionIndex = 53202;

	class NAKCADNKBCK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::LOHGLCEJONG* OEOLAEIKMAB; // 0x18
		::System::Collections::Generic::List_1<::LOHGLCEJONG*>* EEBOFPKIONO; // 0x20
		::BACCOPOCMPC* NILDKJKBHHG; // 0x28
		::RPG::GameCore::TransformComponent* NELGDHJKAJJ; // 0x30
		::System::Collections::Generic::List_1<::KIBHANONAPI*>* LLEEKMAIHFO; // 0x38
		::System::Boolean HNALEMBOBFE; // 0x40
		::System::Boolean IKBKEOELBBN; // 0x41
		::System::Boolean HDJOGGDMCIO; // 0x42
		static ::System::Single* StaticGet_COOOECFEKHA()
		{
			return (::System::Single*)UnitySDK::FromName("", "NAKCADNKBCK")->GetStaticField(0x4560);
		}

		static ::System::Single* StaticGet_FFLMKKEKAOI()
		{
			return (::System::Single*)UnitySDK::FromName("", "NAKCADNKBCK")->GetStaticField(0x4564);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAKCADNKBCK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAKCADNKBCK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void MHDKOFPMMDG(::KIBHANONAPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIBHANONAPI*))((::PBYTE)hIl2Cpp + NAKCADNKBCK_MHDKOFPMMDG_OFFSET))(this, a1);
		}

		::System::Boolean IELJMHMECCD(::KIBHANONAPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIBHANONAPI*))((::PBYTE)hIl2Cpp + NAKCADNKBCK_IELJMHMECCD_OFFSET))(this, a1);
		}

		::System::Void JAIFCJGJBKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_JAIFCJGJBKI_OFFSET))(this);
		}

		::System::Void JKIMLJLLOBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_JKIMLJLLOBB_OFFSET))(this);
		}

		::System::Boolean CPPJGFNMBAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_CPPJGFNMBAA_OFFSET))(this);
		}

		::LOHGLCEJONG* HJMPEMFELKP()
		{
			return ((::LOHGLCEJONG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCADNKBCK_HJMPEMFELKP_OFFSET))(this);
		}

	};
