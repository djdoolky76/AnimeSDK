#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AGIFGJHLPCO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF2C130)
#define AGIFGJHLPCO_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0xCF2BCD0)

inline static constexpr unsigned int AGIFGJHLPCO_TypeDefinitionIndex = 67906;

	class AGIFGJHLPCO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FPNHGIOHNPA()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "AGIFGJHLPCO")->GetStaticField(0x4BE20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIFGJHLPCO_CTOR_OFFSET))(this);
		}

		::System::Void MIFJNPKACOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGIFGJHLPCO_MIFJNPKACOB_OFFSET))(this, a1);
		}

	};
