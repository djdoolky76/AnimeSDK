#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJPKCHPDJBO;
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define DBBPKLDLOIN_ANGADOLNKHO_OFFSET UNITYSDK_OFFSET(0xDFD7100)
#define DBBPKLDLOIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFD7220)
#define DBBPKLDLOIN_ENMMKMCIEHB_OFFSET UNITYSDK_OFFSET(0xDFD6EA0)
#define DBBPKLDLOIN_FLJBINCFIOD_OFFSET UNITYSDK_OFFSET(0xDFD7040)
#define DBBPKLDLOIN_HHFNCDMNHAC_OFFSET UNITYSDK_OFFSET(0xDFD6FB0)
#define DBBPKLDLOIN_JBEAGPLPBAH_OFFSET UNITYSDK_OFFSET(0xDFD6DF0)

inline static constexpr unsigned int DBBPKLDLOIN_TypeDefinitionIndex = 68465;

	class DBBPKLDLOIN : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::BJPKCHPDJBO*>** StaticGet_CIMODNKAAPF()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::BJPKCHPDJBO*>**)UnitySDK::FromName("", "DBBPKLDLOIN")->GetStaticField(0x5CB90);
		}

		static ::System::UInt32* StaticGet_AEGGLFIFGML()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "DBBPKLDLOIN")->GetStaticField(0x141A0);
		}

		// static const ::System::Object PMIDCJIDKKD; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBBPKLDLOIN_CCTOR_OFFSET))();
		}

		static ::System::UInt32 JBEAGPLPBAH()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + DBBPKLDLOIN_JBEAGPLPBAH_OFFSET))();
		}

		static ::System::Void ENMMKMCIEHB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DBBPKLDLOIN_ENMMKMCIEHB_OFFSET))(a1);
		}

		static ::BJPKCHPDJBO* HHFNCDMNHAC(::System::UInt32 a1)
		{
			return ((::BJPKCHPDJBO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DBBPKLDLOIN_HHFNCDMNHAC_OFFSET))(a1);
		}

		static ::System::Boolean FLJBINCFIOD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DBBPKLDLOIN_FLJBINCFIOD_OFFSET))(a1);
		}

		static ::System::Boolean ANGADOLNKHO(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + DBBPKLDLOIN_ANGADOLNKHO_OFFSET))(a1, a2);
		}

	};
