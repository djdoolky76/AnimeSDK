#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCFDJCPFOGG;
namespace System { class Object; }

#define GCFDJCPFOGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20227FE0)
#define GCFDJCPFOGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20228010)
#define GCFDJCPFOGG___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x20228020)

inline static constexpr unsigned int GCFDJCPFOGG___c_TypeDefinitionIndex = 28833;

	class GCFDJCPFOGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCFDJCPFOGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFDJCPFOGG___C_CTOR_OFFSET))(this);
		}

		::GCFDJCPFOGG* __cctor_b__53_0()
		{
			return ((::GCFDJCPFOGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFDJCPFOGG___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
