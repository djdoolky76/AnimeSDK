#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CAEPBGAOBOP_CTOR_OFFSET UNITYSDK_OFFSET(0xC47B800)
#define CAEPBGAOBOP_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0xC47B460)

inline static constexpr unsigned int CAEPBGAOBOP_TypeDefinitionIndex = 67910;

	class CAEPBGAOBOP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FPNHGIOHNPA()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "CAEPBGAOBOP")->GetStaticField(0xFA00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEPBGAOBOP_CTOR_OFFSET))(this);
		}

		::System::Void MIFJNPKACOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAEPBGAOBOP_MIFJNPKACOB_OFFSET))(this, a1);
		}

	};
