#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBAKMFFCPGO_CAAIIKNDGAF_OFFSET UNITYSDK_OFFSET(0x1BB0ED90)
#define NBAKMFFCPGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB0F360)
#define NBAKMFFCPGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0ED80)
#define NBAKMFFCPGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BB0F320)
#define NBAKMFFCPGO_GLNPHBHJMNJ_OFFSET UNITYSDK_OFFSET(0x1BB0F020)
#define NBAKMFFCPGO_PPMFMFJBHHK_OFFSET UNITYSDK_OFFSET(0x1BB0F060)

inline static constexpr unsigned int NBAKMFFCPGO_TypeDefinitionIndex = 79940;

	class NBAKMFFCPGO : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Int32 KBDPMBDJIOF; // 0x18
		static ::System::String** StaticGet_PPOCNNJIMAK()
		{
			return (::System::String**)UnitySDK::FromName("", "NBAKMFFCPGO")->GetStaticField(0x17D70);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_FIIICPCKMGM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "NBAKMFFCPGO")->GetStaticField(0x17D78);
		}

		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + NBAKMFFCPGO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBAKMFFCPGO_CCTOR_OFFSET))();
		}

		::System::Void CAAIIKNDGAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKMFFCPGO_CAAIIKNDGAF_OFFSET))(this);
		}

		::System::Void PPMFMFJBHHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKMFFCPGO_PPMFMFJBHHK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKMFFCPGO_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GLNPHBHJMNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAKMFFCPGO_GLNPHBHJMNJ_OFFSET))(this);
		}

	};
