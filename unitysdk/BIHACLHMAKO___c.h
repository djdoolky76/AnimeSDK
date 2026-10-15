#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIHACLHMAKO;
namespace System { class Object; }

#define BIHACLHMAKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD5610)
#define BIHACLHMAKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD5640)
#define BIHACLHMAKO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDD5650)

inline static constexpr unsigned int BIHACLHMAKO___c_TypeDefinitionIndex = 33289;

	class BIHACLHMAKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIHACLHMAKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO___C_CTOR_OFFSET))(this);
		}

		::BIHACLHMAKO* __cctor_b__23_0()
		{
			return ((::BIHACLHMAKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
