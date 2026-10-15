#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFPFEGNEJDA;
class KDBJHIOOOLB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMDODCIIAJA_CTOR_OFFSET UNITYSDK_OFFSET(0x158501A0)
#define FMDODCIIAJA_ICBPOKHOLOE_OFFSET UNITYSDK_OFFSET(0x1584FF90)
#define FMDODCIIAJA_IDOFFOMIPIC_OFFSET UNITYSDK_OFFSET(0x158500C0)

	class FMDODCIIAJA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KDBJHIOOOLB*>* KAMODBKAFLI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDODCIIAJA_CTOR_OFFSET))(this);
		}

		::System::Void ICBPOKHOLOE(::System::Collections::Generic::List_1<::FFPFEGNEJDA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FFPFEGNEJDA*>*))((::PBYTE)hIl2Cpp + FMDODCIIAJA_ICBPOKHOLOE_OFFSET))(this, a1);
		}

		::KDBJHIOOOLB* IDOFFOMIPIC(::System::UInt32 a1)
		{
			return ((::KDBJHIOOOLB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMDODCIIAJA_IDOFFOMIPIC_OFFSET))(this, a1);
		}

	};
