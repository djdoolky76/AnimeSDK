#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCEMKEPNKEH.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BGKBAOCBGFM_JGKFDNKDLFD;
class IAOCHINIPGK;
namespace RPG::GameCore { class RetCodeErrorConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGKBAOCBGFM_BAHBCCLJCLJ_OFFSET UNITYSDK_OFFSET(0xB18BB00)
#define BGKBAOCBGFM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB18BB60)
#define BGKBAOCBGFM_DIBIPAKKCOK_OFFSET UNITYSDK_OFFSET(0xB18B610)
#define BGKBAOCBGFM_FLGHFNPPALG_OFFSET UNITYSDK_OFFSET(0xB18B090)
#define BGKBAOCBGFM_HOBIHNJAOPE_OFFSET UNITYSDK_OFFSET(0xB18AD40)
#define BGKBAOCBGFM_IDEJJCAIJCI_OFFSET UNITYSDK_OFFSET(0xB18BC90)
#define BGKBAOCBGFM_IDMPHKEPMAM_OFFSET UNITYSDK_OFFSET(0xB18B340)
#define BGKBAOCBGFM_IIHCNANHDHG_OFFSET UNITYSDK_OFFSET(0xB18AF00)
#define BGKBAOCBGFM_IJMIPEABEAL_OFFSET UNITYSDK_OFFSET(0xB18BDC0)
#define BGKBAOCBGFM_KMNALBMMMIK_OFFSET UNITYSDK_OFFSET(0xB18B6D0)
#define BGKBAOCBGFM_MCBFKBANNKP_OFFSET UNITYSDK_OFFSET(0xB18B470)
#define BGKBAOCBGFM_MGNOLDGKKHD_OFFSET UNITYSDK_OFFSET(0xB18B560)
#define BGKBAOCBGFM_PJCKMNDBANA_OFFSET UNITYSDK_OFFSET(0xB18BA30)
#define BGKBAOCBGFM_POFHMDIOALA_OFFSET UNITYSDK_OFFSET(0xB18AFC0)

	class BGKBAOCBGFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::JCEMKEPNKEH, ::System::Object*>** StaticGet_IGHDMJECAFP()
		{
			return (::System::Collections::Generic::Dictionary_2<::JCEMKEPNKEH, ::System::Object*>**)UnitySDK::FromName("", "BGKBAOCBGFM")->GetStaticField(0x6E9C0);
		}

		static ::RPG::Client::TextID* StaticGet_KMGLDFGNKJA()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "BGKBAOCBGFM")->GetStaticField(0x15650);
		}

		// static const ::System::Object CPHBMLFKFPD; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGKBAOCBGFM_CCTOR_OFFSET))();
		}

		static ::System::Void HOBIHNJAOPE(::JCEMKEPNKEH a1, ::BGKBAOCBGFM_JGKFDNKDLFD* a2)
		{
			return ((::System::Void(*)(::JCEMKEPNKEH, ::BGKBAOCBGFM_JGKFDNKDLFD*))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_HOBIHNJAOPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IIHCNANHDHG(::JCEMKEPNKEH a1)
		{
			return ((::System::Boolean(*)(::JCEMKEPNKEH))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_IIHCNANHDHG_OFFSET))(a1);
		}

		static ::System::Void POFHMDIOALA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGKBAOCBGFM_POFHMDIOALA_OFFSET))();
		}

		static ::System::String* FLGHFNPPALG(::IAOCHINIPGK* a1)
		{
			return ((::System::String*(*)(::IAOCHINIPGK*))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_FLGHFNPPALG_OFFSET))(a1);
		}

		static ::System::Void MGNOLDGKKHD(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_MGNOLDGKKHD_OFFSET))(a1, a2);
		}

		static ::System::Void KMNALBMMMIK(::IAOCHINIPGK* a1)
		{
			return ((::System::Void(*)(::IAOCHINIPGK*))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_KMNALBMMMIK_OFFSET))(a1);
		}

		static ::System::Void DIBIPAKKCOK(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_DIBIPAKKCOK_OFFSET))(a1, a2);
		}

		static ::System::Void BAHBCCLJCLJ(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_BAHBCCLJCLJ_OFFSET))(a1, a2);
		}

		static ::System::String* IDEJJCAIJCI(::JCEMKEPNKEH a1)
		{
			return ((::System::String*(*)(::JCEMKEPNKEH))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_IDEJJCAIJCI_OFFSET))(a1);
		}

		static ::RPG::Client::TextID MCBFKBANNKP(::JCEMKEPNKEH a1)
		{
			return ((::RPG::Client::TextID(*)(::JCEMKEPNKEH))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_MCBFKBANNKP_OFFSET))(a1);
		}

		static ::System::String* IDMPHKEPMAM(::JCEMKEPNKEH a1)
		{
			return ((::System::String*(*)(::JCEMKEPNKEH))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_IDMPHKEPMAM_OFFSET))(a1);
		}

		static ::System::Boolean PJCKMNDBANA(::JCEMKEPNKEH a1)
		{
			return ((::System::Boolean(*)(::JCEMKEPNKEH))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_PJCKMNDBANA_OFFSET))(a1);
		}

		static ::RPG::GameCore::RetCodeErrorConfigRow* IJMIPEABEAL(::JCEMKEPNKEH a1)
		{
			return ((::RPG::GameCore::RetCodeErrorConfigRow*(*)(::JCEMKEPNKEH))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_IJMIPEABEAL_OFFSET))(a1);
		}

	};
