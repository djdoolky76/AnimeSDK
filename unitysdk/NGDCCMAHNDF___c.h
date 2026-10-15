#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGDCCMAHNDF;
namespace System { class Object; }

#define NGDCCMAHNDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0C670)
#define NGDCCMAHNDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0C6A0)
#define NGDCCMAHNDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB0C6B0)

inline static constexpr unsigned int NGDCCMAHNDF___c_TypeDefinitionIndex = 32407;

	class NGDCCMAHNDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGDCCMAHNDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF___C_CTOR_OFFSET))(this);
		}

		::NGDCCMAHNDF* __cctor_b__28_0()
		{
			return ((::NGDCCMAHNDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
