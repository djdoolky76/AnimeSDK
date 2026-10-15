#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HPHJHALGKEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBC980)
#define HPHJHALGKEC_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0x15DBC5A0)

inline static constexpr unsigned int HPHJHALGKEC_TypeDefinitionIndex = 67907;

	class HPHJHALGKEC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FPNHGIOHNPA()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "HPHJHALGKEC")->GetStaticField(0x327E0);
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
