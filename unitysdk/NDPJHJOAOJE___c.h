#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPJHJOAOJE;
namespace System { class Object; }

#define NDPJHJOAOJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC0860)
#define NDPJHJOAOJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC08A0)
#define NDPJHJOAOJE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAC08B0)

inline static constexpr unsigned int NDPJHJOAOJE___c_TypeDefinitionIndex = 31847;

	class NDPJHJOAOJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x601B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDPJHJOAOJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE___C_CTOR_OFFSET))(this);
		}

		::NDPJHJOAOJE* __cctor_b__28_0()
		{
			return ((::NDPJHJOAOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPJHJOAOJE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
