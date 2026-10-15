#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BNLGDGKIFBH.h"
namespace RPG::GameCore { template <typename T> class UnmanagedStructArray_1; }
namespace System { class String; }

#define IMKLGHCKLEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A2E80)
#define IMKLGHCKLEJ_IJDPKFPJNFP_OFFSET UNITYSDK_OFFSET(0x1C4A2C00)
#define IMKLGHCKLEJ_LHOONKKLOHI_OFFSET UNITYSDK_OFFSET(0x1C4A2BB0)
#define IMKLGHCKLEJ_OKMHMIBPLPB_OFFSET UNITYSDK_OFFSET(0x1C4A2B60)

	class IMKLGHCKLEJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKLGHCKLEJ_CTOR_OFFSET))(this);
		}

		static ::System::Int64 OKMHMIBPLPB(::System::String* a1)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + IMKLGHCKLEJ_OKMHMIBPLPB_OFFSET))(a1);
		}

		static ::System::UInt64 LHOONKKLOHI(::System::String* a1)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + IMKLGHCKLEJ_LHOONKKLOHI_OFFSET))(a1);
		}

		static ::System::Int32 IJDPKFPJNFP(::RPG::GameCore::UnmanagedStructArray_1<::BNLGDGKIFBH>* a1, ::System::UInt64 a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::UnmanagedStructArray_1<::BNLGDGKIFBH>*, ::System::UInt64))((::PBYTE)hIl2Cpp + IMKLGHCKLEJ_IJDPKFPJNFP_OFFSET))(a1, a2);
		}

	};
