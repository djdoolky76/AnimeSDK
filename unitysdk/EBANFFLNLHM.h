#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EBANFFLNLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE5040)
#define EBANFFLNLHM_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0x12CE4CC0)

inline static constexpr unsigned int EBANFFLNLHM_TypeDefinitionIndex = 67909;

	class EBANFFLNLHM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FPNHGIOHNPA()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "EBANFFLNLHM")->GetStaticField(0x6FE50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBANFFLNLHM_CTOR_OFFSET))(this);
		}

		::System::Void MIFJNPKACOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBANFFLNLHM_MIFJNPKACOB_OFFSET))(this, a1);
		}

	};
