#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBGIGFMLJDK_BDNNHJJPNDE_OFFSET UNITYSDK_OFFSET(0x15E253C0)
#define IBGIGFMLJDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E25440)
#define IBGIGFMLJDK_DPDJOAOLJCI_OFFSET UNITYSDK_OFFSET(0x15E25080)

inline static constexpr unsigned int IBGIGFMLJDK_TypeDefinitionIndex = 66467;

	class IBGIGFMLJDK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGIGFMLJDK_CTOR_OFFSET))(this);
		}

		static ::System::Void DPDJOAOLJCI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBGIGFMLJDK_DPDJOAOLJCI_OFFSET))();
		}

		static ::System::Void BDNNHJJPNDE(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + IBGIGFMLJDK_BDNNHJJPNDE_OFFSET))(a1, a2);
		}

	};
