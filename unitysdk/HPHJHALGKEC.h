#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HPHJHALGKEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC92B0)
#define HPHJHALGKEC_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0x15DC8EF0)

	class HPHJHALGKEC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FPNHGIOHNPA()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "HPHJHALGKEC")->GetStaticField(0x37320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHJHALGKEC_CTOR_OFFSET))(this);
		}

		::System::Void MIFJNPKACOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPHJHALGKEC_MIFJNPKACOB_OFFSET))(this, a1);
		}

	};
