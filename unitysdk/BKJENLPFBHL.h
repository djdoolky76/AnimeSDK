#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ComicDessert/ComicDessertDeviceId.h"
class ECFOKHCPINL;
class HHDNPOIGMOP;
namespace RPG::GameCore { class ComicDessertDeviceRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BKJENLPFBHL_CGJHIMOCGJJ_OFFSET UNITYSDK_OFFSET(0xC122420)
#define BKJENLPFBHL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1226D0)
#define BKJENLPFBHL_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0xC121C20)
#define BKJENLPFBHL_JFDFCBNEMNL_OFFSET UNITYSDK_OFFSET(0xC122060)
#define BKJENLPFBHL_MMDKKMAHLFK_OFFSET UNITYSDK_OFFSET(0xC121F10)
#define BKJENLPFBHL_PPHBGJMPPGL_OFFSET UNITYSDK_OFFSET(0xC121B60)

inline static constexpr unsigned int BKJENLPFBHL_TypeDefinitionIndex = 77153;

	class BKJENLPFBHL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ECFOKHCPINL*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJENLPFBHL_CTOR_OFFSET))(this);
		}

		::ECFOKHCPINL* PPHBGJMPPGL(::RPG::Client::ComicDessert::ComicDessertDeviceId a1)
		{
			return ((::ECFOKHCPINL*(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + BKJENLPFBHL_PPHBGJMPPGL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::ECFOKHCPINL*>* MMDKKMAHLFK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::ECFOKHCPINL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJENLPFBHL_MMDKKMAHLFK_OFFSET))(this);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJENLPFBHL_HHNFFFMBIKD_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HHDNPOIGMOP*>*>* JFDFCBNEMNL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HHDNPOIGMOP*>*>*(*)())((::PBYTE)hIl2Cpp + BKJENLPFBHL_JFDFCBNEMNL_OFFSET))();
		}

		static ::ECFOKHCPINL* CGJHIMOCGJJ(::RPG::GameCore::ComicDessertDeviceRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HHDNPOIGMOP*>* a2)
		{
			return ((::ECFOKHCPINL*(*)(::RPG::GameCore::ComicDessertDeviceRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HHDNPOIGMOP*>*))((::PBYTE)hIl2Cpp + BKJENLPFBHL_CGJHIMOCGJJ_OFFSET))(a1, a2);
		}

	};
