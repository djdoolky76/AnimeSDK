#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAJAJNCLFHH;
class MLEMMDNMHCG;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AMFNPJFKAOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C511200)
#define AMFNPJFKAOH_DCPCCPAAGDJ_OFFSET UNITYSDK_OFFSET(0x1C511210)
#define AMFNPJFKAOH_EBHHDNLACHP_1_OFFSET UNITYSDK_OFFSET(0x1C511510)
#define AMFNPJFKAOH_EBHHDNLACHP_OFFSET UNITYSDK_OFFSET(0x1C511280)

inline static constexpr unsigned int AMFNPJFKAOH_TypeDefinitionIndex = 41883;

	class AMFNPJFKAOH : public ::System::Object
	{
	public:
		::LAJAJNCLFHH* LIOJKFIGGIJ; // 0x10
		::MLEMMDNMHCG* KOCFEPPMGNE; // 0x18
		::System::Void _ctor(::LAJAJNCLFHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJAJNCLFHH*))((::PBYTE)hIl2Cpp + AMFNPJFKAOH_CTOR_OFFSET))(this, a1);
		}

		::MLEMMDNMHCG* DCPCCPAAGDJ()
		{
			return ((::MLEMMDNMHCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFNPJFKAOH_DCPCCPAAGDJ_OFFSET))(this);
		}

		::System::Void EBHHDNLACHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMFNPJFKAOH_EBHHDNLACHP_OFFSET))(this, a1);
		}

		::System::Void EBHHDNLACHP_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + AMFNPJFKAOH_EBHHDNLACHP_1_OFFSET))(this, a1);
		}

	};
