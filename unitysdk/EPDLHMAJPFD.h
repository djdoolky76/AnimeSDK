#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKIPLLDOPCA;
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define EPDLHMAJPFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x155D1FD0)
#define EPDLHMAJPFD_CTOR_OFFSET UNITYSDK_OFFSET(0x155D1FC0)
#define EPDLHMAJPFD_ENMMKMCIEHB_OFFSET UNITYSDK_OFFSET(0x155D1DB0)
#define EPDLHMAJPFD_FLJBINCFIOD_OFFSET UNITYSDK_OFFSET(0x155D1EF0)
#define EPDLHMAJPFD_HHFNCDMNHAC_OFFSET UNITYSDK_OFFSET(0x155D1D00)
#define EPDLHMAJPFD_JBEAGPLPBAH_OFFSET UNITYSDK_OFFSET(0x155D1C50)

inline static constexpr unsigned int EPDLHMAJPFD_TypeDefinitionIndex = 47693;

	class EPDLHMAJPFD : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::OKIPLLDOPCA*>** StaticGet_CIMODNKAAPF()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::OKIPLLDOPCA*>**)UnitySDK::FromName("", "EPDLHMAJPFD")->GetStaticField(0x542C0);
		}

		static ::System::UInt32* StaticGet_AEGGLFIFGML()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "EPDLHMAJPFD")->GetStaticField(0x12AE0);
		}

		// static const ::System::Object PMIDCJIDKKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDLHMAJPFD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPDLHMAJPFD_CCTOR_OFFSET))();
		}

		static ::System::UInt32 JBEAGPLPBAH()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + EPDLHMAJPFD_JBEAGPLPBAH_OFFSET))();
		}

		static ::OKIPLLDOPCA* HHFNCDMNHAC(::System::UInt32 a1)
		{
			return ((::OKIPLLDOPCA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EPDLHMAJPFD_HHFNCDMNHAC_OFFSET))(a1);
		}

		static ::System::Void ENMMKMCIEHB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EPDLHMAJPFD_ENMMKMCIEHB_OFFSET))(a1);
		}

		static ::System::Void FLJBINCFIOD(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + EPDLHMAJPFD_FLJBINCFIOD_OFFSET))(a1, a2);
		}

	};
