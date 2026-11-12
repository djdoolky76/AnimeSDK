#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceID.h"
#include "unitysdk/System/Object.h"
class EFOPKDMHOME;
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IIJIKGBGGKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x173F9680)
#define IIJIKGBGGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x173F7BB0)
#define IIJIKGBGGKJ_DKAONHHPOHN_OFFSET UNITYSDK_OFFSET(0x173F9040)
#define IIJIKGBGGKJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x173F7D40)
#define IIJIKGBGGKJ_GDOMCDJHPFH_OFFSET UNITYSDK_OFFSET(0x173F8340)
#define IIJIKGBGGKJ_GJAPGJBIDKC_OFFSET UNITYSDK_OFFSET(0x173F8BB0)
#define IIJIKGBGGKJ_HBJEMMHNJNK_OFFSET UNITYSDK_OFFSET(0x173F8100)
#define IIJIKGBGGKJ_ICMHDKOICNL_OFFSET UNITYSDK_OFFSET(0x173F7EE0)
#define IIJIKGBGGKJ_JGEMCONMJEP_OFFSET UNITYSDK_OFFSET(0x173F8B30)
#define IIJIKGBGGKJ_KBDJOLDIKOG_OFFSET UNITYSDK_OFFSET(0x173F8FC0)
#define IIJIKGBGGKJ_NHPFAKIMDHE_OFFSET UNITYSDK_OFFSET(0x173F7F50)
#define IIJIKGBGGKJ_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x173F9240)

inline static constexpr unsigned int IIJIKGBGGKJ_TypeDefinitionIndex = 79989;

	class IIJIKGBGGKJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HGCNLFIMDKL; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::Entitas::ICollector_1<::LPHINGPIEAJ*>* EPEFDBOONGC; // 0x20
		::Entitas::ICollector_1<::LPHINGPIEAJ*>* HKNEOFPONCG; // 0x28
		::System::Single APGNLEAGNCF; // 0x30
		static ::Il2CppArray<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID>** StaticGet_MIEPLAENBMD()
		{
			return (::Il2CppArray<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID>**)UnitySDK::FromName("", "IIJIKGBGGKJ")->GetStaticField(0x67930);
		}

		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_CCTOR_OFFSET))();
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_EXECUTE_OFFSET))(this);
		}

		::System::Void NHPFAKIMDHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_NHPFAKIMDHE_OFFSET))(this);
		}

		::System::Void HBJEMMHNJNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_HBJEMMHNJNK_OFFSET))(this);
		}

		::System::Void GJAPGJBIDKC(::System::Single a1, ::Il2CppArray<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID>*))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_GJAPGJBIDKC_OFFSET))(this, a1, a2);
		}

		::System::Void KBDJOLDIKOG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_KBDJOLDIKOG_OFFSET))(this, a1);
		}

		::System::Void JGEMCONMJEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_JGEMCONMJEP_OFFSET))(this, a1);
		}

		::System::Boolean DKAONHHPOHN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_DKAONHHPOHN_OFFSET))(this, a1);
		}

		::System::Void GDOMCDJHPFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_GDOMCDJHPFH_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_TEARDOWN_OFFSET))(this);
		}

		::EFOPKDMHOME* ICMHDKOICNL()
		{
			return ((::EFOPKDMHOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJIKGBGGKJ_ICMHDKOICNL_OFFSET))(this);
		}

	};
